#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Security
{
	inline static constexpr unsigned int AuthenticationLevel_TypeDefinitionIndex = 29941;

	class AuthenticationLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Security::AuthenticationLevel* None; // 0x0
		::System::Net::Security::AuthenticationLevel* MutualAuthRequested; // 0x0
		::System::Net::Security::AuthenticationLevel* MutualAuthRequired; // 0x0

	};
}

