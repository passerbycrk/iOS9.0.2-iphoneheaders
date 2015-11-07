/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ASPolicyManagerDelegate;
@interface ASPolicyManager : NSObject {

	char _updatingPolicy;
	id<ASPolicyManagerDelegate> _delegate;

}

@property (assign,nonatomic) char updatingPolicy;                                      //@synthesize updatingPolicy=_updatingPolicy - In the implementation block
@property (assign,nonatomic,__weak) id<ASPolicyManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ASPolicyManagerDelegate>)arg1 ;
-(id<ASPolicyManagerDelegate>)delegate;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(char)updatingPolicy;
-(void)requestPolicyUpdate;
-(void)setUpdatingPolicy:(char)arg1 ;
-(id)currentPolicyKey;
-(id)initWithAccount:(id)arg1 ;
@end
