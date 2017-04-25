//
//  STStyleInfo.h
//  STStyleManager
//
//  Created by Lorne Shi on 19/04/2017.
//  Copyright © 2017 Lorne Shi. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import <Cocoa/Cocoa.h>

@protocol STModelPara;
@class STModelPara;

@interface STStyleInfo : JSONModel

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *iconFileName;
@property (nonatomic, assign) BOOL isCustomStyle;
@property (nonatomic, assign) BOOL isAddStyleButton;
@property (nonatomic, assign) BOOL isFavoriteStyle;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *styleImageName;
@property (nonatomic, assign) NSUInteger styleId;
@property (nonatomic, assign) NSUInteger algorithmType;
@property (nonatomic, copy) NSMutableArray<STModelPara> *modelParas;
@property (nonatomic, copy) NSString<Ignore> *modelPath;
@property (nonatomic, copy) NSString<Ignore> *styleImagePath;
@property (nonatomic, strong) NSImage<Ignore> *iconImage;

- (instancetype)initWithName:(NSString *)styleName
          styleImageFilePath:(NSString *)styleImageFilePath
               algorithmType:(NSInteger)algorithmType;

@end
