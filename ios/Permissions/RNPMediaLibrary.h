//
//  RNPMediaLibrary.h
//  ReactNativePermissions
//
//  Created by Melissa Carpenter on 10/3/17.
//  Copyright © 2017 Yonah Forst. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCTConvert+RNPStatus.h"

@interface RNPMediaLibrary : NSObject

+ (NSString *)getStatus;
+ (void)request:(void (^)(NSString *))completionHandler;

@end
