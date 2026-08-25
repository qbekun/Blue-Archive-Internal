#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioClip; }
namespace MX::Audio { class EXSkillBGMData; }

#define EXSKILLBGMPLAY_CO_PLAY_OFFSET UNITYSDK_OFFSET(0x20ABD50)
#define EXSKILLBGMPLAY_STOP_OFFSET UNITYSDK_OFFSET(0x20ABDE0)
#define EXSKILLBGMPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x20ABE60)
#define EXSKILLBGMPLAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20ABE80)
#define EXSKILLBGMPLAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20ABF10)

	inline static constexpr unsigned int EXSkillBGMPlay_TypeDefinitionIndex = 3553;

	class EXSkillBGMPlay : public Il2CppObject
	{
	public:
		::UnityEngine::AudioClip* Clip; // 0x18
		::System::Int32 Priority; // 0x20
		::System::Boolean PlayOnEnable; // 0x24
		::System::Boolean PlayBothTeam; // 0x25
		::System::Boolean IgnoreTimeScale; // 0x26
		::MX::Audio::EXSkillBGMData* bgmData; // 0x28

		::System::Collections::IEnumerator* co_Play()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLBGMPLAY_CO_PLAY_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLBGMPLAY_STOP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLBGMPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLBGMPLAY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLBGMPLAY_ONDISABLE_OFFSET))(nullptr);
		}

	};

