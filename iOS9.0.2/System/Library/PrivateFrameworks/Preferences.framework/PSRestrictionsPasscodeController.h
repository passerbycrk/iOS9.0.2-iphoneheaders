/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PSRestrictionsPasscodeController : NSObject
+(char)validatePIN:(id)arg1 ;
+(void)setPIN:(id)arg1 ;
+(id)_keychainPasswordForRestrictions;
+(void)_removeKeychainPasswordForRestrictions;
+(id)_restrictionPasswordDictionary;
+(id)_generateSalt;
+(id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2 ;
+(void)setPasswordForRestrictions:(id)arg1 ;
+(void)removePasswordForRestrictions;
+(id)passwordForRestrictions;
+(char)legacyRestrictionsInEffect;
+(void)migrateRestrictionsPasscode;
+(id)saltForRestrictions;
+(char)settingEnabled;
@end

