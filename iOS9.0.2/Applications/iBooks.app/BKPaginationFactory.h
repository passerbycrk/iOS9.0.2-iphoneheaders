/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKPaginationController;

@interface BKPaginationFactory : NSObject {

	BKPaginationController* _paginationController;

}

@property (nonatomic,readonly) BKPaginationController * paginationController;              //@synthesize paginationController=_paginationController - In the implementation block
-(BKPaginationController *)paginationController;
-(id)initWithPaginationController:(id)arg1 ;
-(void)addResultSentinel:(id)arg1 ;
-(char)isStyleRequiredForPagination;
-(void)addPrepareJob:(id)arg1 ;
-(id)lookupKeyForStyle:(id)arg1 geometry:(id)arg2 ;
-(void)addLayoutJob:(id)arg1 ;
-(void)addLayoutCompleteJob:(id)arg1 ;
-(void)addResultJob:(id)arg1 ;
-(void)addTOCParseJob:(id)arg1 ;
-(void)addTOCResultJob:(id)arg1 ;
-(void)quit;
@end

