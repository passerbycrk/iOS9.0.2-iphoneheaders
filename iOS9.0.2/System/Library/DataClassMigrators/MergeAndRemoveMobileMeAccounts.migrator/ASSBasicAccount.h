/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountMigrator/AccountFullAccountProtocol.h>

@protocol AccountFullAccountProtocol, AccountRefreshProtocol;
@class NSDictionary, NSMutableDictionary, NSString;

@interface ASSBasicAccount : NSObject <AccountFullAccountProtocol> {

	NSDictionary* _originalProperties;
	NSMutableDictionary* _properties;
	id<AccountFullAccountProtocol> _fullAccount;
	id<AccountRefreshProtocol> _syncAccount;
	ASSBasicAccount* _parentAccount;

}

@property (nonatomic,retain) NSDictionary * originalProperties;              //@synthesize originalProperties=_originalProperties - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedDataclassesForAccountType:(id)arg1 ;
+(void)initialize;
+(char)isMultitaskingEnabled;
+(char)multipleStoresSupportedByDataclass:(id)arg1 ;
+(id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1 ;
+(char)_isValidAccountType:(id)arg1 ;
+(id)createNewAccountUID;
+(id)accountWithType:(id)arg1 class:(id)arg2 ;
+(id)allSupportedDataclasses;
+(id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2 ;
+(id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2 ;
+(id)deleteAccountActionsForAccountType:(id)arg1 ;
+(char)showRemindersSeparatelyForAccountType:(id)arg1 ;
+(char)displayToggleForDataclass:(id)arg1 ;
+(char)userConfirmationIsRequiredByDataclass:(id)arg1 ;
+(id)_creatorsInfo;
+(id)_dataclassesProperties;
+(id)_accountCreationMap;
+(id)accountWithProperties:(id)arg1 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(char)isEnabledForDataclass:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)identifier;
-(id)type;
-(id)initWithProperties:(id)arg1 ;
-(id)displayName;
-(id)properties;
-(id)_initWithType:(id)arg1 class:(id)arg2 ;
-(void)setOriginalProperties:(NSDictionary *)arg1 ;
-(void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_orderedDataclasses:(id)arg1 ;
-(id)_profileRestrictedDataclasses;
-(id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2 ;
-(void)setFullAccount:(id)arg1 ;
-(id)_cachedSyncAccount;
-(char)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(char)arg3 ;
-(char)refreshContainerListForDataclass:(id)arg1 isUserRequested:(char)arg2 ;
-(char)refreshContainersForDataclass:(id)arg1 isUserRequested:(char)arg2 ;
-(void)renewAccountCredentialsWithHandler:(/*^block*/id)arg1 ;
-(id)propertiesToSave;
-(void)setAccountClass:(id)arg1 ;
-(id)shortTypeString;
-(void)setEnabledForDataclasses:(id)arg1 ;
-(id)fullAccountUsingLoader:(id)arg1 ;
-(char)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 ;
-(char)refreshContainerListForDataclass:(id)arg1 ;
-(char)refreshContainersForDataclass:(id)arg1 ;
-(NSDictionary *)originalProperties;
-(id)syncAccountCreatorClassNameForAccountType:(id)arg1 ;
-(id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3 ;
-(void)_forcedSetEnabled:(char)arg1 forDataclass:(id)arg2 ;
-(void)setParentAccount:(id)arg1 ;
-(id)parentAccount;
-(id)provisionedDataclasses;
-(id)syncStoreIdentifier;
-(id)typeString;
-(id)parentAccountIdentifier;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(id)enabledDataclasses;
-(id)supportedDataclasses;
-(id)accountClass;
-(void)setDisplayName:(id)arg1 ;
-(void)setEnabled:(char)arg1 forDataclass:(id)arg2 ;
@end

