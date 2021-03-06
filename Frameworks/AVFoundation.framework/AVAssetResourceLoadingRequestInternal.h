/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingRequestInternal : NSObject {
    NSMutableURLRequest * URLRequest;
    NSDictionary * cachedContentInformation;
    NSMutableData * cachedData;
    int  cancelled;
    AVAssetResourceLoadingContentInformationRequest * contentInformationRequest;
    NSObject<OS_dispatch_queue> * dataCachingQueue;
    AVAssetResourceLoadingDataRequest * dataRequest;
    struct OpaqueFigAsset { } * figAsset;
    struct OpaqueFigAssetImageGenerator { } * figImageGenerator;
    struct OpaqueFigPlaybackItem { } * figPlaybackItem;
    int  finished;
    NSURLRequest * redirect;
    NSDictionary * requestDictionary;
    NSURLResponse * response;
    int  sentContentInfo;
    id /* block */  streamingKeyRequestCompletionHandler;
    AVWeakReference * weakReference;
    AVWeakReference * weakReferenceToResourceLoader;
}

@end
