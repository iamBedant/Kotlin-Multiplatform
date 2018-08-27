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

    @IBOutlet weak var greetingLabel: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
       greetingLabel.text = GreetingGreeting().greeting()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

