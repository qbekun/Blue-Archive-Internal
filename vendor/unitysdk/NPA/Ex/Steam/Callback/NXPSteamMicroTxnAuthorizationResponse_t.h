#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamMicroTxnAuthorizationResponse_t_TypeDefinitionIndex = 26099;

	class NXPSteamMicroTxnAuthorizationResponse_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::System::UInt32 m_unAppID; // 0x10
		::System::UInt64 m_ulOrderID; // 0x18
		::System::Byte m_bAuthorized; // 0x20

	};
}

