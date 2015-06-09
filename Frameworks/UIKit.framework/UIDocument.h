/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocument : NSObject <NSFilePresenter, NSProgressReporting> {
    NSLock * _activityContinuationLock;
    id  _alertPresenter;
    NSTimer * _autosavingTimer;
    NSUserActivity * _currentUserActivity;
    id  _differenceDueToRecentChanges;
    id  _differenceSincePreservingPreviousVersion;
    id  _differenceSinceSaving;
    struct __docFlags { 
        unsigned int inClose : 1; 
        unsigned int isOpen : 1; 
        unsigned int inOpen : 1; 
        unsigned int isAutosavingBecauseOfTimer : 1; 
        unsigned int versionWithoutRecentChangesIsNotLastOpened : 1; 
        unsigned int ignoreUndoAndRedoNotifications : 1; 
        unsigned int editingDisabled : 1; 
        unsigned int isRegisteredAsFilePresenter : 1; 
        unsigned int movingFile : 1; 
        unsigned int savingError : 1; 
        unsigned int inConflict : 1; 
        unsigned int needToStopAccessingSecurityScopedResource : 1; 
    }  _docFlags;
    NSLock * _documentPropertyLock;
    NSObject<OS_dispatch_queue> * _fileAccessQueue;
    NSObject<OS_dispatch_semaphore> * _fileAccessSemaphore;
    NSDate * _fileModificationDate;
    NSOperationQueue * _filePresenterQueue;
    NSString * _fileType;
    NSURL * _fileURL;
    double  _lastPreservationTime;
    double  _lastSaveTime;
    NSString * _localizedName;
    NSObject<OS_dispatch_queue> * _openingQueue;
    NSProgress * _progress;
    id  _progressSubscriber;
    NSUndoManager * _undoManager;
    id  _versionWithoutRecentChanges;
    NSMutableArray * _versions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDocumentDifferenceSize *differenceDueToRecentChanges;
@property (nonatomic, readonly) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion;
@property (nonatomic, readonly) NSDocumentDifferenceSize *differenceSinceSaving;
@property (readonly) unsigned int documentState;
@property (getter=_isEditingDisabled, setter=_setEditingDisabled:) BOOL editingDisabled;
@property (copy) NSDate *fileModificationDate;
@property (readonly, copy) NSString *fileType;
@property (readonly) NSURL *fileURL;
@property (readonly) unsigned int hash;
@property (readonly, copy) NSString *localizedName;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (retain) NSProgress *progress;
@property (readonly) Class superclass;
@property (retain) NSUndoManager *undoManager;

+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4;
+ (id)_typeForContentsOfURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_activityTypeIdentifierForCloudDocument:(BOOL*)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_autosaveWithCompletionHandler:(id /* block */)arg1;
- (void)_autosavingCompletedSuccessfully:(BOOL)arg1;
- (double)_autosavingDelay;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_clearUserActivity;
- (BOOL)_coordinateWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(id /* block */)arg3;
- (BOOL)_documentIsUbiquitous;
- (void)_finishSavingToURL:(id)arg1 forSaveOperation:(int)arg2 changeCount:(id)arg3;
- (BOOL)_hasSavingError;
- (BOOL)_hasUnsavedChanges;
- (void)_invalidateCurrentUserActivity;
- (BOOL)_isEditingDisabled;
- (BOOL)_isInConflict;
- (BOOL)_isInOpen;
- (BOOL)_isOpen;
- (void)_lockFileAccessQueueAndPerformBlock:(id /* block */)arg1;
- (void)_manageUserActivity;
- (id)_presentableFileNameForSaveOperation:(int)arg1 url:(id)arg2;
- (void)_progressPublished:(id)arg1;
- (void)_progressUnpublished;
- (void)_reallyManageUserActivity;
- (void)_registerAsFilePresenterIfNecessary;
- (void)_releaseUndoManager;
- (void)_rescheduleAutosaving;
- (void)_saveUnsavedChangesWithCompletionHandler:(id /* block */)arg1;
- (void)_scheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2;
- (void)_sendStateChangedNotification;
- (void)_setEditingDisabled:(BOOL)arg1;
- (void)_setFileURL:(id)arg1;
- (void)_setHasSavingError:(BOOL)arg1;
- (void)_setInConflict:(BOOL)arg1;
- (void)_setInOpen:(BOOL)arg1;
- (void)_setOpen:(BOOL)arg1;
- (void)_setProgress:(id)arg1;
- (void)_setUserActivity:(id)arg1;
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;
- (id)_titleForActivityContinuation;
- (void)_unlockFileAccessQueue;
- (void)_unregisterAsFilePresenterIfNecessary;
- (void)_updateConflictState;
- (void)_updateLocalizedName;
- (id)_userActivityWithActivityType:(id)arg1;
- (id)_userInfoForActivityContinuation;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)autosaveWithCompletionHandler:(id /* block */)arg1;
- (id)changeCountTokenForSaveOperation:(int)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)differenceDueToRecentChanges;
- (id)differenceSincePreservingPreviousVersion;
- (id)differenceSinceSaving;
- (void)disableEditing;
- (unsigned int)documentState;
- (void)enableEditing;
- (id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(int)arg2 error:(id*)arg3;
- (id)fileModificationDate;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(int)arg2;
- (id)fileType;
- (id)fileURL;
- (void)finishedHandlingError:(id)arg1 recovered:(BOOL)arg2;
- (void)handleError:(id)arg1 userInteractionPermitted:(BOOL)arg2;
- (BOOL)hasUnsavedChanges;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)localizedName;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(id /* block */)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemHasUnsavedChangesWithCompletionHandler:(id /* block */)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (id)progress;
- (BOOL)readFromURL:(id)arg1 error:(id*)arg2;
- (void)relinquishPresentedItemToReader:(id /* block */)arg1;
- (void)relinquishPresentedItemToWriter:(id /* block */)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)arg1;
- (void)saveToURL:(id)arg1 forSaveOperation:(int)arg2 completionHandler:(id /* block */)arg3;
- (id)savingFileType;
- (void)setFileModificationDate:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (id)undoManager;
- (void)updateChangeCount:(int)arg1;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(int)arg2;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivity;
- (void)userInteractionNoLongerPermittedForError:(id)arg1;
- (BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(int)arg4 error:(id*)arg5;
- (BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(int)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;

// UIDocument (UIDocumentInternal)

+ (id)_fileModificationDateForURL:(id)arg1;

- (id)_fileOpeningQueue;
- (void)_performBlock:(id /* block */)arg1 synchronouslyOnQueue:(id)arg2;
- (void)_performBlockSynchronouslyOnMainThread:(id /* block */)arg1;

@end