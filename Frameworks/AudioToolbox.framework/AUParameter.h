/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUParameter : AUParameterNode <NSSecureCoding> {
    BOOL  __localValueStale;
    unsigned long long  _address;
    NSArray * _dependentParameters;
    _AUStaticParameterInfo * _info;
    int  _numRecordingObservers;
    int  _numUIObservers;
    float  _value;
}

@property (nonatomic) BOOL _localValueStale;
@property (nonatomic) unsigned long long address;
@property (nonatomic, readonly, copy) NSArray *dependentParameters;
@property (nonatomic, readonly) unsigned long flags;
@property (nonatomic, retain) _AUStaticParameterInfo *info;
@property (nonatomic, readonly) float maxValue;
@property (nonatomic, readonly) float minValue;
@property (nonatomic) int numRecordingObservers;
@property (nonatomic) int numUIObservers;
@property (nonatomic, readonly) unsigned long unit;
@property (nonatomic, readonly, copy) NSString *unitName;
@property (nonatomic) float value;
@property (nonatomic, readonly, copy) NSArray *valueStrings;

+ (BOOL)supportsSecureCoding;

- (unsigned long)_clumpID;
- (float)_internalValue;
- (BOOL)_localValueStale;
- (void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2;
- (unsigned long long)address;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)dealloc;
- (id)dependentParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long)flags;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned long)arg6 unitName:(id)arg7 flags:(unsigned long)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
- (float)maxValue;
- (float)minValue;
- (int)numRecordingObservers;
- (int)numUIObservers;
- (void)setAddress:(unsigned long long)arg1;
- (void)setInfo:(id)arg1;
- (void)setNumRecordingObservers:(int)arg1;
- (void)setNumUIObservers:(int)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 originator:(void*)arg2;
- (void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3;
- (void)set_clumpID:(unsigned long)arg1;
- (void)set_localValueStale:(BOOL)arg1;
- (id)stringFromValue:(const float*)arg1;
- (unsigned long)unit;
- (id)unitName;
- (float)value;
- (float)valueFromString:(id)arg1;
- (id)valueStrings;

@end
