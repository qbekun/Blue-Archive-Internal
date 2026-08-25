#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG::Procedures { class CCGSkillVFXData; }

#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC410)
#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONFIELD_GET_TARGETPLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCC490)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_SkillVisualOnField_TypeDefinitionIndex = 20531;

	class CCGEvent_SkillVisualOnField : public Il2CppObject
	{
	public:
		::System::Int32 _TargetPlayerId_k__BackingField; // 0x38

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::Procedures::CCGSkillVFXData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::Procedures::CCGSkillVFXData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONFIELD_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_TargetPlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONFIELD_GET_TARGETPLAYERID_OFFSET))(nullptr);
		}

	};
}

