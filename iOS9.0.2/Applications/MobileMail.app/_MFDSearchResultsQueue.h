/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>
#import <libobjc.A.dylib/MFSearchResultHandler.h>

@protocol OS_dispatch_queue, MSDSearchResultsProtocol, MFMessageIterationFilter;
@class NSObject, MFMessageResultsGenerator;

@interface _MFDSearchResultsQueue : MFBufferedQueue <MFSearchResultHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MSDSearchResultsProtocol> _resultsProxy;
	id<MFMessageIterationFilter> _filter;
	MFMessageResultsGenerator* _generator;

}
-(id)initWithKeys:(id)arg1 resultsProxy:(id)arg2 filter:(id)arg3 ;
-(void)handleMessage:(id)arg1 ;
-(id)filter;
-(void)dealloc;
-(char)handleItems:(id)arg1 ;
-(void)beginResult:(unsigned)arg1 ;
-(void)setResultSubject:(char*)arg1 ;
-(void)setResultSender:(char*)arg1 ;
-(void)setResultDateRecieved:(double)arg1 ;
-(void)setResultUnread:(char)arg1 ;
-(void)endResult;
@end
