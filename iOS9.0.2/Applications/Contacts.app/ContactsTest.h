/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactNavigationControllerDelegate.h>

@class NSDictionary, CNContactNavigationController, NSString;

@interface ContactsTest : NSObject <CNContactNavigationControllerDelegate> {

	NSDictionary* _testOptions;
	CNContactNavigationController* _contactNavigationController;

}

@property (nonatomic,retain) NSDictionary * testOptions;                                               //@synthesize testOptions=_testOptions - In the implementation block
@property (nonatomic,retain) CNContactNavigationController * contactNavigationController;              //@synthesize contactNavigationController=_contactNavigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)startTestWithOptions:(id)arg1 contactNavigationController:(id)arg2 ;
-(NSDictionary *)testOptions;
-(void)setTestOptions:(NSDictionary *)arg1 ;
-(CNContactNavigationController *)contactNavigationController;
-(void)setContactNavigationController:(CNContactNavigationController *)arg1 ;
-(void)dealloc;
@end
