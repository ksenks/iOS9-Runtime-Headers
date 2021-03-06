/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewAnimationState : NSObject {
    NSMutableArray * _addedCompletions;
    BOOL  _allowUserInteractionToCutOffEndOfAnimation;
    id /* block */  _alongsideAnimations;
    BOOL  _animationDidStopSent;
    <_UIBasicAnimationFactory> * _animationFactory;
    BOOL  _animationFactoryMakesPerAnimationCustomCurves;
    NSString * _animationID;
    unsigned int  _autoreverses;
    unsigned int  _cacheTransition;
    void * _context;
    int  _curve;
    CAMediaTimingFunction * _customCurve;
    double  _delay;
    id  _delegate;
    int  _didEndCount;
    SEL  _didEndSelector;
    double  _duration;
    int  _filter;
    float  _filterValue;
    UIView * _filterView;
    double  _frameInterval;
    unsigned int  _layoutSubviews;
    UIViewAnimationState * _nextState;
    struct CGPoint { 
        float x; 
        float y; 
    }  _position;
    unsigned int  _preventsAdditive;
    float  _repeatCount;
    UIViewAnimationState * _retainedSelf;
    unsigned int  _roundsToInteger;
    double  _start;
    NSMutableArray * _trackedAnimations;
    int  _transition;
    UIView * _transitionView;
    unsigned int  _useCurrentLayerState;
    NSUUID * _uuid;
    NSMutableArray * _viewsPendingConstraintBasedAnimation;
    SEL  _willStartSelector;
    unsigned int  _willStartSent;
}

@property (nonatomic, readonly) BOOL _allowsUserInteraction;

+ (void)_addConstraintPendingAnimation:(id)arg1 container:(id)arg2;
+ (void)_addViewForConstraintBasedAnimation:(id)arg1;
+ (void)_addViewPendingHidden:(id)arg1;
+ (void)popAnimationState;
+ (void)pushViewAnimationState:(id)arg1 context:(void*)arg2;

- (void).cxx_destruct;
- (void)_acceptEarlyAnimationCutoff:(id)arg1;
- (void)_addAnimationStateForTracking:(id)arg1;
- (BOOL)_allowsUserInteraction;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
- (id)_defaultAnimationForKey:(id)arg1;
- (void)_removeAnimationStateFromTrackingMap:(BOOL)arg1;
- (void)_removeAnimationStateFromTrackingMap:(BOOL)arg1 disableTrackingIfNeeded:(BOOL)arg2;
- (void)_runAlongsideAnimations;
- (void)_runConstraintBasedLayoutAnimations;
- (void)_setAlongsideAnimations:(id /* block */)arg1;
- (BOOL)_shouldAnimateAdditivelyForKey:(id)arg1 onLayer:(id)arg2;
- (BOOL)_shouldStartFromCurrentStateForLayer:(id)arg1 key:(id)arg2;
- (void)_trackAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4;
- (id)_trackedAnimations;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)configureAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (id)init;
- (void)pop;
- (void)sendDelegateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setAnimationAttributes:(id)arg1;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3 customCurve:(id)arg4;
- (void)setupCustomTimingCurve;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned int)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id /* block */)arg7 completion:(id /* block */)arg8;

@end
