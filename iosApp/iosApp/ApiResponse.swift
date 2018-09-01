//
//  ApiResponse.swift
//  iosApp
//
//  Created by kuliza on 31/08/18.
//  Copyright © 2018 iamBedant. All rights reserved.
//

import Foundation
import Greeting

class ApiResponse{
    
    let name:String
    let description:String
    let public_gists : Int32
    let public_repos: Int32
    let avatar_url : String

    enum SerializationError: Error{
        case missing(String)
        case invalid(String,Any)
    }

    init(json:[String:Any]) throws {
        guard let name = json["name"] as? String else {throw SerializationError.missing("name is missing")}
        guard let bio = json["bio"] as? String else {throw SerializationError.missing("name is missing")}
        guard let gist = json["public_gists"] as? Int32 else {throw SerializationError.missing("name is missing")}
        guard let repo = json["public_repos"] as? Int32 else {throw SerializationError.missing("name is missing")}
        guard let avatar = json["avatar_url"] as? String else {throw SerializationError.missing("name is missing")}
        self.name = name
        self.description = bio
        self.public_gists = gist
        self.public_repos = repo
        self.avatar_url = avatar
    }
    
    static let BASE_PATH = "https://api.github.com/users/"
    
    
    static func getUser(userId: String, completion : @escaping (ApiResponse)->()){
        let url = BASE_PATH + userId
        let request = URLRequest(url: URL(string: url)!)
        let task = URLSession.shared.dataTask(with: request){(data,response,error) in
            
            var apiResponse : ApiResponse
            if error != nil {
                print("error")
            }else{
                if let content = data {
                    do{
                        let myJson = try JSONSerialization.jsonObject(with: content, options:[]) as? [String:Any]
                        apiResponse = try ApiResponse(json:myJson!)
                        completion(apiResponse)
                    }catch{
                        print(error.localizedDescription)
                    }
                }
            }
            
        
        }
        
        task.resume()
    }
}

