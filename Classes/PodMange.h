//
//  PodMange.h
//  PodLibDemo
//
//  Created by Thuong Vu on 8/19/15.
//  Copyright (c) 2015 Thuong Vu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PodMange : NSObject

-(void) composeMail:(NSString *) title andBody:(NSString* ) body;
-(void) sendSMTPMail;

@end
