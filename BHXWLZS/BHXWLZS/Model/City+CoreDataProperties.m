//
//  City+CoreDataProperties.m
//  
//
//  Created by Danyow.Ed on 2017/1/22.
//
//  This file was automatically generated and should not be edited.
//

#import "City+CoreDataProperties.h"

@implementation City (CoreDataProperties)

+ (NSFetchRequest<City *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"City"];
}

@dynamic name;
@dynamic row;
@dynamic whichRule;

@end
