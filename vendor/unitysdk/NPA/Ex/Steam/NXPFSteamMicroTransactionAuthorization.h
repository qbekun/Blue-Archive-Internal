#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPFSteamMicroTransactionAuthorization_TypeDefinitionIndex = 26041;

	class NXPFSteamMicroTransactionAuthorization : public Il2CppObject
	{
	public:
		::System::UInt64 orderId; // 0x10
		::System::UInt32 appId; // 0x18
		::System::Boolean isAuthorized; // 0x1C

	};
}

