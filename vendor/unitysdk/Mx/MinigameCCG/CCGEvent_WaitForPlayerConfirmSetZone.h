#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMSETZONE_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0x1DCE440)
#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMSETZONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE450)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_WaitForPlayerConfirmSetZone_TypeDefinitionIndex = 20566;

	class CCGEvent_WaitForPlayerConfirmSetZone : public Il2CppObject
	{
	public:
		::System::Int32 _SourceEntity_k__BackingField; // 0x18

		::System::Int32 get_SourceEntity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMSETZONE_GET_SOURCEENTITY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMSETZONE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

