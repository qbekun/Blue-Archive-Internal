#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_CCGEVENT_CHANGESTRIKERHP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD3F0)
#define MX_MINIGAMECCG_CCGEVENT_CHANGESTRIKERHP_GET_EVENTHEALTHCHANGES_OFFSET UNITYSDK_OFFSET(0x1DCD420)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_ChangeStrikerHp_TypeDefinitionIndex = 20550;

	class CCGEvent_ChangeStrikerHp : public Il2CppObject
	{
	public:
		Il2CppObject* _EventHealthChanges_k__BackingField; // 0x10

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGESTRIKERHP_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EventHealthChanges()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGESTRIKERHP_GET_EVENTHEALTHCHANGES_OFFSET))(nullptr);
		}

	};
}

