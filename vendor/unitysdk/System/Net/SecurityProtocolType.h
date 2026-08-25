#pragma once
#include "../../unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int SecurityProtocolType_TypeDefinitionIndex = 29671;

	class SecurityProtocolType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::SecurityProtocolType* SystemDefault; // 0x0
		::System::Net::SecurityProtocolType* Ssl3; // 0x0
		::System::Net::SecurityProtocolType* Tls; // 0x0
		::System::Net::SecurityProtocolType* Tls11; // 0x0
		::System::Net::SecurityProtocolType* Tls12; // 0x0
		::System::Net::SecurityProtocolType* Tls13; // 0x0

	};
}

