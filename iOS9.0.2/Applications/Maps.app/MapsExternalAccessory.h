/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MFMailComposeViewControllerDelegate.h>

@class AVExternalDevice, UIScreen, EAAccessory, NSString;

@interface MapsExternalAccessory : NSObject <MFMailComposeViewControllerDelegate> {

	char _needsFuel;
	char _rightHandDrive;
	char _hasEngineType;
	int _engineType;
	char _hasLowLightLevel;
	char _lowLightLevel;
	char _hasLimitedUI;
	AVExternalDevice* _externalDevice;
	UIScreen* _starkScreen;
	EAAccessory* _accessory;
	NSString* DisplayNameKey;
	id _navigationOwnershipToken;
	char _limitLongLists;
	char _disableSoftwareKeyboard;
	char _starkIsNavigating;
	char _destinationHandoffEnabled;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _displayName;

}

@property (nonatomic,readonly) char needsFuel;                                  //@synthesize needsFuel=_needsFuel - In the implementation block
@property (nonatomic,readonly) char rightHandDrive;                             //@synthesize rightHandDrive=_rightHandDrive - In the implementation block
@property (nonatomic,readonly) char hasEngineType;                              //@synthesize hasEngineType=_hasEngineType - In the implementation block
@property (nonatomic,readonly) int engineType;                                  //@synthesize engineType=_engineType - In the implementation block
@property (nonatomic,readonly) char hasLowLightLevel;                           //@synthesize hasLowLightLevel=_hasLowLightLevel - In the implementation block
@property (nonatomic,readonly) char lowLightLevel;                              //@synthesize lowLightLevel=_lowLightLevel - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;                         //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSString * model;                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) char destinationHandoffEnabled;                  //@synthesize destinationHandoffEnabled=_destinationHandoffEnabled - In the implementation block
@property (nonatomic,readonly) char hasLimitedUI;                               //@synthesize hasLimitedUI=_hasLimitedUI - In the implementation block
@property (nonatomic,readonly) char limitLongLists;                             //@synthesize limitLongLists=_limitLongLists - In the implementation block
@property (nonatomic,readonly) int maximumListLength; 
@property (nonatomic,readonly) char disableSoftwareKeyboard;                    //@synthesize disableSoftwareKeyboard=_disableSoftwareKeyboard - In the implementation block
@property (nonatomic,readonly) char externalAccessoryIsNavigating; 
@property (assign,nonatomic) char starkIsNavigating;                            //@synthesize starkIsNavigating=_starkIsNavigating - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(char)externalAccessoryIsNavigating;
-(char)hasLimitedUI;
-(char)destinationHandoffEnabled;
-(char)disableSoftwareKeyboard;
-(int)maximumListLength;
-(void)_deviceUpdated;
-(void)_updateNavigationOwnership;
-(char)lowLightLevel;
-(void)_updateVehicle:(id)arg1 ;
-(void)_connectAVDevice;
-(char)hasLowLightLevel;
-(void)_updateExternalDevice:(id)arg1 ;
-(char)needsFuel;
-(char)hasEngineType;
-(void)_disconnectFromVehicle;
-(void)_initializeVehicle:(id)arg1 withAccessory:(id)arg2 ;
-(void)_updateExternalNavigationState:(id)arg1 ;
-(void)sendDestination:(id)arg1 ;
-(char)starkIsNavigating;
-(void)setStarkIsNavigating:(char)arg1 ;
-(void)_disconnectAVDevice;
-(char)limitLongLists;
-(void)_accessoryDidUpdateVehicle:(id)arg1 ;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)model;
-(char)rightHandDrive;
-(NSString *)displayName;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(int)engineType;
-(void)_accessoryDidConnect:(id)arg1 ;
-(NSString *)manufacturer;
-(void)_accessoryDidUpdate:(id)arg1 ;
@end
