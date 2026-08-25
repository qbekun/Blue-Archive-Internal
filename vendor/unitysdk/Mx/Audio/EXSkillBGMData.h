#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class AudioSource; }

#define MX_AUDIO_EXSKILLBGMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D50100)

namespace MX::Audio
{
	inline static constexpr unsigned int EXSkillBGMData_TypeDefinitionIndex = 20186;

	class EXSkillBGMData : public Il2CppObject
	{
	public:
		::System::Int32 Priority; // 0x10
		::UnityEngine::AudioClip* clip; // 0x18
		::System::Single ElapsedTime; // 0x20
		::UnityEngine::AudioSource* AudioSource; // 0x28
		::System::Boolean IgnoreTimeScale; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

