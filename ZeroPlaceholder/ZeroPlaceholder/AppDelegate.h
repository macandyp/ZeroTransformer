//
//  AppDelegate.h
//  ZeroPlaceholder
//
//  Created by Andy on 1/16/13.
//  Copyright (c) 2013 Peartree Devs. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (nonatomic) NSUInteger number;
@property (weak) IBOutlet NSTextField *numberField;

- (IBAction)saveAction:(id)sender;
- (IBAction)setTheNumber:(id)sender;

@end
