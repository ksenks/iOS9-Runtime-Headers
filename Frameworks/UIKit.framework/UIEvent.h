/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIEvent : NSObject {
    struct __GSEvent { } * _gsEvent;
    struct __IOHIDEvent { } * _hidEvent;
    double  _timestamp;
}

@property (nonatomic, readonly) int subtype;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) int type;

- (id)allTouches;
- (id)coalescedTouchesForTouch:(id)arg1;
- (void)dealloc;
- (id)predictedTouchesForTouch:(id)arg1;
- (int)subtype;
- (double)timestamp;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (int)type;

// UIEvent (UIEventInternal)

- (id)_init;
- (id)_screen;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setTimestamp:(double)arg1;
- (float)_wheelVelocity;
- (id)_windows;
- (BOOL)isKeyDown;

// UIEvent (UIEventPrivate)

- (id)_allPhysicalButtons;
- (struct CGPoint { float x1; float x2; })_digitizerLocation;
- (unsigned int)_focusHeading;
- (struct __GSEvent { }*)_gsEvent;
- (struct __IOHIDEvent { }*)_hidEvent;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (BOOL)_isKeyDown;
- (id)_modifiedInput;
- (int)_modifierFlags;
- (int)_moveDirection;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1;
- (void)_setGSEvent:(struct __GSEvent { }*)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)_triggeringPhysicalButton;
- (id)_unmodifiedInput;

@end
