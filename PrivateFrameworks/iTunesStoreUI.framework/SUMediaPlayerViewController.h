/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIView, SUClientInterface, SUMediaPlayerItem, NSMutableArray;

@interface SUMediaPlayerViewController : MPMoviePlayerViewController <ISOperationDelegate> {
    UIView *_backgroundContainerView;
    SUClientInterface *_clientInterface;
    SUMediaPlayerItem *_mediaItem;
    NSMutableArray *_operations;
    int _playerState;
}

@property(readonly) SUMediaPlayerItem * mediaPlayerItem;
@property(retain) SUClientInterface * clientInterface;

+ (void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1;
+ (BOOL)_URLIsITunesU:(id)arg1;
+ (void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1;
+ (void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3;

- (id)mediaPlayerItem;
- (id)_backgroundContainerView;
- (void)_enqueueOperation:(id)arg1;
- (void)_showBackgroundImage:(id)arg1;
- (void)_dequeueOperation:(id)arg1;
- (void)_setIsActivePlayer:(BOOL)arg1;
- (void)_loadBackgroundImage;
- (void)_prepareMediaItem;
- (void)_insertBackgroundContainerView;
- (void)_bookmarkCurrentTime;
- (void)_playbackFinishedNotification:(id)arg1;
- (void)_mediaTypesAvailableNotification:(id)arg1;
- (id)initWithMediaPlayerItem:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)copyScriptViewController;
- (void)operationFinished:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (id)clientInterface;
- (void)dealloc;
- (id)init;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;

@end