//
//  ASVariableHelper.h
//  ASVariableHelper
//
//  Created by Brovko Roman on 04.04.13.
//  Copyright (c) 2013 AshberrySoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface ASVariableHelper : NSObject

+ (id)objectFromVariableName:(NSString *)name andTarget:(id)target;

+ (void)setObject:(id)object toVariableName:(NSString *)name andTarget:(id)target;

@end
