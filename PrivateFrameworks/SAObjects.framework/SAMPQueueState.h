/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAMPMediaItem;

@interface SAMPQueueState : AceObject <SABackgroundContextObject> {
}

@property(copy) NSString * applicationIdentifier;
@property(retain) SAMPMediaItem * listeningToItem;
@property(copy) NSString * source;
@property int state;

+ (id)queueState;
+ (id)queueStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listeningToItem;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setListeningToItem:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setState:(int)arg1;
- (id)source;
- (int)state;

@end
