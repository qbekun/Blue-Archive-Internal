#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCParticleSpawnInfo; }
namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class SkillUseParameter; }

#define HEAL_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD9F810)
#define HEAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9F8C0)

	inline static constexpr unsigned int Heal_TypeDefinitionIndex = 9831;

	class Heal : public Il2CppObject
	{
	public:
		::MXUnderCover::UCParticleSpawnInfo* healEffect; // 0x38

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + HEAL_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAL_.CTOR_OFFSET))(nullptr);
		}

	};

