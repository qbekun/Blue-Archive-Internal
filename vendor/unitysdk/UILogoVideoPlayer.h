#pragma once
#include "unitysdk.h"

namespace UnityEngine::Video { class VideoPlayer; }
class RetLocatedCountry;

#define UILOGOVIDEOPLAYER_ONLOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0xC8BCD0)
#define UILOGOVIDEOPLAYER_ONLOCATEDCOUNTRYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC8BE80)
#define UILOGOVIDEOPLAYER_COINITALIZE_OFFSET UNITYSDK_OFFSET(0xC8C140)
#define UILOGOVIDEOPLAYER_DELAYLOADSCENEONGOOGLEPLAYGAMES_OFFSET UNITYSDK_OFFSET(0xC8C0D0)
#define UILOGOVIDEOPLAYER_DELETEDUPLICATE_OFFSET UNITYSDK_OFFSET(0xC8C1F0)
#define UILOGOVIDEOPLAYER__AWAKE_B__1_0_OFFSET UNITYSDK_OFFSET(0xC8C7D0)
#define UILOGOVIDEOPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8C7E0)
#define UILOGOVIDEOPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC8C950)

	inline static constexpr unsigned int UILogoVideoPlayer_TypeDefinitionIndex = 9098;

	class UILogoVideoPlayer : public Il2CppObject
	{
	public:
		::UnityEngine::Video::VideoPlayer* logoVideoPlayer; // 0x18

		::System::Void OnLoopPointReached(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + UILOGOVIDEOPLAYER_ONLOOPPOINTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void OnLocatedCountryResponded(RetLocatedCountry* arg)
		{
			((::System::Void(*)(RetLocatedCountry*, ::PVOID))((::PBYTE)hIl2Cpp + UILOGOVIDEOPLAYER_ONLOCATEDCOUNTRYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoInitalize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOGOVIDEOPLAYER_COINITALIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DelayLoadSceneOnGooglePlayGames()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOGOVIDEOPLAYER_DELAYLOADSCENEONGOOGLEPLAYGAMES_OFFSET))(nullptr);
		}

		::System::Void DeleteDuplicate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOGOVIDEOPLAYER_DELETEDUPLICATE_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__1_0(::UnityEngine::Video::VideoPlayer* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILOGOVIDEOPLAYER__AWAKE_B__1_0_OFFSET))(arg, str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOGOVIDEOPLAYER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOGOVIDEOPLAYER_.CTOR_OFFSET))(nullptr);
		}

	};

