/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CNContactContentViewController.h>
#import <libobjc.A.dylib/CNContactViewHostProtocol.h>

@protocol CNContactViewHostProtocol, NSCopying;
@class NSExtension, NSString;

@interface CNContactViewHostViewController : _UIRemoteViewController <CNContactContentViewController, CNContactViewHostProtocol> {

	id<CNContactViewHostProtocol> _delegate;
	id<NSCopying> _currentRequestIdentifier;
	NSExtension* _extension;

}

@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;              //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                             //@synthesize extension=_extension - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<CNContactViewHostProtocol> delegate;                        //@synthesize delegate=_delegate - In the implementation block
+(char)getViewController:(/*^block*/id)arg1 ;
+(id)contactViewExtension;
+(id)contextForIdentifier:(id)arg1 ;
-(void)toggleEditing;
-(char)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(char)arg1 doneButtonEnabled:(char)arg2 doneButtonText:(id)arg3 ;
-(void)didCompleteWithContact:(id)arg1 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)isPresentingFullscreen:(char)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToEditMode:(char)arg1 ;
-(void)editCancel;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)currentRequestIdentifier;
-(id)protocolContext;
-(void)setDelegate:(id<CNContactViewHostProtocol>)arg1 ;
-(id<CNContactViewHostProtocol>)delegate;
-(void)invalidate;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
@end
