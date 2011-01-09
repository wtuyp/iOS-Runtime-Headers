/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSString;



@interface ASContext : NSObject 
{
    NSMutableDictionary *_configuration;
    NSMutableDictionary *_hostsToTrust;
    id _delegate;
    BOOL _haveLookedUpPassword;
    NSString *_cachedPassword;
}

@property(readonly) NSDictionary *configuration;
@property(readonly) NSString *accountID;
@property(readonly) NSString *tag;
@property id delegate;
@property(copy) NSString *version;
@property(copy) NSString *username;
@property(copy) NSString *host;
@property NSInteger port;
@property(copy) NSString *password;
@property BOOL useSSL;
@property BOOL allowAnyRootCert;
@property(copy) NSString *emailAddress;
@property NSInteger mailNumberOfPastDaysToSync;

+ (void)clearAllRootCertSettingsForAccountWithID:(id)arg1;

- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)configuration;
- (void)saveAccountSettings;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (NSInteger)port;
- (void)setPort:(NSInteger)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)accountID;
- (id)tag;
- (BOOL)useSSL;
- (void)setUseSSL:(BOOL)arg1;
- (BOOL)allowAnyRootCert;
- (void)setAllowAnyRootCert:(BOOL)arg1;
- (id)_hostsToTrust;
- (void)clearAllRootCertSettings;
- (NSInteger)allowAnyRootCertFromHost:(id)arg1;
- (void)setAllowAnyRootCert:(BOOL)arg1 fromHost:(id)arg2;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (NSInteger)mailNumberOfPastDaysToSync;
- (void)setMailNumberOfPastDaysToSync:(NSInteger)arg1;

@end