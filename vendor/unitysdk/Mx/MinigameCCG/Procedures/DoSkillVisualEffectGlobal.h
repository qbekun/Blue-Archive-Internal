#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class CCGSkillVFXData; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTGLOBAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E30F70)
#define MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTGLOBAL_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E30F80)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int DoSkillVisualEffectGlobal_TypeDefinitionIndex = 21005;

	class DoSkillVisualEffectGlobal : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::Procedures::CCGSkillVFXData* vfx; // 0x10
		::System::Boolean playEffectsSequentially; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTGLOBAL_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTGLOBAL_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

