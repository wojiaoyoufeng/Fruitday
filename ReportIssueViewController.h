//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "QBImagePickerControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSMutableArray, NSString, QBImagePickerController, UIButton, UIImagePickerController, UILabel, UIScrollView, UITextField, UITextView, UIView;

@interface ReportIssueViewController : FDBaseViewController <UITextViewDelegate, UITextFieldDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, QBImagePickerControllerDelegate>
{
    NSArray *pickerArray;
    _Bool _placeHolderShow;
    NSString *productName;
    NSString *orderName;
    UIView *_photoView;
    UITextView *_commentTextArea;
    UIScrollView *_reportIssueScrollView;
    UITextField *_contactWay;
    UILabel *_productNameLabel;
    UILabel *_orderNameLabel;
    UIButton *_addNewPhotoButton;
    UIImagePickerController *_imagePickerController;
    QBImagePickerController *_qbImagePickerController;
    NSString *_productId;
    NSString *_productNo;
    NSMutableArray *_photoPool;
    NSMutableArray *_photoDataPool;
}

@property _Bool placeHolderShow; // @synthesize placeHolderShow=_placeHolderShow;
@property(retain, nonatomic) NSMutableArray *photoDataPool; // @synthesize photoDataPool=_photoDataPool;
@property(retain, nonatomic) NSMutableArray *photoPool; // @synthesize photoPool=_photoPool;
@property(retain, nonatomic) NSString *productNo; // @synthesize productNo=_productNo;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) QBImagePickerController *qbImagePickerController; // @synthesize qbImagePickerController=_qbImagePickerController;
@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(nonatomic) __weak UIButton *addNewPhotoButton; // @synthesize addNewPhotoButton=_addNewPhotoButton;
@property(nonatomic) __weak UILabel *orderNameLabel; // @synthesize orderNameLabel=_orderNameLabel;
@property(nonatomic) __weak UILabel *productNameLabel; // @synthesize productNameLabel=_productNameLabel;
@property(nonatomic) __weak UITextField *contactWay; // @synthesize contactWay=_contactWay;
@property(nonatomic) __weak UIScrollView *reportIssueScrollView; // @synthesize reportIssueScrollView=_reportIssueScrollView;
@property(nonatomic) __weak UITextView *commentTextArea; // @synthesize commentTextArea=_commentTextArea;
@property(nonatomic) __weak UIView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) NSString *orderName; // @synthesize orderName;
@property(retain, nonatomic) NSString *productName; // @synthesize productName;
- (void).cxx_destruct;
- (void)onDialService:(id)arg1;
- (void)onReportIssuePressed:(id)arg1;
- (_Bool)checkContactWay;
- (_Bool)checkCommentLength;
- (_Bool)checkCommentInput;
- (void)reportIssue;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)deleteSinglePhoto:(id)arg1;
- (void)deleteAllPhotoFile;
- (id)createPhotoSingleView:(int)arg1 image:(id)arg2;
- (void)onDeletePhoto:(id)arg1;
- (void)adjustAddButtonPosition:(int)arg1;
- (void)reLoadImageView;
- (void)clearImageView;
- (void)saveImage:(id)arg1 withData:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)useImage:(id)arg1;
- (id)highResImageForAsset:(id)arg1;
- (void)imagePickerController:(id)arg1 didSelectAssets:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)onAddPhoto:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)backToPrevious;
- (void)hideKeyBoard;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)showHideBusyIndicator:(_Bool)arg1;
- (void)fillMobileField;
- (void)setPageProperties;
- (void)didReceiveMemoryWarning;
- (void)onViewPressed:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
