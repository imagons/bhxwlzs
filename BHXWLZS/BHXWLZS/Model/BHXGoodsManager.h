//
//  BHXGoodsManager.h
//  BHXWLZS
//
//  Created by Danyow.Ed on 2017/1/21.
//  Copyright © 2017年 Danyow.Ed. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Goods+CoreDataProperties.h"
#import "GoodsPrice+CoreDataProperties.h"

UIKIT_EXTERN NSString *BHXGoodsAPartnerPrice;
UIKIT_EXTERN NSString *BHXGoodsBPartnerPrice;
UIKIT_EXTERN NSString *BHXGoodsCPartnerPrice;
UIKIT_EXTERN NSString *BHXGoodsRetailPrice;

@interface BHXGoodsManager : NSObject

@property (nonatomic, strong) NSArray <Goods *> *allGoods;

@property (nonatomic, strong) NSArray <NSString *> *priceInfos;

@property (nonatomic, copy  ) NSString *selectedPriceInfo;

+ (instancetype)shareManager;

- (Goods *)createGoodsWithName:(NSString *)name weight:(double)weight row:(NSInteger)row A:(NSString *)A B:(NSString *)B C:(NSString *)C D:(NSString *)D;

@end
