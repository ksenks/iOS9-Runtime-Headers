/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyedArchiver : NSCoder {
    void * _cache;
    unsigned int  _cacheSize;
    id  _classNameMap;
    id  _classes;
    id  _conditionals;
    id  _containers;
    id  _delegate;
    unsigned int  _estimatedCount;
    unsigned int  _flags;
    unsigned int  _genericKey;
    id  _objRefMap;
    id  _objects;
    id  _replacementMap;
    void * _reserved0;
    void * _reserved2;
    void * _stream;
    id  _visited;
}

@property <NSKeyedArchiverDelegate> *delegate;
@property unsigned int outputFormat;
@property BOOL requiresSecureCoding;

+ (BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (id)classNameForClass:(Class)arg1;
+ (void)initialize;
+ (void)setClassName:(id)arg1 forClass:(Class)arg2;

- (id)_blobForCurrentObject;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;
- (id)_initWithOutput:(id)arg1;
- (void)_setBlobForCurrentObject:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (id)classNameForClass:(Class)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(const void*)arg3;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)finalize;
- (void)finishEncoding;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;
- (unsigned int)outputFormat;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (BOOL)requiresSecureCoding;
- (void)setClassName:(id)arg1 forClass:(Class)arg2;
- (void)setDelegate:(id)arg1;
- (void)setOutputFormat:(unsigned int)arg1;
- (void)setRequiresSecureCoding:(BOOL)arg1;
- (unsigned int)systemVersion;
- (int)versionForClassName:(id)arg1;

@end