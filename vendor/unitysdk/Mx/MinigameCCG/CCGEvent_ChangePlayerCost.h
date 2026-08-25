#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_GET_COST_OFFSET UNITYSDK_OFFSET(0x1DCEB70)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCEB80)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_GET_BEFORECOST_OFFSET UNITYSDK_OFFSET(0x1DCEB90)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCEBA0)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_GET_AFTERCOST_OFFSET UNITYSDK_OFFSET(0x1DCEBF0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_ChangePlayerCost_TypeDefinitionIndex = 20577;

	class CCGEvent_ChangePlayerCost : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::System::Int32 _Cost_k__BackingField; // 0x14
		::System::Int32 _BeforeCost_k__BackingField; // 0x18
		::System::Int32 _AfterCost_k__BackingField; // 0x1C

		::System::Int32 get_Cost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_GET_COST_OFFSET))(nullptr);
		}

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_GET_PLAYERID_OFFSET))(nullptr);
		}

		::System::Int32 get_BeforeCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_GET_BEFORECOST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_AfterCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERCOST_GET_AFTERCOST_OFFSET))(nullptr);
		}

	};
}

