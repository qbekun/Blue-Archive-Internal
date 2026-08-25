#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG::Procedures { class CCGSkillVFXData; }

#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUALGLOBAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC4A0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_SkillVisualGlobal_TypeDefinitionIndex = 20532;

	class CCGEvent_SkillVisualGlobal : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::Procedures::CCGSkillVFXData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::Procedures::CCGSkillVFXData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUALGLOBAL_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

