/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABModel, ACAccountStore, AccountsManager, NSArray, NSDictionary;

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource> {
    NSArray *_accountDisplayNames;
    NSArray *_accountIdentifiers;
    ACAccountStore *_accountStore;
    AccountsManager *_accountsManager;
    BOOL _dirty;
    NSDictionary *_groupsByAccountIdentifier;
    BOOL _hidesGlobalGroupWrapper;
    BOOL _hidesSearchableSources;
    ABModel *_model;
}

@property(retain) ACAccountStore * accountStore;
@property(retain) AccountsManager * accountsManager;
@property(getter=isDirty) BOOL dirty;
@property BOOL hidesGlobalGroupWrapper;
@property BOOL hidesSearchableSources;
@property(retain) ABModel * model;

- (id)accountDisplayNameAtIndex:(int)arg1;
- (id)accountStore;
- (id)accountsManager;
- (void)cancelScheduledRefresh;
- (void)dealloc;
- (id)defaultGroupWrapper;
- (id)groupWrapperForIndexPath:(id)arg1;
- (BOOL)hidesGlobalGroupWrapper;
- (BOOL)hidesSearchableSources;
- (id)indexPathForGroupWrapper:(id)arg1;
- (id)init;
- (BOOL)isDirty;
- (id)model;
- (id)newContactsFilterFromSelectedGroupWrappers;
- (int)numberOfAccounts;
- (int)numberOfGroupsForAccountIdentifier:(id)arg1;
- (int)numberOfGroupsInAccountAtIndex:(int)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)reloadDataIncludingAccountsManager:(BOOL)arg1 usingArchivedState:(BOOL)arg2;
- (void)scheduleRefresh;
- (void)setAccountStore:(id)arg1;
- (void)setAccountsManager:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)setHidesGlobalGroupWrapper:(BOOL)arg1;
- (void)setHidesSearchableSources:(BOOL)arg1;
- (void)setModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
