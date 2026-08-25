#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class SkillVFXInfo; }
namespace MX::MinigameCCG::Procedures { class CCGHitActiveTiming; }

#define MX_MINIGAMECCG_PROCEDURES_SKILLVFXPROJECTILEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3C0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int SkillVFXProjectileInfo_TypeDefinitionIndex = 20955;

	class SkillVFXProjectileInfo : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::Procedures::SkillVFXInfo* LaunchEffect; // 0x20
		::System::Boolean IsStatic; // 0x28
		::System::Single FlightTime; // 0x2C
		::System::Int32 EffectCount; // 0x30
		::MX::MinigameCCG::Procedures::CCGHitActiveTiming* HitActiveTiming; // 0x34
		::System::Single TargetDistanceOffset; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SKILLVFXPROJECTILEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

