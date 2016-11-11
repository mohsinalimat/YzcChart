//
//  YzcChartView.h
//  YzcChart
//
//  Created by mac on 16/11/10.
//  Copyright © 2016年 yzc. All rights reserved.
//

#import <UIKit/UIKit.h>

#define chartMargin         10
#define xLabelMargin        15
#define yLabelMargin        15
#define UULabelHeight       20
#define UUYLabelwidth       40
#define UUTagLabelwidth     80

@interface YzcChartView : UIView

@property (strong, nonatomic) NSArray * xLabels;
@property (strong, nonatomic) NSArray * yLabels;
@property (strong, nonatomic) NSArray * yValues;
@property (strong, nonatomic) NSArray * colors;

@property (nonatomic) CGFloat xLabelWidth;

//@property (nonatomic) CGFloat yValueMin;
//@property (nonatomic) CGFloat yValueMax;

- (NSArray *)chartLabelsForX;

- (void)strokeChart;

@end