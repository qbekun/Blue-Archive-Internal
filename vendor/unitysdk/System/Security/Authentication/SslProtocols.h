#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Authentication
{
	inline static constexpr unsigned int SslProtocols_TypeDefinitionIndex = 29265;

	class SslProtocols : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Authentication::SslProtocols* None; // 0x0
		::System::Security::Authentication::SslProtocols* Ssl2; // 0x0
		::System::Security::Authentication::SslProtocols* Ssl3; // 0x0
		::System::Security::Authentication::SslProtocols* Tls; // 0x0
		::System::Security::Authentication::SslProtocols* Tls11; // 0x0
		::System::Security::Authentication::SslProtocols* Tls12; // 0x0
		::System::Security::Authentication::SslProtocols* Tls13; // 0x0
		::System::Security::Authentication::SslProtocols* Default; // 0x0

	};
}

