/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ETSettings/ETSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <ETSettings/ABPeoplePickerNavigationControllerPrivateMemberCellDelegate.h>

@class ABPeoplePickerNavigationController, PSSpecifier, NSString;

@interface ETBlockListController : PSListController <ABPeoplePickerNavigationControllerPrivateMemberCellDelegate> {

	ABPeoplePickerNavigationController* _peoplePickerController;
	void* _addressBook;
	PSSpecifier* _addNewSpecifier;
	int _specifierStartIndex;
	char _editing;
	char _ignoreBlockListChangedNotification;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadContent;
-(void)_entryDetail:(id)arg1 ;
-(id)_specifierForBlockedAddress:(id)arg1 ;
-(void)_updateEditDoneButton;
-(id)_allPhoneAndEmailValuesForRecord:(void*)arg1 ;
-(void)_updateForEditingState;
-(void)_editDoneButtonTapped:(id)arg1 ;
-(void)_addEntryFromPeoplePickerForPerson:(void*)arg1 animateView:(id)arg2 ;
-(void)_blockListChanged;
-(void)_deleteEntry:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(char)arg2 forPerson:(void*)arg3 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 withLinkedPeople:(CFArrayRef)arg3 memberCell:(id)arg4 ;
-(id)specifiers;
-(void)_dismissPeoplePicker;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(id)_specifierForRowIndex:(int)arg1 ;
-(void)_addEntry:(id)arg1 ;
@end

