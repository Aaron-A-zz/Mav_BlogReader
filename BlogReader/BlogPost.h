//
//  BlogPost.h
//  BlogReader
//
//  Created by DarkCode on 2/11/14.
//  Copyright (c) 2014 DarkCode. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property(nonatomic, strong) NSString *title;
@property(nonatomic, strong) NSString *author;
@property(nonatomic, strong) NSString *thumbnail;
@property(nonatomic, strong) NSString *date;
@property(nonatomic, strong) NSURL *URL;




//This is a Designated Initializer
-(id) initWithtitle:(NSString *)title;
+(id) blogPostWithTitle:(NSString *)title;

-(NSURL *) thumbnailURL;

-(NSString *)formattedDate;


@end


