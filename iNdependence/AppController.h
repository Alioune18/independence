/*
 *  AppController.h
 *  iNdependence
 *
 *  Created by The Operator on 23/08/07.
 *  Copyright 2007 The Operator. All rights reserved.
 *
 * This software is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License version 2 for more details
 */ 

#import "CustomizeBrowser.h"


class PhoneInteraction;
@class MainWindow;

@interface AppController : NSObject
{
	IBOutlet MainWindow *mainWindow;
	IBOutlet NSWindow* imeiDialog;
	IBOutlet NSWindow* newPasswordDialog;
	IBOutlet NSTextField* accountNameField;
	IBOutlet NSSecureTextField* passwordField;
	IBOutlet NSSecureTextField* passwordAgainField;
	IBOutlet NSTextField* imeiTextField;
	IBOutlet NSTextField* iccidTextField;
	IBOutlet NSButton* putPEMButton;
	IBOutlet NSButton* restorePEMButton;
	IBOutlet NSButton* returnToJailButton;
	IBOutlet NSButton* activateButton;
	IBOutlet NSButton* deactivateButton;
	IBOutlet NSButton* jailbreakButton;
	IBOutlet NSButton* backupButton;
	IBOutlet NSButton* installSSHButton;
	IBOutlet NSButton* removeSSHButton;
	IBOutlet NSButton* changePasswordButton;
	IBOutlet CustomizeBrowser* customizeBrowser;
	IBOutlet NSWindow* keyGenerationOutput;
	IBOutlet NSTextView* logOutput;

	PhoneInteraction *m_phoneInteraction;
	bool m_connected;
	bool m_recoveryMode;
	bool m_restoreMode;
	bool m_jailbroken;
	bool m_activated;
	bool m_performingJailbreak;
	bool m_returningToJail;
	bool m_installingSSH;
	int m_bootCount;
	char *m_sshPath;
}

- (void)setConnected:(bool)connected;
- (bool)isConnected;

- (void)setRecoveryMode:(bool)inRecovery;
- (bool)isInRecoveryMode;

- (void)setRestoreMode:(bool)inRestore;
- (bool)isInRestoreMode;

- (void)setJailbroken:(bool)jailbroken;
- (bool)isJailbroken;

- (void)setActivated:(bool)activated;
- (bool)isActivated;

- (bool)isSSHInstalled;

- (IBAction)generateActivation:(id)sender;
- (IBAction)backupActivation:(id)sender;
- (IBAction)putPEMOnPhone:(id)sender;
- (IBAction)restorePEM:(id)sender;
- (IBAction)activate:(id)sender;
- (IBAction)deactivate:(id)sender;
- (IBAction)performJailbreak:(id)sender;
- (IBAction)returnToJail:(id)sender;
- (IBAction)changePassword:(id)sender;
- (IBAction)installSSH:(id)sender;
- (IBAction)removeSSH:(id)sender;
- (void)finishInstallingSSH:(bool)bCancelled;

- (IBAction)imeiDialogCancel:(id)sender;
- (IBAction)imeiDialogOk:(id)sender;

- (IBAction)waitDialogCancel:(id)sender;

- (IBAction)keyGenerationOutputDismiss:(id)sender;

- (IBAction)passwordDialogCancel:(id)sender;
- (IBAction)passwordDialogOk:(id)sender;

@end
