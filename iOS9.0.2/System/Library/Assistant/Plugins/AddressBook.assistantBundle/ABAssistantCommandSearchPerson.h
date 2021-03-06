/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAABPersonSearch.h>
#import <AddressBook/ABAssistantCommand.h>
#import <libobjc.A.dylib/ABSearchOperationDelegate.h>

@class NSMutableArray, DADConnection, NSString;

@interface ABAssistantCommandSearchPerson : SAABPersonSearch <ABAssistantCommand, ABSearchOperationDelegate> {

	void* _addressBook;
	NSMutableArray* _peopleFound;
	DADConnection* _connection;

}

@property (nonatomic,retain) DADConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(id)_perform;
-(void)searchForMeContacts;
-(BOOL)addABSearchOperationWithPredicate:(id)arg1 toOperationQueue:(id)arg2 ;
-(BOOL)searchForLocalContacts;
-(BOOL)searchForRemoteContacts;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(char)arg3 ;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(DADConnection *)connection;
-(void)setConnection:(DADConnection *)arg1 ;
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void*)addressBook;
@end

