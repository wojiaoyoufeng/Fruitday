//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "OrderProductCellDelegate.h"

@class FDOrderDetailData, M80AttributedLabel, NSString, UIImageView, UILabel, UITableViewCell;

@interface OrderDetailTableViewController : UITableViewController <OrderProductCellDelegate>
{
    FDOrderDetailData *_orderDetailData;
    int _orderType;
    NSString *orderID;
    UILabel *_orderTotalPriceLabel;
    UILabel *_orderPaymentLabel;
    UILabel *_orderIssueTimeLabel;
    UILabel *_orderTotalPrice;
    UILabel *_orderPayment;
    UILabel *_orderPaymentStatus;
    UILabel *_orderIssueTime;
    UIImageView *_offlineQRCode;
    UILabel *_offlineQRIntro;
    UITableViewCell *_addressTableCell;
    UILabel *_orderDeliverAddressLabel;
    UILabel *_orderDeliverNameLabel;
    UILabel *_orderDeliverDateLabel;
    UILabel *_orderDeliverAddressDestrict;
    UILabel *_orderDeliverDate;
    UILabel *_logOfflineTitle;
    UILabel *_logDeliverTime;
    UILabel *_logOfflineAddress;
    UILabel *_orderInvoiceTitleNameLabel;
    UILabel *_orderInvoiceTitleName;
    UILabel *_orderProductTotalPriceLabel;
    UILabel *_orderDeliverPriceLabel;
    UILabel *_orderDiscountByCreditLabel;
    UILabel *_orderDiscountByCouponLabel;
    UILabel *_orderProductTotalPrice;
    UILabel *_orderDeliverPrice;
    UILabel *_orderDiscountByCredit;
    UILabel *_orderDiscountByCoupon;
    UILabel *_orderLatestLogInfo;
    UILabel *_orderDiscountByOther;
    M80AttributedLabel *_orderTotalAmount;
    NSString *_orderName;
    NSString *_productName;
    NSString *_productId;
    NSString *_productNo;
}

@property(retain, nonatomic) NSString *productNo; // @synthesize productNo=_productNo;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *orderName; // @synthesize orderName=_orderName;
@property int orderType; // @synthesize orderType=_orderType;
@property(nonatomic) __weak M80AttributedLabel *orderTotalAmount; // @synthesize orderTotalAmount=_orderTotalAmount;
@property(nonatomic) __weak UILabel *orderDiscountByOther; // @synthesize orderDiscountByOther=_orderDiscountByOther;
@property(nonatomic) __weak UILabel *orderLatestLogInfo; // @synthesize orderLatestLogInfo=_orderLatestLogInfo;
@property(nonatomic) __weak UILabel *orderDiscountByCoupon; // @synthesize orderDiscountByCoupon=_orderDiscountByCoupon;
@property(nonatomic) __weak UILabel *orderDiscountByCredit; // @synthesize orderDiscountByCredit=_orderDiscountByCredit;
@property(nonatomic) __weak UILabel *orderDeliverPrice; // @synthesize orderDeliverPrice=_orderDeliverPrice;
@property(nonatomic) __weak UILabel *orderProductTotalPrice; // @synthesize orderProductTotalPrice=_orderProductTotalPrice;
@property(nonatomic) __weak UILabel *orderDiscountByCouponLabel; // @synthesize orderDiscountByCouponLabel=_orderDiscountByCouponLabel;
@property(nonatomic) __weak UILabel *orderDiscountByCreditLabel; // @synthesize orderDiscountByCreditLabel=_orderDiscountByCreditLabel;
@property(nonatomic) __weak UILabel *orderDeliverPriceLabel; // @synthesize orderDeliverPriceLabel=_orderDeliverPriceLabel;
@property(nonatomic) __weak UILabel *orderProductTotalPriceLabel; // @synthesize orderProductTotalPriceLabel=_orderProductTotalPriceLabel;
@property(nonatomic) __weak UILabel *orderInvoiceTitleName; // @synthesize orderInvoiceTitleName=_orderInvoiceTitleName;
@property(nonatomic) __weak UILabel *orderInvoiceTitleNameLabel; // @synthesize orderInvoiceTitleNameLabel=_orderInvoiceTitleNameLabel;
@property(nonatomic) __weak UILabel *logOfflineAddress; // @synthesize logOfflineAddress=_logOfflineAddress;
@property(nonatomic) __weak UILabel *logDeliverTime; // @synthesize logDeliverTime=_logDeliverTime;
@property(nonatomic) __weak UILabel *logOfflineTitle; // @synthesize logOfflineTitle=_logOfflineTitle;
@property(nonatomic) __weak UILabel *orderDeliverDate; // @synthesize orderDeliverDate=_orderDeliverDate;
@property(nonatomic) __weak UILabel *orderDeliverAddressDestrict; // @synthesize orderDeliverAddressDestrict=_orderDeliverAddressDestrict;
@property(nonatomic) __weak UILabel *orderDeliverDateLabel; // @synthesize orderDeliverDateLabel=_orderDeliverDateLabel;
@property(nonatomic) __weak UILabel *orderDeliverNameLabel; // @synthesize orderDeliverNameLabel=_orderDeliverNameLabel;
@property(nonatomic) __weak UILabel *orderDeliverAddressLabel; // @synthesize orderDeliverAddressLabel=_orderDeliverAddressLabel;
@property(nonatomic) __weak UITableViewCell *addressTableCell; // @synthesize addressTableCell=_addressTableCell;
@property(nonatomic) __weak UILabel *offlineQRIntro; // @synthesize offlineQRIntro=_offlineQRIntro;
@property(nonatomic) __weak UIImageView *offlineQRCode; // @synthesize offlineQRCode=_offlineQRCode;
@property(nonatomic) __weak UILabel *orderIssueTime; // @synthesize orderIssueTime=_orderIssueTime;
@property(nonatomic) __weak UILabel *orderPaymentStatus; // @synthesize orderPaymentStatus=_orderPaymentStatus;
@property(nonatomic) __weak UILabel *orderPayment; // @synthesize orderPayment=_orderPayment;
@property(nonatomic) __weak UILabel *orderTotalPrice; // @synthesize orderTotalPrice=_orderTotalPrice;
@property(nonatomic) __weak UILabel *orderIssueTimeLabel; // @synthesize orderIssueTimeLabel=_orderIssueTimeLabel;
@property(nonatomic) __weak UILabel *orderPaymentLabel; // @synthesize orderPaymentLabel=_orderPaymentLabel;
@property(nonatomic) __weak UILabel *orderTotalPriceLabel; // @synthesize orderTotalPriceLabel=_orderTotalPriceLabel;
@property(retain) NSString *orderID; // @synthesize orderID;
- (void).cxx_destruct;
- (void)reportIssuePressed:(id)arg1;
- (void)checkStoreInfo;
- (void)alertErrorMessage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setActionsbyStatus:(id)arg1 byCanPay:(_Bool)arg2 byCanCancel:(_Bool)arg3 byCanComment:(_Bool)arg4 byCanConfirm:(_Bool)arg5;
- (void)buildOrderTotalMoney:(id)arg1;
- (void)fillOrderDetailInfo:(id)arg1;
- (id)resizeImage:(id)arg1 withQuality:(int)arg2 rate:(double)arg3;
- (void)generateUserQRCode:(id)arg1;
- (id)formateDeliveryDate:(id)arg1;
- (void)loadOrderDetailData;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onOrderPaid:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

