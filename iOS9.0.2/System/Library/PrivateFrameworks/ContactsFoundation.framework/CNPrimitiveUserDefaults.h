/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNPrimitiveUserDefaults <NSObject>
@required
-(char)synchronize;
-(id)primitiveObjectForKey:(id)arg1;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
-(int)primitiveIntegerValueForKey:(id)arg1 keyExists:(char*)arg2;
-(char)primitiveBoolValueForKey:(id)arg1 keyExists:(char*)arg2;
-(void)primitiveRemoveObjectForKey:(id)arg1;
-(void)setupAutosync;

@end
