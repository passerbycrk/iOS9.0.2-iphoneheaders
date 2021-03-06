/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, TabBar, TabBarItemLayoutInfo;

@interface TabBarItem : NSObject {

	char _active;
	NSString* _title;
	TabBar* _tabBar;
	TabBarItemLayoutInfo* _layoutInfo;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                    //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) TabBar * tabBar;                                //@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,retain) TabBarItemLayoutInfo * layoutInfo;              //@synthesize layoutInfo=_layoutInfo - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(char)isActive;
-(NSString *)title;
-(TabBar *)tabBar;
-(void)setTabBar:(TabBar *)arg1 ;
-(void)setActive:(char)arg1 ;
-(TabBarItemLayoutInfo *)layoutInfo;
-(void)setLayoutInfo:(TabBarItemLayoutInfo *)arg1 ;
@end

