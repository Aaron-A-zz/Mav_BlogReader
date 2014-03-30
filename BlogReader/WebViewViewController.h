//
//  WebViewViewController.h
//  BlogReader
//
//  Created by DarkCode on 2/17/14.
//  Copyright (c) 2014 DarkCode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewViewController : UIViewController
@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;


@end
