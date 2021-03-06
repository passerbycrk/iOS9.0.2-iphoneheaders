/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSSManager, PSSpecifier, NSString;

@interface COSLegalController : PSListController {

	char _hasFetchedDocuments;
	char _errorHasOccurred;
	char _sarURLAdded;
	NSSManager* _nssManager;
	PSSpecifier* _legalNoticesSpecifier;
	PSSpecifier* _licenseSpecifier;
	PSSpecifier* _warrantyPointerSpecifier;
	PSSpecifier* _rfExposureSpecifier;
	NSString* _legalNoticesMarkup;
	NSString* _licenseMarkup;
	NSString* _rfExposureMarkup;
	PSSpecifier* _remoteLoadingSpecifier;

}

@property (nonatomic,retain) NSSManager * nssManager;                             //@synthesize nssManager=_nssManager - In the implementation block
@property (nonatomic,retain) PSSpecifier * legalNoticesSpecifier;                 //@synthesize legalNoticesSpecifier=_legalNoticesSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * licenseSpecifier;                      //@synthesize licenseSpecifier=_licenseSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * warrantyPointerSpecifier;              //@synthesize warrantyPointerSpecifier=_warrantyPointerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * rfExposureSpecifier;                   //@synthesize rfExposureSpecifier=_rfExposureSpecifier - In the implementation block
@property (assign,nonatomic) char hasFetchedDocuments;                            //@synthesize hasFetchedDocuments=_hasFetchedDocuments - In the implementation block
@property (assign,nonatomic) char errorHasOccurred;                               //@synthesize errorHasOccurred=_errorHasOccurred - In the implementation block
@property (nonatomic,retain) NSString * legalNoticesMarkup;                       //@synthesize legalNoticesMarkup=_legalNoticesMarkup - In the implementation block
@property (nonatomic,retain) NSString * licenseMarkup;                            //@synthesize licenseMarkup=_licenseMarkup - In the implementation block
@property (nonatomic,retain) NSString * rfExposureMarkup;                         //@synthesize rfExposureMarkup=_rfExposureMarkup - In the implementation block
@property (assign,nonatomic) char sarURLAdded;                                    //@synthesize sarURLAdded=_sarURLAdded - In the implementation block
@property (nonatomic,retain) PSSpecifier * remoteLoadingSpecifier;                //@synthesize remoteLoadingSpecifier=_remoteLoadingSpecifier - In the implementation block
-(void)queryGizmoForLegalDocuments;
-(void)handleLegalDocuments:(id)arg1 error:(id)arg2 ;
-(void)startSpinnerInCellForSpecifier:(id)arg1 ;
-(PSSpecifier *)legalNoticesSpecifier;
-(void)setLegalNoticesSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)licenseSpecifier;
-(void)setLicenseSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)warrantyPointerSpecifier;
-(void)setWarrantyPointerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)rfExposureSpecifier;
-(void)setRfExposureSpecifier:(PSSpecifier *)arg1 ;
-(char)hasFetchedDocuments;
-(void)setHasFetchedDocuments:(char)arg1 ;
-(char)errorHasOccurred;
-(void)setErrorHasOccurred:(char)arg1 ;
-(NSString *)legalNoticesMarkup;
-(void)setLegalNoticesMarkup:(NSString *)arg1 ;
-(NSString *)licenseMarkup;
-(void)setLicenseMarkup:(NSString *)arg1 ;
-(NSString *)rfExposureMarkup;
-(void)setRfExposureMarkup:(NSString *)arg1 ;
-(char)sarURLAdded;
-(void)setSarURLAdded:(char)arg1 ;
-(PSSpecifier *)remoteLoadingSpecifier;
-(void)setRemoteLoadingSpecifier:(PSSpecifier *)arg1 ;
-(id)specifiers;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)stopSpinner;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(char)shouldReloadSpecifiersOnResume;
@end

