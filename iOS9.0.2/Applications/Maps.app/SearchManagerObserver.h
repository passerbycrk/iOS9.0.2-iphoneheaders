/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SearchManagerObserver <NSObject>
@optional
-(void)searchManager:(id)arg1 didReceiveResults:(id)arg2 scrollToResults:(char)arg3 displayPlaceCardForResult:(id)arg4;
-(void)searchManager:(id)arg1 didReceiveCategoryResults:(id)arg2;
-(void)searchManager:(id)arg1 didManuallySetResults:(id)arg2;
-(void)searchManager:(id)arg1 didReceiveRefinementResults:(id)arg2;
-(void)searchManager:(id)arg1 willPerformSearchForQuery:(id)arg2;
-(void)searchManager:(id)arg1 didReceiveNearbyCategoryResults:(id)arg2 sectionHeader:(id)arg3 andError:(id)arg4;
-(void)searchManagerDidClearSearchResults:(id)arg1;
-(void)searchManagerSearchFailed:(id)arg1 withError:(id)arg2;
-(void)searchManagerSearchCanceled:(id)arg1;

@end

