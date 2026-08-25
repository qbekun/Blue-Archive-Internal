#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_LOGGING_GET_ON_OFFSET UNITYSDK_OFFSET(0x9A4B860)

namespace System::Net
{
	inline static constexpr unsigned int Logging_TypeDefinitionIndex = 29752;

	class Logging : public Il2CppObject
	{
	public:
		::System::Boolean get_On()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_GET_ON_OFFSET))(nullptr);
		}

	};
}

