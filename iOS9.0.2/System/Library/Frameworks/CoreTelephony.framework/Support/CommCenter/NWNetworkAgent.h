/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSUUID;


@protocol NWNetworkAgent
@property (copy) NSString * agentDescription; 
@property (copy) NSUUID * agentUUID; 
@property (getter=isActive) char active; 
@property (getter=isKernelActivated) char kernelActivated; 
@property (getter=isUserActivated) char userActivated; 
@property (getter=isVoluntary) char voluntary; 
@property (getter=isSpecificUseOnly) char specificUseOnly; 
@property (getter=isNetworkProvider) char networkProvider; 
@optional
-(char)startAgentWithOptions:(id)arg1;
-(char)assertAgentWithOptions:(id)arg1;
-(void)unassertAgentWithOptions:(id)arg1;
-(char)isSpecificUseOnly;
-(void)setSpecificUseOnly:(char)arg1;
-(char)isNetworkProvider;
-(void)setNetworkProvider:(char)arg1;

@required
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1;
-(char)isActive;
-(void)setActive:(char)arg1;
-(id)copyAgentData;
-(NSString *)agentDescription;
-(void)setAgentDescription:(id)arg1;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(id)arg1;
-(char)isKernelActivated;
-(void)setKernelActivated:(char)arg1;
-(char)isUserActivated;
-(void)setUserActivated:(char)arg1;
-(char)isVoluntary;
-(void)setVoluntary:(char)arg1;

@end

