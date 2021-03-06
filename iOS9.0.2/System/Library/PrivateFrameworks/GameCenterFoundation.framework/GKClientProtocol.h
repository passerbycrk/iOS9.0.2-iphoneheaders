/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GKClientProtocol <NSObject>
@required
-(oneway void)cancelGameInvite:(id)arg1;
-(oneway void)relayPushNotification:(id)arg1;
-(oneway void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(oneway void)beginNetworkActivity;
-(oneway void)endNetworkActivity;
-(oneway void)resetNetworkActivity;
-(oneway void)friendRequestSelected:(id)arg1;
-(oneway void)receivedChallengeSelected:(id)arg1;
-(oneway void)completedChallengeSelected:(id)arg1;
-(oneway void)challengeReceived:(id)arg1;
-(oneway void)challengeCompleted:(id)arg1;
-(oneway void)setBadgeCount:(unsigned)arg1 forType:(unsigned)arg2;
-(oneway void)setPreferencesValues:(id)arg1;
-(oneway void)setCurrentGame:(id)arg1 serverEnvironment:(int)arg2 reply:(/*^block*/id)arg3;
-(oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;
-(oneway void)respondedToNearbyInvite:(id)arg1;
-(oneway void)acceptMultiplayerGameInvite;
-(oneway void)acceptInviteWithNotification:(id)arg1;
-(oneway void)declineInviteWithNotification:(id)arg1;
-(oneway void)fetchTurnBasedData;
-(oneway void)scoreSelected:(id)arg1;
-(oneway void)achievementSelected:(id)arg1;
-(oneway void)setLogBits:(int)arg1;

@end

