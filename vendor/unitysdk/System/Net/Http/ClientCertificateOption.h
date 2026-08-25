#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Http
{
	inline static constexpr unsigned int ClientCertificateOption_TypeDefinitionIndex = 36651;

	class ClientCertificateOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Http::ClientCertificateOption* Manual; // 0x0
		::System::Net::Http::ClientCertificateOption* Automatic; // 0x0

	};
}

