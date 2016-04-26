//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITextFieldDelegate.h"

@class FDAppDelegate, NSDictionary, NSString, UIButton, UILabel, UITextView;

@interface CodeOrderConfirmTableViewController : UITableViewController <UITextFieldDelegate>
{
    FDAppDelegate *_delegate;
    UILabel *_contactName;
    UILabel *_contactAddressArea;
    UILabel *_contactAddressRoad;
    UIButton *_addressTypeButton;
    UILabel *_contactEmptyTitleLabel;
    UILabel *_contactEmptyDetailLabel;
    UILabel *_contactNo;
    UILabel *_deliveryTime;
    UITextView *_noteTextView;
    UITextView *_cardTextView;
    NSDictionary *_selectedAddress;
    NSDictionary *_selectedDeliveryOption;
    NSString *_selectedSendDate;
    NSString *_selectedSendTime;
}

@property(retain) NSString *selectedSendTime; // @synthesize selectedSendTime=_selectedSendTime;
@property(retain) NSString *selectedSendDate; // @synthesize selectedSendDate=_selectedSendDate;
@property(retain) NSDictionary *selectedDeliveryOption; // @synthesize selectedDeliveryOption=_selectedDeliveryOption;
@property(retain) NSDictionary *selectedAddress; // @synthesize selectedAddress=_selectedAddress;
@property(nonatomic) __weak UITextView *cardTextView; // @synthesize cardTextView=_cardTextView;
@property(nonatomic) __weak UITextView *noteTextView; // @synthesize noteTextView=_noteTextView;
@property(nonatomic) __weak UILabel *deliveryTime; // @synthesize deliveryTime=_deliveryTime;
@property(nonatomic) __weak UILabel *contactNo; // @synthesize contactNo=_contactNo;
@property(nonatomic) __weak UILabel *contactEmptyDetailLabel; // @synthesize contactEmptyDetailLabel=_contactEmptyDetailLabel;
@property(nonatomic) __weak UILabel *contactEmptyTitleLabel; // @synthesize contactEmptyTitleLabel=_contactEmptyTitleLabel;
@property(nonatomic) __weak UIButton *addressTypeButton; // @synthesize addressTypeButton=_addressTypeButton;
@property(nonatomic) __weak UILabel *contactAddressRoad; // @synthesize contactAddressRoad=_contactAddressRoad;
@property(nonatomic) __weak UILabel *contactAddressArea; // @synthesize contactAddressArea=_contactAddressArea;
@property(nonatomic) __weak UILabel *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) FDAppDelegate *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertErrorMessage:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (_Bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateDeliveryOption:(id)arg1;
- (void)updateAddress:(id)arg1;
- (void)onDonePressCard;
- (void)onDonePress;
- (void)onViewPressed:(id)arg1;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
