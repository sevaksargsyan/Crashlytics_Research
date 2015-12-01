//
//  DetailViewController.h
//  Project
//
//  Created by Intern on 11/30/15.
//  Copyright © 2015 Macadamian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

