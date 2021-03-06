/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class NSMutableArray, NSMutableDictionary, NSArray, PKPaymentRequest, NSString, PKPaymentPass, CNContact, PKShippingMethod, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPassLibrary, PKPaymentTransaction, NSDecimalNumber, PKPaymentApplication;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating> {

	NSMutableArray* _items;
	NSMutableDictionary* _typeToItemMap;
	unsigned _holdPendingUpdatesCount;
	NSArray* _acceptedPasses;
	NSArray* _unavailablePasses;
	NSMutableDictionary* _statusForPasses;
	char _shippingEditable;
	PKPaymentRequest* _paymentRequest;
	NSString* _hostAppLocalizedName;
	NSString* _hostApplicationIdentifier;
	PKPaymentPass* _pass;
	CNContact* _shippingEmail;
	CNContact* _shippingPhone;
	CNContact* _shippingName;
	CNContact* _shippingAddress;
	PKShippingMethod* _shippingMethod;
	NSString* _shippingType;
	NSString* _shippingEditableMessage;
	CNContact* _billingAddress;
	PKPaymentOptionsDefaults* _defaults;
	PKPaymentOptionsRecents* _recents;
	PKPassLibrary* _library;
	PKPaymentTransaction* _pendingTransaction;
	/*^block*/id _updateHandler;
	NSDecimalNumber* _transactionAmount;
	PKPaymentApplication* _paymentApplication;
	CNContact* _cachedRecentAddress;

}

@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                            //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,retain) NSString * hostAppLocalizedName;                              //@synthesize hostAppLocalizedName=_hostAppLocalizedName - In the implementation block
@property (nonatomic,retain) NSString * hostApplicationIdentifier;                         //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                         //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) CNContact * shippingEmail;                                    //@synthesize shippingEmail=_shippingEmail - In the implementation block
@property (nonatomic,retain) CNContact * shippingPhone;                                    //@synthesize shippingPhone=_shippingPhone - In the implementation block
@property (nonatomic,retain) CNContact * shippingName;                                     //@synthesize shippingName=_shippingName - In the implementation block
@property (nonatomic,retain) CNContact * shippingAddress;                                  //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;                            //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,retain) NSString * shippingType;                                      //@synthesize shippingType=_shippingType - In the implementation block
@property (assign,getter=isShippingEditable,nonatomic) char shippingEditable;              //@synthesize shippingEditable=_shippingEditable - In the implementation block
@property (nonatomic,retain) NSString * shippingEditableMessage;                           //@synthesize shippingEditableMessage=_shippingEditableMessage - In the implementation block
@property (nonatomic,retain) CNContact * billingAddress;                                   //@synthesize billingAddress=_billingAddress - In the implementation block
@property (nonatomic,retain) NSArray * paymentSummaryItems; 
@property (nonatomic,retain) PKPaymentOptionsDefaults * defaults;                          //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) PKPaymentOptionsRecents * recents;                            //@synthesize recents=_recents - In the implementation block
@property (nonatomic,retain) PKPassLibrary * library;                                      //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * pendingTransaction;                    //@synthesize pendingTransaction=_pendingTransaction - In the implementation block
@property (nonatomic,copy) id updateHandler;                                               //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,readonly) NSString * merchantName; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,retain) NSDecimalNumber * transactionAmount;                          //@synthesize transactionAmount=_transactionAmount - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * acceptedPasses; 
@property (nonatomic,readonly) NSArray * unavailablePasses; 
@property (nonatomic,readonly) char pinRequired; 
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;                    //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) CNContact * cachedRecentAddress;                              //@synthesize cachedRecentAddress=_cachedRecentAddress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPassLibrary *)library;
-(void)setLibrary:(PKPassLibrary *)arg1 ;
-(PKPaymentOptionsDefaults *)defaults;
-(char)isValidWithError:(id*)arg1 ;
-(PKPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(CNContact *)billingAddress;
-(NSString *)shippingType;
-(CNContact *)shippingAddress;
-(PKShippingMethod *)shippingMethod;
-(NSArray *)paymentSummaryItems;
-(id)itemForType:(int)arg1 ;
-(void)setStatus:(int)arg1 forItemWithType:(int)arg2 ;
-(void)setPendingTransaction:(PKPaymentTransaction *)arg1 ;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(NSString *)hostAppLocalizedName;
-(PKPaymentTransaction *)pendingTransaction;
-(NSString *)merchantName;
-(NSDecimalNumber *)transactionAmount;
-(void)setHostAppLocalizedName:(NSString *)arg1 ;
-(char)isShippingEditable;
-(NSString *)shippingEditableMessage;
-(void)setShippingAddress:(CNContact *)arg1 ;
-(CNContact *)shippingName;
-(void)setShippingName:(CNContact *)arg1 ;
-(CNContact *)shippingEmail;
-(void)setShippingEmail:(CNContact *)arg1 ;
-(CNContact *)shippingPhone;
-(void)setShippingPhone:(CNContact *)arg1 ;
-(NSArray *)acceptedPasses;
-(NSArray *)unavailablePasses;
-(void)setBillingAddress:(CNContact *)arg1 ;
-(char)pinRequired;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)_ensureItems;
-(void)_ensureItemForClass:(Class)arg1 ;
-(void)_notifyModelChanged;
-(id)_inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned)arg2 ;
-(id)_inAppPrivateLabelPaymentPasses;
-(int)statusForPass:(id)arg1 ;
-(void)_setStatus:(int)arg1 forPaymentPass:(id)arg2 ;
-(CNContact *)cachedRecentAddress;
-(void)setCachedRecentAddress:(CNContact *)arg1 ;
-(void)_ensurePlaceholderItems;
-(void)setShippingType:(NSString *)arg1 ;
-(void)setShippingEditable:(char)arg1 ;
-(void)setShippingEditableMessage:(NSString *)arg1 ;
-(id)_initialShippingContactForProperty:(id)arg1 ;
-(id)_initialBillingContactForProperty:(id)arg1 ;
-(void)_setDataItem:(id)arg1 ;
-(id)_simulatorPasses;
-(void)setDefaults:(PKPaymentOptionsDefaults *)arg1 ;
-(void)setRecents:(PKPaymentOptionsRecents *)arg1 ;
-(void)setTransactionAmount:(NSDecimalNumber *)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)dealloc;
-(id)init;
-(PKPaymentOptionsRecents *)recents;
-(NSArray *)items;
-(void)beginUpdates;
-(void)endUpdates;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(NSString *)currencyCode;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)hostApplicationIdentifier;
@end

