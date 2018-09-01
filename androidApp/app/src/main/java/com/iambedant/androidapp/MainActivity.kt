package com.iambedant.androidapp

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import com.bumptech.glide.Glide
import com.jakewharton.retrofit2.adapter.rxjava2.RxJava2CallAdapterFactory
import io.reactivex.Single
import io.reactivex.android.schedulers.AndroidSchedulers
import io.reactivex.schedulers.Schedulers
import kotlinx.android.synthetic.main.activity_main.*
import okhttp3.OkHttpClient
import okhttp3.logging.HttpLoggingInterceptor
import org.greeting.Transformer
import org.greeting.UserDetails
import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory

class MainActivity : AppCompatActivity() {

    private val loggingInterceptor = HttpLoggingInterceptor().setLevel(HttpLoggingInterceptor.Level.BODY)
    private val client = OkHttpClient.Builder().addInterceptor(loggingInterceptor).build()
    private val retrofit = Retrofit.Builder()
            .baseUrl("https://api.github.com")
            .client(client)
            .addConverterFactory(GsonConverterFactory.create())
            .addCallAdapterFactory(RxJava2CallAdapterFactory.create())
            .build()

    private val githubApi = retrofit.create(GitHubApi::class.java)

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        fbGo.setOnClickListener {
            githubApi.getUser("iamBedant")
                    .subscribeOn(Schedulers.io())
                    .flatMap { response -> Single.just(Transformer().getUserDetailsFromResponse(response))}
                    .observeOn(AndroidSchedulers.mainThread())
                    .subscribe({ r -> renderUi(r) },
                            { t -> Toast.makeText(this@MainActivity, t.localizedMessage, Toast.LENGTH_LONG).show() })
        }
    }

    private fun renderUi(r: UserDetails) {
        with(r) {
            tvName.text = name
            tvBio.text = description
            tvGists.text = "$gist Gists"
            tvRepos.text = "$repo Repos"
            Glide.with(this@MainActivity).load(avatar).into(ivAvatar)
            tvUpdated.text = lastUpdated
        }
    }

}
