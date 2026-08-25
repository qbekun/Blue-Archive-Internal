#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_IPINNABLE_UNPIN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Buffers
{
	inline static constexpr unsigned int IPinnable_TypeDefinitionIndex = 25192;

	class IPinnable : public Il2CppObject
	{
	public:
		::System::Void Unpin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_IPINNABLE_UNPIN_OFFSET))(nullptr);
		}

	};
}

