package com.iambedant.androidapp
import io.reactivex.Single
import org.greeting.GitHubResponse
import retrofit2.http.GET
import retrofit2.http.Path
/**
 * Created by @iamBedant on 31/08/18.
 */
interface GitHubApi {
    @GET("users/{id}")
    fun getUser(@Path("id") userId: String): Single<GitHubResponse>
}


