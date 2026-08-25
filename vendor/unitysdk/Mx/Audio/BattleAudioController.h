#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace UnityEngine { class AudioSource; }
namespace MX::Audio { class AudioSourceObject; }

#define MX_AUDIO_BATTLEAUDIOCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D37230)
#define MX_AUDIO_BATTLEAUDIOCONTROLLER_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1D372C0)
#define MX_AUDIO_BATTLEAUDIOCONTROLLER_SET_IGNOREVELOCITYLIST_OFFSET UNITYSDK_OFFSET(0x1D372D0)
#define MX_AUDIO_BATTLEAUDIOCONTROLLER_GET_IGNOREVELOCITYLIST_OFFSET UNITYSDK_OFFSET(0x1D372E0)
#define MX_AUDIO_BATTLEAUDIOCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D372F0)
#define MX_AUDIO_BATTLEAUDIOCONTROLLER_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1D37350)
#define MX_AUDIO_BATTLEAUDIOCONTROLLER_ISIGNOREVELOCITYAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D37360)
#define MX_AUDIO_BATTLEAUDIOCONTROLLER_IGNOREVELOCITYAUDIOONPLAYED_OFFSET UNITYSDK_OFFSET(0x1D37520)
#define MX_AUDIO_BATTLEAUDIOCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D37750)

namespace MX::Audio
{
	inline static constexpr unsigned int BattleAudioController_TypeDefinitionIndex = 20093;

	class BattleAudioController : public ::ToyWebViewShared::Messages::NotifyClose
	{
	public:
		Il2CppObject* _IgnoreVelocityList_k__BackingField; // 0x20
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x28

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEAUDIOCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Battle(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEAUDIOCONTROLLER_SET_BATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IgnoreVelocityList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEAUDIOCONTROLLER_SET_IGNOREVELOCITYLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_IgnoreVelocityList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEAUDIOCONTROLLER_GET_IGNOREVELOCITYLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEAUDIOCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return (return (::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEAUDIOCONTROLLER_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Boolean IsIgnoreVelocityAudioSource(::UnityEngine::AudioSource* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEAUDIOCONTROLLER_ISIGNOREVELOCITYAUDIOSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void IgnoreVelocityAudioOnPlayed(::MX::Audio::AudioSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEAUDIOCONTROLLER_IGNOREVELOCITYAUDIOONPLAYED_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEAUDIOCONTROLLER_CLEAR_OFFSET))(nullptr);
		}

	};
}

