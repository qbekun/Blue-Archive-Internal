#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_CCGEVENT_ADVANCETURNNUMBER_GET_TURNBEFORE_OFFSET UNITYSDK_OFFSET(0x1DCED20)
#define MX_MINIGAMECCG_CCGEVENT_ADVANCETURNNUMBER_GET_TURNAFTER_OFFSET UNITYSDK_OFFSET(0x1DCED30)
#define MX_MINIGAMECCG_CCGEVENT_ADVANCETURNNUMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCED40)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_AdvanceTurnNumber_TypeDefinitionIndex = 20581;

	class CCGEvent_AdvanceTurnNumber : public Il2CppObject
	{
	public:
		::System::Int32 _TurnBefore_k__BackingField; // 0x10
		::System::Int32 _TurnAfter_k__BackingField; // 0x14

		::System::Int32 get_TurnBefore()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_ADVANCETURNNUMBER_GET_TURNBEFORE_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnAfter()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_ADVANCETURNNUMBER_GET_TURNAFTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_ADVANCETURNNUMBER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

