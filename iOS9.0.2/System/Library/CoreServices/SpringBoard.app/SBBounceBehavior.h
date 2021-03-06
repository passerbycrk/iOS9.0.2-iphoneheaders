/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@protocol UIDynamicItem;
@class UIDynamicItemBehavior, UICollisionBehavior, UIGravityBehavior, UIAttachmentBehavior;

@interface SBBounceBehavior : UIDynamicBehavior {

	float _midwayPosition;
	float _completionThreshold;
	float _previousLinearVelocity;
	CGRect _targetFrame;
	id<UIDynamicItem> _item;
	UIDynamicItemBehavior* _bodyBehavior;
	UICollisionBehavior* _collisionBehavior;
	UIGravityBehavior* _gravityBehavior;
	UIDynamicItemBehavior* _pushBehavior;
	UIAttachmentBehavior* _draggingBehavior;
	float _gravity;
	float _velocity;
	float _elasticity;
	float _friction;
	float _resistance;
	float _minVelocityToAssist;
	float _maxVelocityToAssist;
	float _maxVelocityAssistance;
	UIEdgeInsets _boundaryInsets;

}

@property (assign,nonatomic) float gravity;                            //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) float velocity;                           //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) float elasticity;                         //@synthesize elasticity=_elasticity - In the implementation block
@property (assign,nonatomic) float friction;                           //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) float resistance;                         //@synthesize resistance=_resistance - In the implementation block
@property (assign,nonatomic) float minVelocityToAssist;                //@synthesize minVelocityToAssist=_minVelocityToAssist - In the implementation block
@property (assign,nonatomic) float maxVelocityToAssist;                //@synthesize maxVelocityToAssist=_maxVelocityToAssist - In the implementation block
@property (assign,nonatomic) float maxVelocityAssistance;              //@synthesize maxVelocityAssistance=_maxVelocityAssistance - In the implementation block
@property (assign,nonatomic) UIEdgeInsets boundaryInsets;              //@synthesize boundaryInsets=_boundaryInsets - In the implementation block
-(float)_percentComplete;
-(float)minVelocityToAssist;
-(void)setMinVelocityToAssist:(float)arg1 ;
-(float)maxVelocityToAssist;
-(void)setMaxVelocityToAssist:(float)arg1 ;
-(float)maxVelocityAssistance;
-(void)setMaxVelocityAssistance:(float)arg1 ;
-(float)_minVelocityToAssist;
-(float)_maxVelocityToAssist;
-(id)initWithItem:(id)arg1 targetFrame:(CGRect)arg2 ;
-(void)finishInteractionWithVelocity:(CGPoint)arg1 removingGravityAtMidway:(char)arg2 ;
-(void)setBoundaryInsets:(UIEdgeInsets)arg1 ;
-(void)_setupCollisionBoundaries;
-(char)_itemCompleted;
-(char)_itemStopped;
-(void)_frameCollisionBoundaryPoints:(CGPoint*)arg1 ;
-(char)_isGravityDown;
-(void)_removeDraggingBehavior;
-(char)_itemPastMidway;
-(float)_adjustedVelocity:(float)arg1 ;
-(void)finishInteractionWithVelocity:(CGPoint)arg1 ;
-(float)_itemOriginY;
-(char)_shouldAssistWithVelocity:(float)arg1 ;
-(float)_velocityAssistance;
-(float)_percentRemaining;
-(void)initiateInteractionFromPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithPoint:(CGPoint)arg1 ;
-(void)finishInteraction;
-(UIEdgeInsets)boundaryInsets;
-(void)dealloc;
-(void)setVelocity:(float)arg1 ;
-(char)isActive;
-(float)velocity;
-(void)setElasticity:(float)arg1 ;
-(void)setFriction:(float)arg1 ;
-(void)setResistance:(float)arg1 ;
-(float)elasticity;
-(float)friction;
-(float)resistance;
-(void)bounce;
-(void)_beginInteraction;
-(char)allowsAnimatorToStop;
-(float)gravity;
-(void)setGravity:(float)arg1 ;
-(id)initWithItem:(id)arg1 ;
@end

