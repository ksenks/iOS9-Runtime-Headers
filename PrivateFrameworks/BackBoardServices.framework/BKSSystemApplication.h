/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate> {
    BKSSystemApplicationClient * _client;
    <BKSSystemApplicationDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKSSystemApplicationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)clientIsAliveForWatchdog:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)finishBooting;
- (id)initWithQueue:(id)arg1;
- (void)restart;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;

@end