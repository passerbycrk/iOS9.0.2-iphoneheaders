/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, SKUISettingsHeaderFooterDescription, SKUISettingsObjectStore, SKUISettingsContext, SKUISettingsGroupController, SKUISettingsGroupsDescription, SKUIGroupViewElement, SKUIClientContext;

@interface SKUISettingsGroupDescription : NSObject {

	NSMutableSet* _editableSettings;
	SKUISettingsHeaderFooterDescription* _footerDescription;
	SKUISettingsHeaderFooterDescription* _headerDescription;
	SKUISettingsObjectStore* _settingDescriptions;
	SKUISettingsContext* _settingsContext;
	SKUISettingsGroupController* _controller;
	SKUISettingsGroupsDescription* _parent;
	SKUIGroupViewElement* _viewElement;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext; 
@property (assign,nonatomic,__weak) SKUISettingsGroupController * controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) SKUISettingsGroupsDescription * parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) SKUIGroupViewElement * viewElement;                           //@synthesize viewElement=_viewElement - In the implementation block
-(void)reloadData;
-(id)description;
-(char)isEmpty;
-(unsigned)index;
-(void)_presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(SKUISettingsGroupController *)controller;
-(void)setController:(SKUISettingsGroupController *)arg1 ;
-(SKUISettingsGroupsDescription *)parent;
-(void)setParent:(SKUISettingsGroupsDescription *)arg1 ;
-(char)hasHeader;
-(char)hasFooter;
-(SKUIClientContext *)clientContext;
-(SKUIGroupViewElement *)viewElement;
-(id)indexPathForSettingDescription:(id)arg1 ;
-(void)deleteSettingDescription:(id)arg1 ;
-(void)_dismissViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)dispatchUpdate:(id)arg1 ;
-(void)hideSettingDescription:(id)arg1 ;
-(char)isSettingDescriptionHidden:(id)arg1 ;
-(void)reloadSettingDescription:(id)arg1 ;
-(void)revealSettingDescription:(id)arg1 ;
-(void)_updatedEditsValid;
-(void)setViewElement:(SKUIGroupViewElement *)arg1 ;
-(void)addSettingDescription:(id)arg1 ;
-(void)deleteSettingsGroup;
-(void)hideSettingsGroup;
-(void)_dispatchUpdateForSettingDescription:(id)arg1 updateType:(int)arg2 ;
-(void)revealSettingsGroup;
-(id)settingDescriptionAtIndex:(unsigned)arg1 ;
-(id)initWithParent:(id)arg1 settingsContext:(id)arg2 ;
-(void)addSettingViewElement:(id)arg1 ;
-(void)addSibling:(id)arg1 ;
-(id)editableSettingDescriptions;
-(id)footerDescription;
-(char)hasEditableSettingDescriptions;
-(char)hasNoVisibleSettings;
-(id)headerDescription;
-(id)newSiblingWithClass:(Class)arg1 ;
-(unsigned)numberOfSettings;
-(void)recycle;
-(void)requestLayoutForWidth:(float)arg1 context:(id)arg2 ;
-(void)setFooterDescription:(id)arg1 ;
-(void)setFooterViewElement:(id)arg1 ;
-(void)setHeaderDescription:(id)arg1 ;
-(void)setHeaderViewElement:(id)arg1 ;
-(id)viewElementForSettingAtIndex:(unsigned)arg1 ;
@end

