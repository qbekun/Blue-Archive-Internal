#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class SOCKSMethods; }

namespace BestHTTP
{
	inline static constexpr unsigned int SOCKSMethods_TypeDefinitionIndex = 21319;

	class SOCKSMethods : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::SOCKSMethods* NoAuthenticationRequired; // 0x0
		::BestHTTP::SOCKSMethods* GSSAPI; // 0x0
		::BestHTTP::SOCKSMethods* UsernameAndPassword; // 0x0
		::BestHTTP::SOCKSMethods* NoAcceptableMethods; // 0x0

	};
}

