/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLRequest : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSURLRequestInternal * _internal;
}

@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly) BOOL HTTPShouldHandleCookies;
@property (readonly) BOOL HTTPShouldUsePipelining;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSDictionary *allHTTPHeaderFields;
@property (readonly) BOOL allowsCellularAccess;
@property (readonly) unsigned int cachePolicy;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (readonly) unsigned int networkServiceType;
@property (readonly) double timeoutInterval;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (double)defaultTimeoutInterval;
+ (id)getObjectKeyWithIndex:(long)arg1;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (BOOL)supportsSecureCoding;

- (id)URL;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (BOOL)_URLHasScheme:(id)arg1;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (id)_propertyForKey:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (BOOL)allowsCellularAccess;
- (id)boundInterfaceIdentifier;
- (unsigned int)cachePolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mainDocumentURL;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)networkServiceType;
- (double)timeoutInterval;

// NSURLRequest (NSHTTPURLRequest)

+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;

- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPMethod;
- (id)HTTPReferrer;
- (BOOL)HTTPShouldHandleCookies;
- (BOOL)HTTPShouldUsePipelining;
- (id)HTTPUserAgent;
- (double)_payloadTransmissionTimeout;
- (BOOL)_requiresShortConnectionTimeout;
- (id)_startTimeoutDate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)allHTTPHeaderFields;
- (id)contentDispositionEncodingFallbackArray;
- (unsigned long long)expectedWorkload;
- (id)valueForHTTPHeaderField:(id)arg1;

// NSURLRequest (NSURLSession_Additions)

- (BOOL)_isSafeRequestForBackgroundDownload;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

// NSURLRequest (null)

- (id)_web_HTTPContentType;
- (id)_web_HTTPReferrer;
- (BOOL)_web_isConditionalRequest;

@end
