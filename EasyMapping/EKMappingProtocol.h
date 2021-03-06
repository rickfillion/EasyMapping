//
//  EKMappingProtocol.h
//  EasyMappingExample
//
//  Created by Denys Telezhkin on 22.06.14.
//  Copyright (c) 2014 EasyKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EKObjectMapping.h"
#import "EKManagedObjectMapping.h"

#if __has_feature(nullability) // Xcode 6.3+
#pragma clang assume_nonnull begin
#else
#define nullable
#define __nullable
#endif

/**
 EKMappingProtocol must be implemented by NSObject subclasses, that will be mapped from JSON representation.
 
 EasyMapping provides convenience EKObjectModel class, that already implements this protocol.
 */
@protocol EKMappingProtocol

/**
 EKObjectMapping instance, that will be used in mapping process.
 
 @return object mapping
 */
+(EKObjectMapping *)objectMapping;

@end

/**
 EKManagedMappingProtocol must be implemented by NSManagedObject subclasses, that will be mapped from JSON representation.
 
 EasyMapping provides convenience EKManagedObjectModel class, that already implements this protocol.
 */
@protocol EKManagedMappingProtocol

/**
 EKManagedObjectMapping instance, that will be used in mapping process.
 
 @return object mapping
 */
+(EKManagedObjectMapping *)objectMapping;

@end

#if __has_feature(nullability)
#pragma clang assume_nonnull end
#endif

