/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>
#import "NSCoding.h"

@class MLPredicate;

@interface MPMediaServerPropertyPredicate : NSObject <NSCoding> {
@private
	MLPredicate* _predicate;
}
@property(readonly, assign, nonatomic) MLPredicate* MLPredicate;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)description;
@end

