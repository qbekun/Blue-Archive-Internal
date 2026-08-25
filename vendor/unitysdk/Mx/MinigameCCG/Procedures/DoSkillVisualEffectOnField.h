#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG::Procedures { class CCGSkillVFXData; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTONFIELD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E315F0)
#define MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTONFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E316B0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int DoSkillVisualEffectOnField_TypeDefinitionIndex = 21009;

	class DoSkillVisualEffectOnField : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* targetPlayerVar; // 0x10
		::MX::MinigameCCG::Procedures::CCGSkillVFXData* vfx; // 0x18
		::System::Boolean playEffectsSequentially; // 0x20

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTONFIELD_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTONFIELD_.CTOR_OFFSET))(nullptr);
		}

	};
}

