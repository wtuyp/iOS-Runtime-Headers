/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
    NSURLAuthenticationChallenge *_challenge;
}

- (void)cancelAuthentication;
- (void)dealloc;
- (NSInteger)failureCount;
- (BOOL)hasPassword;
- (id)initWithAuthenticationChallenge:(id)arg1;
- (id)password;
- (id)sender;
- (void)useCredential:(id)arg1;
- (id)user;

@end