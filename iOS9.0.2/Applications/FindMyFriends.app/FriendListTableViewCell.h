/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class FMFFriend, UIView, FMFFollower, UILabel, UIImageView, CNAvatarView, NSLayoutConstraint, NSString;

@interface FriendListTableViewCell : UITableViewCell <CNAvatarViewDelegate> {

	char _isAllFriends;
	char _showFullLineWidth;
	char _isRegisteredForPreview;
	FMFFriend* _aFriend;
	UIView* _avatarViewContainer;
	FMFFollower* _followerAsFriend;
	UILabel* _friendNameLabel;
	UILabel* _locationLabel;
	UILabel* _timeLabel;
	UILabel* _distanceLabel;
	UIImageView* _friendImageView;
	UILabel* _shareTimeRemainingLabel;
	UIImageView* _shareTimeRemainingIndicator;
	UILabel* _dashSeparator;
	UIView* _lineView;
	CNAvatarView* _avatarView;
	UIView* _separatorCompletionView;
	NSLayoutConstraint* _lineHeight;
	NSLayoutConstraint* _separatorCompletionLineHeight;
	NSLayoutConstraint* _separatorCompletionBottomConstraint;
	NSLayoutConstraint* _locationToTimeRemainingConstraint;
	NSLayoutConstraint* _locationToTrailConstraint;
	NSLayoutConstraint* _locatedTimeToTimeRemainingConstraint;
	NSLayoutConstraint* _locatedTimeToTrailConstraint;

}

@property (assign,nonatomic,__weak) FMFFriend * aFriend;                                             //@synthesize aFriend=_aFriend - In the implementation block
@property (assign,nonatomic) char isAllFriends;                                                      //@synthesize isAllFriends=_isAllFriends - In the implementation block
@property (assign,nonatomic) char showFullLineWidth;                                                 //@synthesize showFullLineWidth=_showFullLineWidth - In the implementation block
@property (assign,nonatomic) char isRegisteredForPreview;                                            //@synthesize isRegisteredForPreview=_isRegisteredForPreview - In the implementation block
@property (nonatomic,retain) UIView * avatarViewContainer;                                           //@synthesize avatarViewContainer=_avatarViewContainer - In the implementation block
@property (assign,nonatomic,__weak) FMFFollower * followerAsFriend;                                  //@synthesize followerAsFriend=_followerAsFriend - In the implementation block
@property (nonatomic,retain) UILabel * friendNameLabel;                                              //@synthesize friendNameLabel=_friendNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                                //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                    //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UILabel * distanceLabel;                                                //@synthesize distanceLabel=_distanceLabel - In the implementation block
@property (nonatomic,retain) UIImageView * friendImageView;                                          //@synthesize friendImageView=_friendImageView - In the implementation block
@property (nonatomic,retain) UILabel * shareTimeRemainingLabel;                                      //@synthesize shareTimeRemainingLabel=_shareTimeRemainingLabel - In the implementation block
@property (nonatomic,retain) UIImageView * shareTimeRemainingIndicator;                              //@synthesize shareTimeRemainingIndicator=_shareTimeRemainingIndicator - In the implementation block
@property (nonatomic,retain) UILabel * dashSeparator;                                                //@synthesize dashSeparator=_dashSeparator - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                      //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIView * separatorCompletionView;                                       //@synthesize separatorCompletionView=_separatorCompletionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lineHeight;                                        //@synthesize lineHeight=_lineHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorCompletionLineHeight;                     //@synthesize separatorCompletionLineHeight=_separatorCompletionLineHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorCompletionBottomConstraint;               //@synthesize separatorCompletionBottomConstraint=_separatorCompletionBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * locationToTimeRemainingConstraint;                 //@synthesize locationToTimeRemainingConstraint=_locationToTimeRemainingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * locationToTrailConstraint;                         //@synthesize locationToTrailConstraint=_locationToTrailConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * locatedTimeToTimeRemainingConstraint;              //@synthesize locatedTimeToTimeRemainingConstraint=_locatedTimeToTimeRemainingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * locatedTimeToTrailConstraint;                      //@synthesize locatedTimeToTrailConstraint=_locatedTimeToTrailConstraint - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)separatorCompletionView;
-(NSLayoutConstraint *)separatorCompletionLineHeight;
-(NSLayoutConstraint *)separatorCompletionBottomConstraint;
-(UIImageView *)shareTimeRemainingIndicator;
-(UIView *)avatarViewContainer;
-(void)setupLabelsForTimeRemaining:(char)arg1 locationTimeLabel:(char)arg2 ;
-(void)setFollowerAsFriend:(FMFFollower *)arg1 ;
-(UILabel *)friendNameLabel;
-(UILabel *)distanceLabel;
-(UIImageView *)friendImageView;
-(void)setShowFullLineWidth:(char)arg1 ;
-(void)setIsAllFriends:(char)arg1 ;
-(void)refreshCellData;
-(FMFFriend *)aFriend;
-(void)updateDistanceBadge;
-(char)isAllFriends;
-(UILabel *)dashSeparator;
-(char)refreshTimeRemaining;
-(FMFFollower *)followerAsFriend;
-(UILabel *)shareTimeRemainingLabel;
-(NSLayoutConstraint *)locatedTimeToTimeRemainingConstraint;
-(NSLayoutConstraint *)locationToTimeRemainingConstraint;
-(NSLayoutConstraint *)locationToTrailConstraint;
-(NSLayoutConstraint *)locatedTimeToTrailConstraint;
-(void)setAFriend:(FMFFriend *)arg1 ;
-(void)reloadFMFData;
-(void)askToFollowTapped:(id)arg1 ;
-(char)showFullLineWidth;
-(char)isRegisteredForPreview;
-(void)setIsRegisteredForPreview:(char)arg1 ;
-(void)setAvatarViewContainer:(UIView *)arg1 ;
-(void)setFriendNameLabel:(UILabel *)arg1 ;
-(void)setDistanceLabel:(UILabel *)arg1 ;
-(void)setFriendImageView:(UIImageView *)arg1 ;
-(void)setShareTimeRemainingLabel:(UILabel *)arg1 ;
-(void)setShareTimeRemainingIndicator:(UIImageView *)arg1 ;
-(void)setDashSeparator:(UILabel *)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(void)setSeparatorCompletionView:(UIView *)arg1 ;
-(void)setSeparatorCompletionLineHeight:(NSLayoutConstraint *)arg1 ;
-(void)setSeparatorCompletionBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLocationToTimeRemainingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLocationToTrailConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLocatedTimeToTimeRemainingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLocatedTimeToTrailConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(NSLayoutConstraint *)lineHeight;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setLineHeight:(NSLayoutConstraint *)arg1 ;
-(UIView *)lineView;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(char)shouldShowActionsForAvatarView:(id)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
@end
