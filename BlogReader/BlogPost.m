//
//  BlogPost.m
//  BlogReader
//
//  Created by DarkCode on 2/11/14.
//  Copyright (c) 2014 DarkCode. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

-(id)initWithtitle:(NSString *)title {
    self = [super init];
    
    if (self) {
        self.title = title;
        self.author = nil;
        self.thumbnail = nil;
    }
    return self; 
}

+(id) blogPostWithTitle:(NSString *)title {
    return [[self alloc] initWithtitle:title];
}


-(NSURL *) thumbnailURL {
    NSLog(@"%@", [self.thumbnail class]);
    return [NSURL URLWithString:self.thumbnail];
}

-(NSString *)formattedDate{
    NSDateFormatter *dateFormatter =[[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"YYYY-MM-DD HH:mm:ss"];
    NSDate *tempDate =[dateFormatter dateFromString:self.date];
    [dateFormatter setDateFormat:@"EE MM,dd"];
    return [dateFormatter stringFromDate:tempDate];
}



@end