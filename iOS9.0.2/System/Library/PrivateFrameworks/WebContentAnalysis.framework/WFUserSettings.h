/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, WFWhitelistSiteBuffer, NSArray;

@interface WFUserSettings : NSObject {

	NSDictionary* _userSettings;
	NSString* _userName;
	WFWhitelistSiteBuffer* _contentFilterOverriddenWhiteListedSitesBuffer;
	WFWhitelistSiteBuffer* _contentFilterOverriddenBlackListedSitesBuffer;
	WFWhitelistSiteBuffer* _whiteListedSitesBuffer;

}

@property (nonatomic,copy) NSString * userName;                                                  //@synthesize userName=_userName - In the implementation block
@property (assign,nonatomic) int restrictionType; 
@property (nonatomic,readonly) char canEditRestrictionType; 
@property (nonatomic,retain) NSArray * contentFilterOverriddenWhiteListedSites; 
@property (nonatomic,readonly) char canEditContentFilterOverriddenWhiteListedSites; 
@property (nonatomic,retain) NSArray * contentFilterOverriddenBlackListedSites; 
@property (nonatomic,readonly) char canEditContentFilterOverriddenBlackListedSites; 
@property (nonatomic,retain) NSArray * whiteListAllowedSites; 
@property (nonatomic,readonly) char canEditWhiteListAllowedSites; 
@property (assign,nonatomic) char overridesAllowed; 
@property (nonatomic,readonly) char canEditOverridesAllowed; 
+(id)metasitesPath;
+(id)_arrayByConvertingLinesInStringsAtPath:(id)arg1 ;
+(id)metasitesExceptionPath;
+(id)_metasiteDomainNamesArray;
+(id)_sharedMetasiteDomainNamesDictionary;
+(id)_sharedMetasiteExceptionsDomainNamesArray;
-(NSString *)userName;
-(void)dealloc;
-(void)setContentFilterOverriddenWhiteListedSites:(NSArray *)arg1 ;
-(void)setContentFilterOverriddenBlackListedSites:(NSArray *)arg1 ;
-(void)setWhiteListAllowedSites:(NSArray *)arg1 ;
-(NSArray *)contentFilterOverriddenWhiteListedSites;
-(NSArray *)contentFilterOverriddenBlackListedSites;
-(NSArray *)whiteListAllowedSites;
-(void)setUserName:(NSString *)arg1 ;
-(char)contentFilterListsAllowURL:(id)arg1 ;
-(char)contentFilterOverridesEnabled;
-(char)whiteListEnabled;
-(id)initWithUserName:(id)arg1 ;
-(int)restrictionType;
-(char)alwaysAllowHTTPS;
-(void)setAlwaysAllowHTTPS:(char)arg1 ;
-(char)overridesAllowed;
-(char)contentFilterOverriddenBlackListContainsURL:(id)arg1 ;
-(char)contentFilterEnabled;
-(char)autoWhitelistContainsURL:(id)arg1 ;
-(char)contentFilterOverriddenWhiteListContainsURL:(id)arg1 ;
-(char)whiteListContainsURL:(id)arg1 ;
-(id)_managedDefaultsPath;
-(char)_setManagedDefaults:(id)arg1 ;
-(id)_userSettingsForUser:(id)arg1 ;
-(char)_addManagedDefaults:(id)arg1 ;
-(void)setRestrictionType:(int)arg1 ;
-(id)contentFilterOverriddenWhiteListedSitesBuffer;
-(char)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2 ;
-(id)contentFilterOverriddenBlackListedSitesBuffer;
-(id)whiteListedSitesBuffer;
-(char)canEditRestrictionType;
-(id)contentFilterOverriddenSites;
-(char)canEditContentFilterOverriddenWhiteListedSites;
-(char)canEditContentFilterOverriddenBlackListedSites;
-(char)canEditWhiteListAllowedSites;
-(void)setOverridesAllowed:(char)arg1 ;
-(char)canEditOverridesAllowed;
-(char)canEditAlwaysAllowHTTPS;
-(char)restrictWebEnabled;
-(void)setRestrictWebEnabled:(char)arg1 ;
-(void)setContentFilterEnabled:(char)arg1 ;
-(void)setContentFilterOverridesEnabled:(char)arg1 ;
-(void)setWhiteListEnabled:(char)arg1 ;
@end
