//
//  CQCategory.h
//  OptionSelector
//
//  Created by Eric Sze on 8/11/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CQCategory : NSObject

@property (nonatomic) NSArray *options;
@property (nonatomic) NSString *selection;
@property (nonatomic) NSString *name;

@end
