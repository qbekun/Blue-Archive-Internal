#pragma once
#include "unitysdk.h"

class PlayInfo;

#define TITLEVIDEOAUDIO_SAVE_OFFSET UNITYSDK_OFFSET(0x1EEFFD0)
#define TITLEVIDEOAUDIO_LOADV1_OFFSET UNITYSDK_OFFSET(0x1EF0560)
#define TITLEVIDEOAUDIO_LOAD_OFFSET UNITYSDK_OFFSET(0x1EF0800)
#define TITLEVIDEOAUDIO_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x1EF0750)
#define TITLEVIDEOAUDIO_LOADV3_OFFSET UNITYSDK_OFFSET(0x1EF0940)
#define TITLEVIDEOAUDIO_LOADV2_OFFSET UNITYSDK_OFFSET(0x1EF0B20)

	inline static constexpr unsigned int TitleVideoAudio_TypeDefinitionIndex = 1898;

	class TitleVideoAudio : public Il2CppObject
	{
	public:
		::System::Int64 IdForRandom; // 0x0
		::System::String* PlayerPrefsSaveUID; // 0x0
		::System::String* PlayerPrefsUserTitleVideoAudioV2; // 0x0
		::System::String* PlayerPrefsUserTitleVideoAudioV1; // 0x0

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TITLEVIDEOAUDIO_SAVE_OFFSET))(nullptr);
		}

		PlayInfo* LoadV1()
		{
			return ((PlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TITLEVIDEOAUDIO_LOADV1_OFFSET))(nullptr);
		}

		PlayInfo* Load()
		{
			return ((PlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TITLEVIDEOAUDIO_LOAD_OFFSET))(nullptr);
		}

		PlayInfo* GetDefault()
		{
			return ((PlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TITLEVIDEOAUDIO_GETDEFAULT_OFFSET))(nullptr);
		}

		PlayInfo* LoadV3()
		{
			return ((PlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TITLEVIDEOAUDIO_LOADV3_OFFSET))(nullptr);
		}

		PlayInfo* LoadV2()
		{
			return ((PlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TITLEVIDEOAUDIO_LOADV2_OFFSET))(nullptr);
		}

	};

