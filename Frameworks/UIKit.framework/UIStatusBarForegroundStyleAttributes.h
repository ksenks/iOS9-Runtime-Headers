/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarForegroundStyleAttributes : NSObject {
    NSMutableDictionary * _cachedFonts;
    BOOL  _hasBusyBackground;
    float  _height;
    int  _idiom;
    BOOL  _isTintColorBlack;
    int  _legibilityStyle;
    UIColor * _tintColor;
}

@property (nonatomic, readonly, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)_batteryColorForCapacity:(float)arg1 lowCapacity:(float)arg2 style:(unsigned int)arg3;
- (void)_cacheImage:(id)arg1 named:(id)arg2;
- (id)_cachedImageNamed:(id)arg1;
- (void)_drawText:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 textAlignment:(int)arg6;
- (float)_roundDimension:(float)arg1;
- (BOOL)_shouldUseBoldFontForStyle:(int)arg1;
- (int)activityIndicatorStyleWithSyncActivity:(BOOL)arg1;
- (float)batteryAccessoryMargin;
- (id)batteryImageNameWithCapacity:(float)arg1;
- (float)bluetoothBatteryExtraPadding;
- (id)bluetoothBatteryImageNameWithCapacity:(float)arg1;
- (void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3;
- (id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2;
- (id)cachedImageWithText:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4 textAlignment:(int)arg5 style:(int)arg6 itemType:(int)arg7;
- (void)drawBatteryInsidesWithSize:(struct CGSize { float x1; float x2; })arg1 capacity:(float)arg2 style:(unsigned int)arg3;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize { float x1; float x2; })arg1 capacity:(float)arg2;
- (void)drawText:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4 textAlignment:(int)arg5 style:(int)arg6 textSize:(struct CGSize { float x1; float x2; })arg7 textHeight:(float)arg8;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withColor:(id)arg2 withBlock:(id /* block */)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsetsForBatteryInsides;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsetsForBluetoothBatteryInsides;
- (float)edgePadding;
- (id)expandedNameForImageName:(id)arg1;
- (float)height;
- (int)idiom;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 withLegibilityStyle:(int)arg2 legibilityStrength:(float)arg3;
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(float)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 textAlignment:(int)arg6 style:(int)arg7 withLegibilityStyle:(int)arg8 legibilityStrength:(float)arg9;
- (id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4;
- (id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4 idiom:(int)arg5;
- (int)legibilityStyle;
- (id)makeTextFontForStyle:(int)arg1;
- (struct CGPoint { float x1; float x2; })positionForMoonMaskInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)proportionalFontForFont:(id)arg1;
- (float)scale;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(int)arg3 withStrength:(float)arg4;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(int)arg3 withStrength:(float)arg4 inTempGroup:(id)arg5;
- (float)shadowPadding;
- (float)sizeForMoonMaskVisible:(BOOL)arg1;
- (float)standardPadding;
- (BOOL)supportsShowingBuildVersion;
- (id)textColorForStyle:(int)arg1;
- (id)textFontForStyle:(int)arg1;
- (id)textForNetworkType:(int)arg1;
- (float)textOffsetForStyle:(int)arg1;
- (id)tintColor;
- (id)uncachedImageNamed:(id)arg1;
- (id)uniqueIdentifier;
- (id)untintedImageNamed:(id)arg1;
- (BOOL)usesVerticalLayout;

@end
