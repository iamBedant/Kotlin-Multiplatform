package org.greeting

expect class Platform() {
    val platform: String
    fun getTimestamp(): String
}

class Transformer {
    fun greeting(): String = "Hello, ${Platform().platform}"
    fun getUserDetailsFromResponse(response: GitHubResponse): UserDetails = UserDetails(name = response.name,
            avatar = response.avatar_url,
            description = response.bio,
            gist = response.public_gists,
            repo = response.public_repos,
            lastUpdated = Platform().getTimestamp()
    )


}

data class UserDetails(val name: String,
                       val repo: Int,
                       val gist: Int,
                       val avatar : String,
                       val description: String,
                       val lastUpdated: String)
