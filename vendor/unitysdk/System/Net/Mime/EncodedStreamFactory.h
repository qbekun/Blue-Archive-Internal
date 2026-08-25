#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAC5C0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int EncodedStreamFactory_TypeDefinitionIndex = 29928;

	class EncodedStreamFactory : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_ENCODEDSTREAMFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

