#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Security
{
	inline static constexpr unsigned int SslPolicyErrors_TypeDefinitionIndex = 29945;

	class SslPolicyErrors : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Security::SslPolicyErrors* None; // 0x0
		::System::Net::Security::SslPolicyErrors* RemoteCertificateNotAvailable; // 0x0
		::System::Net::Security::SslPolicyErrors* RemoteCertificateNameMismatch; // 0x0
		::System::Net::Security::SslPolicyErrors* RemoteCertificateChainErrors; // 0x0

	};
}

