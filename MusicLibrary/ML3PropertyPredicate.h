/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate {
@private
	NSString* _property;
}
@property(copy, nonatomic) NSString* property;
-(id)initWithProperty:(id)property;
-(void)dealloc;
-(id)SQLJoinClausesForClass:(Class)aClass;
@end

