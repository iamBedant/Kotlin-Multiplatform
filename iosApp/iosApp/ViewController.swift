//
//  ViewController.swift
//  iosApp
//
//  Created by kuliza on 27/08/18.
//  Copyright © 2018 iamBedant. All rights reserved.
//

import UIKit
import Greeting


class ViewController: UIViewController {

    @IBOutlet weak var tfUserId: UITextField!
   
    @IBOutlet weak var btnGo: UIButton!
    
    @IBOutlet weak var ivAvatar: UIImageView!
    
    @IBOutlet weak var lblBio: UILabel!
    
    @IBOutlet weak var lblUpdatedAt: UILabel!
    
    @IBOutlet weak var lblGists: UILabel!
    
    @IBOutlet weak var lblRepos: UILabel!
    
    @IBOutlet weak var lblName: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        ApiResponse.getUser(userId: "iamBedant") {(results: ApiResponse) in
            self.renderUi(details: GreetingTransformer().getUserDetailsFromResponse(response: GreetingGitHubResponse(login: "<#T##String#>", id: 12, node_id: "<#T##String#>", avatar_url: results.avatar_url, gravatar_id: "<#T##String#>", url: "<#T##String#>", html_url: "<#T##String#>", followers_url: "<#T##String#>", following_url: "<#T##String#>", gists_url: "<#T##String#>", starred_url: "<#T##String#>", subscriptions_url: "<#T##String#>", organizations_url: "<#T##String#>", repos_url: "<#T##String#>", events_url: "<#T##String#>", received_events_url: "<#T##String#>", type: "<#T##String#>", site_admin: false, name: results.name, company: "<#T##String#>", blog: "<#T##String#>", location: "<#T##String#>", email: "<#T##Any#>", hireable: true, bio: results.description, public_repos: results.public_repos, public_gists: results.public_gists, followers: 12, following: 12, created_at: "<#T##String#>", updated_at: "<#T##String#>"))
        )}
    }
    
    
    func renderUi(details: GreetingUserDetails){
        lblRepos.text = String(details.repo)
        lblGists.text = String(details.gist)
        lblBio.text = details.name
        lblUpdatedAt.text = details.lastUpdated
        lblName.text = details.name
        ivAvatar.load(url: URL(fileURLWithPath: details.avatar)
        )
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

