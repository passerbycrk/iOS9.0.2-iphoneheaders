/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCProfileHandler.h>

@class MCProfileServiceProfileHandler;

@interface MCConfigurationProfileHandler : MCProfileHandler {

	MCProfileServiceProfileHandler* _OTAHandler;

}
-(char)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(void)unsetAside;
-(void)remove;
-(id)initWithProfile:(id)arg1 ;
@end
