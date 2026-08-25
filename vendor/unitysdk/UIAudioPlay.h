#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets { class AssetReference; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine::Audio { class AudioMixerGroup; }
namespace UnityEngine { class AudioSource; }

#define UIAUDIOPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x22192F0)
#define UIAUDIOPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x22193C0)
#define UIAUDIOPLAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x22193E0)
#define UIAUDIOPLAY_PLAY_OFFSET UNITYSDK_OFFSET(0x22166F0)
#define UIAUDIOPLAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2219490)
#define UIAUDIOPLAY_CO_PLAY_OFFSET UNITYSDK_OFFSET(0x2219420)
#define UIAUDIOPLAY_VALIDDATA_OFFSET UNITYSDK_OFFSET(0x22194B0)
#define UIAUDIOPLAY_CO_LOAD_OFFSET UNITYSDK_OFFSET(0x22194F0)
#define UIAUDIOPLAY_ISLOADED_OFFSET UNITYSDK_OFFSET(0x2219580)
#define UIAUDIOPLAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2219610)

	inline static constexpr unsigned int UIAudioPlay_TypeDefinitionIndex = 4397;

	class UIAudioPlay : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::AssetReference* audioClipAseet; // 0x18
		::UnityEngine::AddressableAssets::AssetReference* audioMixerGroupAsset; // 0x20
		::System::Single volume; // 0x28
		::System::Single pitch; // 0x2C
		::System::Int32 randomPitchMin; // 0x30
		::System::Int32 randomPitchMax; // 0x34
		::System::Single delay; // 0x38
		::System::Boolean playEnable; // 0x3C
		::UnityEngine::AudioClip* audioClip; // 0x40
		::UnityEngine::Audio::AudioMixerGroup* audioMixerGroup; // 0x48
		::UnityEngine::AudioSource* AudioSource; // 0x50

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_PLAY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Play()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_CO_PLAY_OFFSET))(nullptr);
		}

		::System::Boolean ValidData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_VALIDDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Load()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_CO_LOAD_OFFSET))(nullptr);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_ISLOADED_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUDIOPLAY_ONDISABLE_OFFSET))(nullptr);
		}

	};

