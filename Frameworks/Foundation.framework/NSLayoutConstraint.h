/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutConstraint : NSObject <NSISConstraint> {
    float  _coefficient;
    float  _constant;
    id  _container;
    id  _firstItem;
    unsigned long long  _layoutConstraintFlags;
    float  _loweredConstant;
    id  _markerAndPositiveExtraVar;
    id  _negativeExtraVar;
    float  _priority;
    id  _secondItem;
}

@property (getter=isActive) BOOL active;
@property float constant;
@property id container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) float dissatisfaction;
@property (getter=_encodedConstant, setter=_setEncodedConstant:, retain) _NSLayoutConstraintConstant *encodedConstant;
@property int firstAttribute;
@property id firstItem;
@property (readonly) BOOL hasBeenLowered;
@property (readonly) unsigned int hash;
@property (copy) NSString *identifier;
@property (getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:, nonatomic) BOOL loweredConstantNeedsUpdate;
@property float multiplier;
@property float priority;
@property int relation;
@property int secondAttribute;
@property id secondItem;
@property BOOL shouldBeArchived;
@property (readonly) Class superclass;
@property (copy) NSString *symbolicConstant;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_addOrRemoveConstraints:(id)arg1 activate:(BOOL)arg2;
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (void)_setLegacyDecodingOnly:(BOOL)arg1;
+ (void)activateConstraints:(id)arg1;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 constant:(float)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 constant:(float)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned int)arg2 metrics:(id)arg3 views:(id)arg4;
+ (void)deactivateConstraints:(id)arg1;

- (BOOL)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(float)arg3 lastLoweredConstantWasRounded:(BOOL)arg4 mutuallyExclusiveConstraints:(id*)arg5;
- (void)_addToEngine:(id)arg1;
- (BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(float)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (float)_allowedMagnitudeForIntegralizationAdjustment;
- (float)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(float*)arg1;
- (void)_clearWeakContainerReference;
- (id)_constantDescriptionForDTrace;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (int)_constraintType;
- (void)_containerGeometryDidChange;
- (id)_deallocSafeDescription;
- (BOOL)_deferDTraceLogging;
- (BOOL)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_descriptionforSymbolicConstant;
- (BOOL)_effectiveConstant:(float*)arg1 error:(id*)arg2;
- (struct CGSize { float x1; float x2; })_engineToContainerScalingCoefficients;
- (void)_ensureValueMaintainsArbitraryLimit:(float*)arg1;
- (float)_fudgeIncrement;
- (id)_identifier;
- (BOOL)_isFudgeable;
- (BOOL)_isIBPrototypingLayoutConstraint;
- (id)_layoutEngine;
- (BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2;
- (BOOL)_loweredConstantIsRounded;
- (BOOL)_loweredConstantNeedsUpdate;
- (id)_loweredExpression;
- (void)_makeExtraVars;
- (id)_markerAndPositiveExtraVar;
- (id)_negativeExtraVar;
- (BOOL)_nsib_isRedundant;
- (BOOL)_nsib_isRedundantInEngine:(id)arg1;
- (int)_primitiveConstraintType;
- (id)_priorityDescription;
- (void)_removeFromEngine:(id)arg1;
- (void)_setDeferDTraceLogging:(BOOL)arg1;
- (void)_setFirstAttribute:(int)arg1;
- (void)_setFirstItem:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setLoweredConstantNeedsUpdate:(BOOL)arg1;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (void)_setMultiplier:(float)arg1;
- (void)_setNegativeExtraVar:(id)arg1;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (void)_setRelation:(int)arg1;
- (void)_setSecondAttribute:(int)arg1;
- (void)_setSecondItem:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1 constant:(float)arg2;
- (id)_symbolicConstant;
- (BOOL)_tryToChangeContainerGeometryWithUndoHandler:(id /* block */)arg1;
- (id)animations;
- (id)asciiArtDescription;
- (float)constant;
- (id)container;
- (void)dealloc;
- (id)description;
- (id)descriptionAccessory;
- (float)dissatisfaction;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (int)firstAttribute;
- (id)firstItem;
- (BOOL)hasBeenLowered;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isActive;
- (float)multiplier;
- (float)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (float)priority;
- (float)priorityForVariable:(id)arg1;
- (int)relation;
- (int)secondAttribute;
- (id)secondItem;
- (void)setActive:(BOOL)arg1;
- (void)setAnimations:(id)arg1;
- (void)setConstant:(float)arg1;
- (void)setContainer:(id)arg1;
- (void)setHasBeenLowered:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setShouldBeArchived:(BOOL)arg1;
- (void)setSymbolicConstant:(id)arg1;
- (BOOL)shouldBeArchived;
- (id)symbolicConstant;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit

// NSLayoutConstraint (UIInterfaceBuilderSupport)

- (id)_encodedConstant;
- (void)_setEncodedConstant:(id)arg1;

// NSLayoutConstraint (UIKitSymbolicConstantResolution)

+ (BOOL)_UIWantsMarginAttributeSupport;

- (BOOL)defaultResolvedValue:(float*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3;

// NSLayoutConstraint (_UILayoutGuideInternalSupport)

- (id)_uiFirstRefView;
- (id)_uiSecondRefView;

// NSLayoutConstraint (_UIOrderedLayoutArrangementSupport)

- (id)_ola_dimensionItem;
- (id)_ola_dimensionRefItem;

@end
