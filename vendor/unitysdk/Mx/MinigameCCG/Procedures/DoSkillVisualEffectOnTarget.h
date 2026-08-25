#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::Procedures { class CCGSkillVFXData; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTONTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E31260)
#define MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTONTARGET_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E31270)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int DoSkillVisualEffectOnTarget_TypeDefinitionIndex = 21007;

	class DoSkillVisualEffectOnTarget : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* targetsVar; // 0x10
		::MX::MinigameCCG::Procedures::CCGSkillVFXData* vfx; // 0x18
		::System::Boolean faceToTarget; // 0x20
		::System::Boolean playEffectsSequentially; // 0x21

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTONTARGET_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DOSKILLVISUALEFFECTONTARGET_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

