#pragma once
#include "unitysdk.h"

namespace UnityEngine::Video { class VideoPlayer; }
namespace UnityEngine { class Coroutine; }
class BattlePassTask;

#define UIBATTLEPASSVIDEOPLAYER_ONVIDEOPLAYERLOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x2244F70)
#define UIBATTLEPASSVIDEOPLAYER_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x2245160)
#define UIBATTLEPASSVIDEOPLAYER_CO_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x22450F0)
#define UIBATTLEPASSVIDEOPLAYER_DETACHEXTENSIONONFILENAME_OFFSET UNITYSDK_OFFSET(0x2245250)
#define UIBATTLEPASSVIDEOPLAYER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x22452D0)
#define UIBATTLEPASSVIDEOPLAYER_PREPAREVIDEOS_OFFSET UNITYSDK_OFFSET(0x22454A0)
#define UIBATTLEPASSVIDEOPLAYER_COWAITANDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x2245AB0)
#define UIBATTLEPASSVIDEOPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2245B40)
#define UIBATTLEPASSVIDEOPLAYER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x2245B60)
#define UIBATTLEPASSVIDEOPLAYER_ATTACHEXTENSIONONFILENAME_OFFSET UNITYSDK_OFFSET(0x2245A20)
#define UIBATTLEPASSVIDEOPLAYER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x22450B0)
#define UIBATTLEPASSVIDEOPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2245C60)
#define UIBATTLEPASSVIDEOPLAYER_ONBACK_OFFSET UNITYSDK_OFFSET(0x2245D10)

	inline static constexpr unsigned int UIBattlePassVideoPlayer_TypeDefinitionIndex = 4500;

	class UIBattlePassVideoPlayer : public Il2CppObject
	{
	public:
		::UnityEngine::Video::VideoPlayer* VideoPlayer; // 0x18
		Il2CppObject* filePaths; // 0x20
		Il2CppObject* fileURLs; // 0x28
		::UnityEngine::Coroutine* playVideoCoroutine; // 0x30
		::System::Int32 prevVideoIndex; // 0x38
		::System::Int32 currentVideoIndex; // 0x3C
		::System::Boolean isVideoExist; // 0x40

		::System::Void OnVideoPlayerLoopPointReached(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_ONVIDEOPLAYERLOOPPOINTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayVideo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_PLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayVideo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_CO_PLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Void DetachExtensionOnFileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_DETACHEXTENSIONONFILENAME_OFFSET))(str, nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void PrepareVideos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_PREPAREVIDEOS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitAndPlayVideo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_COWAITANDPLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void AttachExtensionOnFileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_ATTACHEXTENSIONONFILENAME_OFFSET))(str, nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSVIDEOPLAYER_ONBACK_OFFSET))(nullptr);
		}

	};

