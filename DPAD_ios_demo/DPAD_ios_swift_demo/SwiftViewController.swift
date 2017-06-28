//
//  ViewController.swift
//  DPAD_ios_swift_demo
//
//  Created by kdh on 2017. 6. 23..
//  Copyright © 2017년 AresJoy. All rights reserved.
//

import UIKit
import DPADFramework

class SwiftViewController: UIViewController {
    @IBAction func showOfferWall(_ sender: Any) {
        DPManager.shared().showOFW()
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
//        DPManager.shared().userID = <#"User ID"#>
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

