/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteKeyboardWindow : UITextEffectsWindow {
    BOOL  _arePlaceholdersInitialised;
}

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(BOOL)arg2;

- (BOOL)_alwaysGetsContexts;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;
- (BOOL)_isFullscreen;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_matchingOptions:(id)arg1;
- (id)_newSceneLayer;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_wantsSceneAssociation;
- (void)invalidate;
- (void)setWindowLevel:(float)arg1;

@end
