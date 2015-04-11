//
//  DetailViewController.h
//  LessonFour
//
//  Created by oscar on 11/04/15.
//  Copyright (c) 2015 oscar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *label_MainValue;
@property (weak, nonatomic) IBOutlet UILabel *label_Price;
@property (weak, nonatomic) IBOutlet UITextView *textView_Discr;

@end
