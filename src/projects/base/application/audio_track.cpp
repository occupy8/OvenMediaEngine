//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Kwon Keuk Han
//  Copyright (c) 2018 AirenSoft. All rights reserved.
//
//==============================================================================
#include "audio_track.h"

using namespace MediaCommonType;

void AudioTrack::SetSampleRate(int32_t sample_rate)
{
	_sample.SetRate((AudioSample::Rate)sample_rate);
}

int32_t AudioTrack::GetSampleRate()
{
	return (int32_t)_sample.GetRate();
}

AudioSample &AudioTrack::GetSample()
{
	return _sample;
}

AudioSample::Format AudioTrack::GetSampleFormat()
{
	return _sample.GetFormat();
}

AudioChannel::Layout AudioTrack::GetChannelLayout()
{
	return _channel_layout.GetLayout();
}

AudioChannel &AudioTrack::GetChannel()
{
	return _channel_layout;
}
