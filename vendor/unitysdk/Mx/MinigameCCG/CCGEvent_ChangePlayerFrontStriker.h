#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGStriker; }

#define MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERFRONTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCEC00)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERFRONTSTRIKER_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCEC40)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERFRONTSTRIKER_GET_STRIKERENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCEC50)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_ChangePlayerFrontStriker_TypeDefinitionIndex = 20578;

	class CCGEvent_ChangePlayerFrontStriker : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::System::Int32 _StrikerEntityId_k__BackingField; // 0x14

		::System::Void .ctor(::MX::MinigameCCG::CCGStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERFRONTSTRIKER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERFRONTSTRIKER_GET_PLAYERID_OFFSET))(nullptr);
		}

		::System::Int32 get_StrikerEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEPLAYERFRONTSTRIKER_GET_STRIKERENTITYID_OFFSET))(nullptr);
		}

	};
}

