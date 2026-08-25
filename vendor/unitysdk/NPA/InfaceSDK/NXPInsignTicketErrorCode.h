#pragma once
#include "../../unitysdk.h"

namespace NPA::InfaceSDK { class NXPInsignTicketErrorCode; }

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPInsignTicketErrorCode_TypeDefinitionIndex = 25785;

	class NXPInsignTicketErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::InfaceSDK::NXPInsignTicketErrorCode* INVALID_GID; // 0x0
		::NPA::InfaceSDK::NXPInsignTicketErrorCode* NOT_FOUND_DATA; // 0x0
		::NPA::InfaceSDK::NXPInsignTicketErrorCode* NOT_FOUND_CONSOLE_LINK; // 0x0
		::NPA::InfaceSDK::NXPInsignTicketErrorCode* INVALID_PLATFORM_TOKEN; // 0x0
		::NPA::InfaceSDK::NXPInsignTicketErrorCode* ALREADY_EXIST; // 0x0
		::NPA::InfaceSDK::NXPInsignTicketErrorCode* CONFLICT; // 0x0
		::NPA::InfaceSDK::NXPInsignTicketErrorCode* SWAP_FAILED; // 0x0

	};
}

