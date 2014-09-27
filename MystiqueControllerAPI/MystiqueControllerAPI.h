//
//  MystiqueControllerAPI.h
//  MystiqueControllerAPI
//
//  Created by Eke, John on 9/27/14.
//  Copyright (c) 2014 Mystique Controller. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MystiqueControllerDelegate <NSObject>

-(void) didFlapGesture;
-(void) didSlapGesture;
-(void) didPunchGesture;

@end

@interface MystiqueControllerAPI : NSObject

@end
