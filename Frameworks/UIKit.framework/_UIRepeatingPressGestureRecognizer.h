/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {
    unsigned int  _changeCount;
    int  _delayIndex;
    float  _force;
    unsigned int  _numberOfTouchesRequired;
    BOOL  _timerOn;
}

@property (setter=_setButtonType:, nonatomic) int _buttonType;
@property (nonatomic, readonly) float _force;
@property (nonatomic) unsigned int changeCount;
@property (nonatomic) unsigned int numberOfTouchesRequired;

+ (double)delayForRepeatNumber:(int)arg1;

- (void)_beginPress;
- (int)_buttonType;
- (void)_cancelPress;
- (void)_changePress;
- (void)_clearTapTimer;
- (void)_endPress;
- (void)_finishNextStep:(id)arg1;
- (float)_force;
- (void)_nextStep:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_scheduleNextTimer;
- (void)_setButtonType:(int)arg1;
- (unsigned int)changeCount;
- (void)dealloc;
- (unsigned int)numberOfTouchesRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setChangeCount:(unsigned int)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (void)setView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
