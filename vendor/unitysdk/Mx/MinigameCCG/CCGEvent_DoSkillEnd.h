#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_DOSKILLEND_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1DCBBF0)
#define MX_MINIGAMECCG_CCGEVENT_DOSKILLEND_GET_HEALTH_OFFSET UNITYSDK_OFFSET(0x1DCBC00)
#define MX_MINIGAMECCG_CCGEVENT_DOSKILLEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBC10)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_DoSkillEnd_TypeDefinitionIndex = 20523;

	class CCGEvent_DoSkillEnd : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGSkillContext* _Context_k__BackingField; // 0x10
		::System::Int32 _Health_k__BackingField; // 0x18

		::MX::MinigameCCG::CCGSkillContext* get_Context()
		{
			return (return (::MX::MinigameCCG::CCGSkillContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DOSKILLEND_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_Health()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DOSKILLEND_GET_HEALTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DOSKILLEND_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

