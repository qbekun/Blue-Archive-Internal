#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_TCPVALIDATIONHELPERS_VALIDATEPORTNUMBER_OFFSET UNITYSDK_OFFSET(0x9B8F190)

namespace System::Net
{
	inline static constexpr unsigned int TcpValidationHelpers_TypeDefinitionIndex = 29641;

	class TcpValidationHelpers : public Il2CppObject
	{
	public:
		::System::Boolean ValidatePortNumber(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TCPVALIDATIONHELPERS_VALIDATEPORTNUMBER_OFFSET))(arg, nullptr);
		}

	};
}

