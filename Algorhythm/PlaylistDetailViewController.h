//
//  PlaylistDetailViewController.h
//  Algorhythm
//
//  Created by Adam Goldberg on 2015-09-22.
//  Copyright (c) 2015 Adam Goldberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Playlist; 

@interface PlaylistDetailViewController : UIViewController

@property (strong, nonatomic) Playlist *playlist;

@property (weak, nonatomic) IBOutlet UIImageView *playlistCoverImage;


@property (weak, nonatomic) IBOutlet UILabel *playlistTitle;


@property (weak, nonatomic) IBOutlet UILabel *playlistDescription;

@property (weak, nonatomic) IBOutlet UILabel *playlistArtist0;

@property (weak, nonatomic) IBOutlet UILabel *playlistArtist1;

@property (weak, nonatomic) IBOutlet UILabel *playlistArtist2;






@end
