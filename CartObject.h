//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseDataModel.h"

@class CartContent, NSDictionary;

@interface CartObject : FDBaseDataModel
{
    CartContent *_cart;
    long long _cartcount;
    NSDictionary *_cartItems;
}

+ (long long)getItemSortIndex:(id)arg1;
+ (id)getItemKey:(id)arg1;
+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSDictionary *cartItems; // @synthesize cartItems=_cartItems;
@property(nonatomic) long long cartcount; // @synthesize cartcount=_cartcount;
@property(retain, nonatomic) CartContent *cart; // @synthesize cart=_cart;
- (void).cxx_destruct;
- (_Bool)isInitial;
- (id)addLocalCartItems:(id)arg1;
- (_Bool)hasLocalCartItems;
- (id)getLocalCartItemsString;
- (id)getLocalCartItems;
- (long long)getCartCount;
- (id)getPromotionAlerts;
- (float)getCostFreight;
- (float)getPromotionTotal;
- (float)getPromotionGoods;
- (float)getGoodsCost;
- (float)getGoodsAmount;
- (float)getTotalAmount;
- (id)getAllItems;
- (void)updateWithDictionary:(id)arg1;

@end

