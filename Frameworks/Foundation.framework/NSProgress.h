/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProgress : NSObject <NSProgressPublisher> {
    NSMutableDictionary * _acknowledgementHandlersByBundleID;
    id /* block */  _cancellationHandler;
    NSMutableSet * _children;
    NSXPCConnection * _connection;
    int  _disconnectingBlockageCount;
    unsigned long long  _flags;
    NSMutableDictionary * _lastNotificationTimesByKey;
    NSLock * _lock;
    NSProgress * _parent;
    id /* block */  _pausingHandler;
    id /* block */  _prioritizationHandler;
    NSString * _publisherID;
    int  _remoteObserverCount;
    long long  _reserved4;
    id /* block */  _resumingHandler;
    int  _unpublishingBlockageCount;
    NSMutableDictionary * _userInfoLastNotificationTimesByKey;
    id  _userInfoProxy;
    id  _values;
}

@property BOOL _adoptChildUserInfo;
@property (getter=isCancellable) BOOL cancellable;
@property (copy) id /* block */ cancellationHandler;
@property (getter=isCancelled, readonly) BOOL cancelled;
@property long long completedUnitCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double fractionCompleted;
@property (readonly) unsigned int hash;
@property (getter=isIndeterminate, readonly) BOOL indeterminate;
@property (nonatomic) unsigned int installPhase;
@property (nonatomic) unsigned int installState;
@property (copy) NSString *kind;
@property (copy) NSString *localizedAdditionalDescription;
@property (copy) NSString *localizedDescription;
@property (getter=isOld, readonly) BOOL old;
@property (getter=isPausable) BOOL pausable;
@property (getter=isPaused, readonly) BOOL paused;
@property (copy) id /* block */ pausingHandler;
@property (copy) id /* block */ resumingHandler;
@property (readonly) Class superclass;
@property long long totalUnitCount;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(id /* block */)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id /* block */)arg2;
+ (void)_removeSubscriber:(id)arg1;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id /* block */)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentProgress;
+ (id)discreteProgressWithTotalUnitCount:(long long)arg1;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (id)progressWithTotalUnitCount:(long long)arg1 parent:(id)arg2 pendingUnitCount:(long long)arg3;
+ (void)removeSubscriber:(id)arg1;

- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (id /* block */)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_addCompletedUnitCount:(long long)arg1;
- (void)_addImplicitChild:(id)arg1;
- (BOOL)_adoptChildUserInfo;
- (id)_indentedDescription:(unsigned int)arg1;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (id)_parent;
- (void)_publish;
- (id)_publishingAppBundleIdentifier;
- (void)_setAcknowledgementHandler:(id /* block */)arg1 forAppBundleIdentifier:(id)arg2;
- (void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_setParent:(id)arg1 portion:(long long)arg2;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(BOOL)arg3;
- (id)_setValueForKeys:(id /* block */)arg1 settingBlock:(id /* block */)arg2;
- (void)_unblockDisconnecting;
- (void)_unblockUnpublishing;
- (void)_unpublish;
- (void)_updateChild:(id)arg1 fraction:(id)arg2 portion:(long long)arg3;
- (void)_updateFractionCompleted:(id)arg1;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (id /* block */)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1 inBlock:(id /* block */)arg2;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (long long)completedUnitCount;
- (void)dealloc;
- (id)description;
- (double)fractionCompleted;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (BOOL)isCancellable;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isIndeterminate;
- (BOOL)isOld;
- (BOOL)isPausable;
- (BOOL)isPaused;
- (BOOL)isPrioritizable;
- (id)kind;
- (id)localizedAdditionalDescription;
- (id)localizedDescription;
- (unsigned int)ownedDictionaryCount;
- (id)ownedDictionaryKeyEnumerator;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (void)pause;
- (id /* block */)pausingHandler;
- (id /* block */)prioritizationHandler;
- (oneway void)prioritize;
- (void)publish;
- (void)resignCurrent;
- (void)resume;
- (id /* block */)resumingHandler;
- (void)setAcknowledgementHandler:(id /* block */)arg1 forAppBundleIdentifier:(id)arg2;
- (void)setCancellable:(BOOL)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setKind:(id)arg1;
- (void)setLocalizedAdditionalDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)setPausingHandler:(id /* block */)arg1;
- (void)setPrioritizable:(BOOL)arg1;
- (void)setPrioritizationHandler:(id /* block */)arg1;
- (void)setResumingHandler:(id /* block */)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)set_adoptChildUserInfo:(BOOL)arg1;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id /* block */)arg1;
- (oneway void)stopProvidingValues;
- (long long)totalUnitCount;
- (void)unpublish;
- (id)userInfo;

// NSProgress (NSInternal)

+ (id)_publisherInterface;
+ (id)_registrarInterface;
+ (id)_subscriberInterface;

- (id)_initWithValues:(id)arg1;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;

// NSProgress (NSProgressUpdateOverXPC)

- (void)_receiveProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2;

// NSProgress (NSTemporaryCompatibility)

- (void)acknowledge;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(id /* block */)arg2;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

// NSProgress (LSInstallProgressAdditions)

+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned int)arg2;
+ (id)keyPathsForValuesAffectingInstallPhase;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned int)arg2;

- (id)_LSDescription;
- (void)_LSResume;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned int)arg3;
- (unsigned int)installPhase;
- (unsigned int)installState;
- (void)setInstallPhase:(unsigned int)arg1;
- (void)setInstallState:(unsigned int)arg1;

@end
