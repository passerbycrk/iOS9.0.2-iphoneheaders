/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PHFavoritesManager : NSObject
+(id)currentFavorites;
+(char)dialFavoriteEntry:(id)arg1 ;
+(void)_favoritesEntryChangedNotification:(id)arg1 ;
+(void)_significantChangeHandler:(id)arg1 ;
+(void)_phoneApplicationAddressBookChangedNotification:(id)arg1 ;
+(void)_clearCachedFavorites;
+(id)predicateForTelephonyEntries;
+(id)predicateForFaceTimeAudioEntries;
+(id)predicateForFaceTimeEntries;
+(id)_favoritesWithPredicate:(id)arg1 ;
+(int)_addressBookIdentifierForContactProperty:(id)arg1 ;
+(void)recacheIdentitiesSoon;
+(void)save;
+(void)initialize;
@end

