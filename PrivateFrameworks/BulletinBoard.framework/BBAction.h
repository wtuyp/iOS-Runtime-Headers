/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSString, NSURL;

@interface BBAction : NSObject {
    NSDictionary *_activatePluginContext;
    NSString *_activatePluginName;
    BOOL _canBypassPinLock;
    BOOL _hasCallblock;
    id _internalBlock;
    NSString *_launchBundleID;
    NSURL *_launchURL;
    int _replyType;
}

@property(copy) NSDictionary * activatePluginContext;
@property(copy) NSString * activatePluginName;
@property BOOL canBypassPinLock;
@property BOOL hasCallblock;
@property(copy) id internalBlock;
@property(copy) NSString * launchBundleID;
@property(retain) NSURL * launchURL;
@property int replyType;

+ (id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
+ (id)actionWithCallblock:(id)arg1;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(id)arg2;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(id)arg2;
+ (id)actionWithTextReplyCallblock:(id)arg1;

- (id)_initWithInternalCallblock:(id)arg1 replyType:(int)arg2;
- (id)activatePluginContext;
- (id)activatePluginName;
- (id)bundleID;
- (BOOL)canBypassPinLock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deliverResponse:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCallblock;
- (BOOL)hasLaunchInfo;
- (unsigned int)hash;
- (id)initWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
- (id)initWithCallblock:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextReplyCallblock:(id)arg1;
- (id)internalBlock;
- (BOOL)isAppLaunchAction;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isURLLaunchAction;
- (id)launchBundleID;
- (id)launchURL;
- (id)partialDescription;
- (int)replyType;
- (void)setActivatePluginContext:(id)arg1;
- (void)setActivatePluginName:(id)arg1;
- (void)setCanBypassPinLock:(BOOL)arg1;
- (void)setHasCallblock:(BOOL)arg1;
- (void)setInternalBlock:(id)arg1;
- (void)setLaunchBundleID:(id)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setReplyType:(int)arg1;
- (id)url;
- (BOOL)wantsTextReply;

@end
