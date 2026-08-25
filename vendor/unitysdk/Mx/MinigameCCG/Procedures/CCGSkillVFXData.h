#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class CCGSkillVFXType; }
namespace MX::MinigameCCG::Procedures { class SkillVFXInfo; }
namespace MX::MinigameCCG::Procedures { class SkillVFXProjectileInfo; }

#define MX_MINIGAMECCG_PROCEDURES_CCGSKILLVFXDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3E0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int CCGSkillVFXData_TypeDefinitionIndex = 20956;

	class CCGSkillVFXData : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::Procedures::CCGSkillVFXType* type; // 0x18
		Il2CppObject* SourceEntity; // 0x20
		::MX::MinigameCCG::Procedures::SkillVFXInfo* TargetEntity; // 0x28
		::MX::MinigameCCG::Procedures::SkillVFXProjectileInfo* Projectile; // 0x30
		::MX::MinigameCCG::Procedures::SkillVFXInfo* Field; // 0x38
		::MX::MinigameCCG::Procedures::SkillVFXInfo* Global; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_CCGSKILLVFXDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

