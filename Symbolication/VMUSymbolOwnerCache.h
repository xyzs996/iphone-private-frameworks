/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>


@interface VMUSymbolOwnerCache : NSObject {
}
// inherited: +(void)initialize;
+(id)symbolOwnerForSignature:(id)signature;
+(void)addSymbolOwner:(id)owner;
+(void)removeSignature:(id)signature;
+(id)symbolOwners;
+(void)shrinkCacheToSize:(unsigned long long)size;
+(void)flush;
+(unsigned)memoryLimit;
+(void)setMemoryLimit:(unsigned)limit;
@end

