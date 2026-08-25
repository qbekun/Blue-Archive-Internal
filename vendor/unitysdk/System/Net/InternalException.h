#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_INTERNALEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B94760)

namespace System::Net
{
	inline static constexpr unsigned int InternalException_TypeDefinitionIndex = 29683;

	class InternalException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERNALEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

