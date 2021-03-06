/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKBookParser.h>

@class AEPdfCacheObject;

@interface BKPdfBookParser : BKBookParser {

	AEPdfCacheObject* _pdfObject;

}

@property (nonatomic,retain) AEPdfCacheObject * pdfObject;              //@synthesize pdfObject=_pdfObject - In the implementation block
+(unsigned)pdfAnchorToPageNumber:(id)arg1 ;
+(unsigned)pdfHrefToPageNumber:(id)arg1 ;
-(void)setPdfObject:(AEPdfCacheObject *)arg1 ;
-(AEPdfCacheObject *)pdfObject;
-(int)loadMetadata;
-(void)constructBKNavigationInfoWithPdfTocParser:(id)arg1 ;
-(void)constructBKDocumentWithPdfTocParser:(id)arg1 ;
-(id)hrefForPageNumber:(unsigned)arg1 ;
-(int)constructBKNavigationInfoWithPdfTocEntry:(id)arg1 absoluteOrder:(int)arg2 indentationLevel:(int)arg3 ;
-(void)dealloc;
-(int)parse:(char)arg1 ;
@end

