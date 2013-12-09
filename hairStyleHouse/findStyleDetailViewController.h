//
//  findStyleDetailViewController.h
//  hairStyleHouse
//
//  Created by jeason on 13-12-4.
//  Copyright (c) 2013年 jeason. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "hairStyleCategoryScanImageCell.h"
#import "MJPhotoBrowser.h"
@class AllAroundPullView;
@interface findStyleDetailViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    UIImageView * topImage;
    UITableView *myTableView;
    AllAroundPullView *bottomRefreshView;

    NSMutableArray * dresserArray;
    NSString * page;
    NSString * pageCount;
    NSString * sign;

    NSString* style;
    
    MJPhotoBrowser *browser;
}
@property(nonatomic,strong)        NSString* style;
-(void)selectImage:(NSInteger)_index;

@end
