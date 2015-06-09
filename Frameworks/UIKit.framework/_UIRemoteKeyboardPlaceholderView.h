/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder> {
    struct CGSize { 
        float width; 
        float height; 
    }  _fixedSize;
    UIView * _mirroredView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { float x1; float x2; } fixedSize;
@property (readonly) unsigned int hash;
@property (readonly, retain) UIView *placeheldView;
@property (readonly) Class superclass;

+ (id)placeholderForView:(id)arg1;
+ (id)placeholderWithWidth:(float)arg1 height:(float)arg2;

- (void)dealloc;
- (id)description;
- (struct CGSize { float x1; float x2; })fixedSize;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)placeheldView;
- (BOOL)refreshPlaceholder;
- (void)setFixedSize:(struct CGSize { float x1; float x2; })arg1;

// _UIRemoteKeyboardPlaceholderView (Splittable)

- (void)_beginSplitTransitionIfNeeded:(float)arg1 gapWidth:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_compatibleBounds;
- (void)_endSplitTransitionIfNeeded:(BOOL)arg1;
- (void)_setLeftOffset:(float)arg1 gapWidth:(float)arg2;
- (void)_setProgress:(float)arg1 boundedBy:(float)arg2;
- (void)didEndSplitTransition;
- (void)layoutMergedSubviews;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize { float x1; float x2; })arg1 rightContentSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })leftContentViewSize;
- (struct CGSize { float x1; float x2; })rightContentViewSize;
- (void)updateMergedSubviewConstraints;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize { float x1; float x2; })arg1 rightContentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)willBeginSplitTransition;

@end