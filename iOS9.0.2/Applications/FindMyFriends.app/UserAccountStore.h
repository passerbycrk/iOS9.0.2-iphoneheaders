/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UserAccountStore : NSObject {

	char _authTokenAccessFailure;
	char _triedLoadingLegacyFMFAccount;
	char _isAccountSwitching;
	char _shouldUpdate;
	NSString* _appleId;
	NSString* _personId;
	NSString* _fmfAppToken;
	NSString* _appHostName;

}

@property (nonatomic,retain) NSString * appleId;                             //@synthesize appleId=_appleId - In the implementation block
@property (nonatomic,retain) NSString * personId;                            //@synthesize personId=_personId - In the implementation block
@property (nonatomic,retain) NSString * fmfAppToken;                         //@synthesize fmfAppToken=_fmfAppToken - In the implementation block
@property (nonatomic,retain) NSString * appHostName;                         //@synthesize appHostName=_appHostName - In the implementation block
@property (assign,nonatomic) char authTokenAccessFailure;                    //@synthesize authTokenAccessFailure=_authTokenAccessFailure - In the implementation block
@property (assign,nonatomic) char triedLoadingLegacyFMFAccount;              //@synthesize triedLoadingLegacyFMFAccount=_triedLoadingLegacyFMFAccount - In the implementation block
@property (assign,nonatomic) char isAccountSwitching;                        //@synthesize isAccountSwitching=_isAccountSwitching - In the implementation block
@property (assign,nonatomic) char shouldUpdate;                              //@synthesize shouldUpdate=_shouldUpdate - In the implementation block
-(void)setShouldUpdate:(char)arg1 ;
-(void)iCloudAccountWillChange;
-(void)clearUserAccount;
-(void)loadFMFAccount;
-(void)setAppleId:(NSString *)arg1 ;
-(void)setFmfAppToken:(NSString *)arg1 ;
-(void)setAuthTokenAccessFailure:(char)arg1 ;
-(void)setTriedLoadingLegacyFMFAccount:(char)arg1 ;
-(void)renewAuth;
-(void)renewAuthWithoutAuthkit;
-(void)loadFMFAccountFromiCloud;
-(void)loadLegacyAccountDetailsFromDaemon;
-(void)setAppHostName:(NSString *)arg1 ;
-(void)notifyAccountSwitching;
-(id)getAppleAccountId;
-(void)setIsAccountSwitching:(char)arg1 ;
-(void)reloadUserAccount;
-(char)isAccountSwitching;
-(NSString *)appleId;
-(void)refreshAccountAuth;
-(NSString *)appHostName;
-(char)authTokenAccessFailure;
-(char)triedLoadingLegacyFMFAccount;
-(char)shouldUpdate;
-(void)dealloc;
-(id)init;
-(NSString *)fmfAppToken;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
@end

