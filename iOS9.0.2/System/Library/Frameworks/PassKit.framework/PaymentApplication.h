/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface PaymentApplication : SQLiteEntity
+(void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2 ;
+(void)updatePaymentApplications:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3 ;
+(id)predicateForNotificationService:(id)arg1 ;
+(id)paymentApplicationsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2 ;
+(id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3 ;
+(id)_predicateForPassPID:(long long)arg1 ;
+(id)_predicateForPass:(id)arg1 ;
+(id)paymentApplicationsInDatabase:(id)arg1 forNotificationService:(id)arg2 ;
+(id)predicateForDPANIdentifier:(id)arg1 ;
+(id)predicateForSecureElementIdentifier:(id)arg1 ;
+(id)predicateForPassWithUniqueIdentifier:(id)arg1 ;
+(id)predicateForPrimaryPaymentApplication:(char)arg1 ;
+(id)paymentApplicationsInDatabase:(id)arg1 ;
+(id)paymentApplicationsInDatabase:(id)arg1 forSecureElementIdentifier:(id)arg2 ;
+(id)_predicateForPersistentID:(id)arg1 ;
+(id)_predicateForApplicationIdentifier:(id)arg1 secureElementIdentifier:(id)arg2 ;
+(id)_paymentApplicationsInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)_propertySettersForPaymentApplication;
+(id)anyInDatabase:(id)arg1 withPersistentID:(id)arg2 ;
+(id)paymentApplicationsInDatabase:(id)arg1 forPass:(id)arg2 ;
+(id)databaseTable;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
-(void)updateWithPaymentApplication:(id)arg1 ;
-(id)initWithPaymentApplication:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3 ;
-(id)paymentApplication;
@end

