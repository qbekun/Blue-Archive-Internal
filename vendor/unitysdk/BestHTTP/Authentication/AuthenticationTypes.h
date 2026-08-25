#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Authentication { class AuthenticationTypes; }

namespace BestHTTP::Authentication
{
	inline static constexpr unsigned int AuthenticationTypes_TypeDefinitionIndex = 23476;

	class AuthenticationTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Authentication::AuthenticationTypes* Unknown; // 0x0
		::BestHTTP::Authentication::AuthenticationTypes* Basic; // 0x0
		::BestHTTP::Authentication::AuthenticationTypes* Digest; // 0x0

	};
}

