#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntityLocation; }
namespace MX::MinigameCCG { class CCGCard; }

#define MX_MINIGAMECCG_CCGEVENT_KILLCARD_GET_CARDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCB40)
#define MX_MINIGAMECCG_CCGEVENT_KILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCB50)
#define MX_MINIGAMECCG_CCGEVENT_KILLCARD_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1DCCB90)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_KillCard_TypeDefinitionIndex = 20538;

	class CCGEvent_KillCard : public Il2CppObject
	{
	public:
		::System::Int32 _CardEntityId_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGEntityLocation* _Destination_k__BackingField; // 0x14

		::System::Int32 get_CardEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_KILLCARD_GET_CARDENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCard* arg, ::MX::MinigameCCG::CCGEntityLocation* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::MX::MinigameCCG::CCGEntityLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_KILLCARD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGEntityLocation* get_Destination()
		{
			return (return (::MX::MinigameCCG::CCGEntityLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_KILLCARD_GET_DESTINATION_OFFSET))(nullptr);
		}

	};
}

