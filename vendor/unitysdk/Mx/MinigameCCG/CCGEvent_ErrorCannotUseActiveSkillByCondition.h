#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_ERRORCANNOTUSEACTIVESKILLBYCONDITION_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCD7E0)
#define MX_MINIGAMECCG_CCGEVENT_ERRORCANNOTUSEACTIVESKILLBYCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD7F0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_ErrorCannotUseActiveSkillByCondition_TypeDefinitionIndex = 20555;

	class CCGEvent_ErrorCannotUseActiveSkillByCondition : public Il2CppObject
	{
	public:
		::System::Int32 _EntityId_k__BackingField; // 0x10

		::System::Int32 get_EntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_ERRORCANNOTUSEACTIVESKILLBYCONDITION_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_ERRORCANNOTUSEACTIVESKILLBYCONDITION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

