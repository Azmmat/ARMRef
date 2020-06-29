//
//  AInstructionLoader.h
//  ARM64
//
//  Created by evilpenguin on 6/28/20.
//  Copyright © 2020 EvilPenguin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AInstruction.h"

NS_ASSUME_NONNULL_BEGIN

@interface AInstructionLoader : NSObject

- (void) load;
- (NSArray<AInstruction *> *) instructions;

@end

NS_ASSUME_NONNULL_END
