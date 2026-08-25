#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class SkillUseParameter; }

#define NOISEMAKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA16D0)
#define NOISEMAKER_GETEFFECTAREA_OFFSET UNITYSDK_OFFSET(0xDA1700)
#define NOISEMAKER_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xDA1710)

	inline static constexpr unsigned int NoiseMaker_TypeDefinitionIndex = 9841;

	class NoiseMaker : public Il2CppObject
	{
	public:
		::System::Single Duration; // 0x38
		::System::Single PropSpawnStartFrame; // 0x3C
		::UnityEngine::GameObject* noiseMakerPrefab; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOISEMAKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single GetEffectArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NOISEMAKER_GETEFFECTAREA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + NOISEMAKER_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

