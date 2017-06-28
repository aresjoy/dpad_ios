//
//  ViewController.swift
//  DPAD_swift_demo
//
//  Created by kdh on 2017. 6. 27..
//  Copyright © 2017년 AresJoy. All rights reserved.
//

import UIKit
import DPADFramework

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        DPManager.shared().userID = "TEST"
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    // MARK: IBAction
    @IBAction func showOfferWall(_ sender: Any) {
        DPManager.shared().showOFW()
    }

}

