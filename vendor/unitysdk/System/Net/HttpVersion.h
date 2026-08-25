#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HTTPVERSION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B8F770)

namespace System::Net
{
	inline static constexpr unsigned int HttpVersion_TypeDefinitionIndex = 29644;

	class HttpVersion : public Il2CppObject
	{
	public:
		::System::Version* Unknown; // 0x0
		::System::Version* Version10; // 0x8
		::System::Version* Version11; // 0x10
		::System::Version* Version20; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVERSION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

