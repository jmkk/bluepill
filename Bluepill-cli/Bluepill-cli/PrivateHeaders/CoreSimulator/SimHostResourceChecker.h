//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SimHostResourceChecker : NSObject
{
}

- (BOOL)isSafeToBootWithError:(id *)arg1;
- (unsigned long long)openFiles;
- (unsigned long long)maxFiles;
- (unsigned long long)runningSystemProcs;
- (unsigned long long)maxSystemProcs;
- (unsigned long long)runningUserProcs;
- (unsigned long long)maxUserProcs;

@end
