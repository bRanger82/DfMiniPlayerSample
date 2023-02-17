#pragma once

#ifndef MP3_BLE_COMMANDS_H
#define MP3_BLE_COMMANDS_H

enum MP3_CMD
{
  MP3_CMD_PLAY_GLOBAL_TRACK         = 1,
  MP3_CMD_PLAY_FOLDER_TRACK         = 2,
  MP3_CMD_PLAY_NEXT_TRACK           = 3,
  MP3_CMD_PLAY_PREVIOUS_TRACK       = 4,
  MP3_CMD_GET_CURRENT_TRACK         = 5,
  MP3_CMD_GET_CURRENT_PLAYBACK_MODE = 6,
  MP3_CMD_SET_NEXT_EQ               = 7,
  MP3_CMD_VOLUME_ONE_STEP_DOWN      = 8,
  MP3_CMD_VOLUME_ONE_STEP_UP        = 9,
  MP3_CMD_GET_ALL_TRACK_COUNT       = 10,
  MP3_CMD_PAUSE_PLAY                = 11,
  MP3_CMD_STOP_PLAY                 = 12,
  MP3_CMD_START_PLAY                = 13  
};

#endif
