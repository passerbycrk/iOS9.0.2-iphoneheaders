/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSURLConnection, NSMutableData, NSHTTPURLResponse, NSURLRequest, NSString;

@interface PDSecureConnectionManager : NSObject <NSURLConnectionDataDelegate> {

	NSURLConnection* _connection;
	NSMutableData* _data;
	NSHTTPURLResponse* _response;
	char _started;
	char _canceled;
	/*^block*/id _successHandler;
	/*^block*/id _failureHandler;
	NSURLRequest* _request;

}

@property (copy) id successHandler;                                 //@synthesize successHandler=_successHandler - In the implementation block
@property (copy) id failureHandler;                                 //@synthesize failureHandler=_failureHandler - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSuccessHandler:(id)arg1 ;
-(void)setFailureHandler:(id)arg1 ;
-(void)_sendFailure:(id)arg1 ;
-(void)_reallySendSuccess;
-(void)_reallySendFailure:(id)arg1 ;
-(void)_sendSuccess;
-(id)successHandler;
-(id)failureHandler;
-(void)cancel;
-(void)dealloc;
-(NSURLRequest *)request;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
@end

