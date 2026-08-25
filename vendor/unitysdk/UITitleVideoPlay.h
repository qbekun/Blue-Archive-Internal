#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine::Video { class VideoPlayer; }
class PlayInfo;

#define UITITLEVIDEOPLAY_PLAYTITLEVIDEO_OFFSET UNITYSDK_OFFSET(0xCC6E50)
#define UITITLEVIDEOPLAY_COWAITANDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xCC6FF0)
#define UITITLEVIDEOPLAY_CHECKFILEEXIST_OFFSET UNITYSDK_OFFSET(0xCC7080)
#define UITITLEVIDEOPLAY_SET_ISFALLBACKTITLEVIDEOAUDIO_OFFSET UNITYSDK_OFFSET(0xCC7140)
#define UITITLEVIDEOPLAY_CO_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xCC7180)
#define UITITLEVIDEOPLAY_GET_ISFALLBACKTITLEVIDEOAUDIO_OFFSET UNITYSDK_OFFSET(0xCC7210)
#define UITITLEVIDEOPLAY_GET_IGNORESETPANELDEPTH_OFFSET UNITYSDK_OFFSET(0xCC7250)
#define UITITLEVIDEOPLAY_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xCC7260)
#define UITITLEVIDEOPLAY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xCC7360)
#define UITITLEVIDEOPLAY_CHECKFILEEXISTINDOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0xCC73A0)
#define UITITLEVIDEOPLAY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xCC7480)
#define UITITLEVIDEOPLAY_GETVIDEOFILEPATH_OFFSET UNITYSDK_OFFSET(0xCC74A0)
#define UITITLEVIDEOPLAY_GET_TITLEVIDEOAUDIOPLAYINFO_OFFSET UNITYSDK_OFFSET(0xCC7500)
#define UITITLEVIDEOPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xCC7540)
#define UITITLEVIDEOPLAY_CO_PLAYTITLEVIDEO_OFFSET UNITYSDK_OFFSET(0xCC6F60)
#define UITITLEVIDEOPLAY_SET_TITLEVIDEOAUDIOPLAYINFO_OFFSET UNITYSDK_OFFSET(0xCC76C0)
#define UITITLEVIDEOPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xCC7710)
#define UITITLEVIDEOPLAY__AWAKE_B__13_0_OFFSET UNITYSDK_OFFSET(0xCC7720)
#define UITITLEVIDEOPLAY_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xCC7760)

	inline static constexpr unsigned int UITitleVideoPlay_TypeDefinitionIndex = 9129;

	class UITitleVideoPlay : public Il2CppObject
	{
	public:
		UITexture* texture; // 0xD8
		::UnityEngine::Video::VideoPlayer* VideoPlayer; // 0xE0
		PlayInfo* _TitleVideoAudioPlayInfo_k__BackingField; // 0x0
		::System::Boolean _IsFallbackTitleVideoAudio_k__BackingField; // 0x8
		::System::Action* AfterPlayVideoAction; // 0xE8

		::System::Void PlayTitleVideo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_PLAYTITLEVIDEO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitAndPlayVideo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_COWAITANDPLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CheckFileExist(::System::String* str, ::System::String* str2, Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_CHECKFILEEXIST_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void set_IsFallbackTitleVideoAudio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_SET_ISFALLBACKTITLEVIDEOAUDIO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_PlayVideo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_CO_PLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFallbackTitleVideoAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_GET_ISFALLBACKTITLEVIDEOAUDIO_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreSetPanelDepth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_GET_IGNORESETPANELDEPTH_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CheckFileExistInDownloadData(::System::String* str, ::System::String* str2, Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_CHECKFILEEXISTINDOWNLOADDATA_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::String* GetVideoFilePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_GETVIDEOFILEPATH_OFFSET))(str, nullptr);
		}

		PlayInfo* get_TitleVideoAudioPlayInfo()
		{
			return ((PlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_GET_TITLEVIDEOAUDIOPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayTitleVideo(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_CO_PLAYTITLEVIDEO_OFFSET))(str, nullptr);
		}

		::System::Void set_TitleVideoAudioPlayInfo(PlayInfo* arg)
		{
			((::System::Void(*)(PlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_SET_TITLEVIDEOAUDIOPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__13_0(::UnityEngine::Video::VideoPlayer* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY__AWAKE_B__13_0_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEVIDEOPLAY_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

	};

