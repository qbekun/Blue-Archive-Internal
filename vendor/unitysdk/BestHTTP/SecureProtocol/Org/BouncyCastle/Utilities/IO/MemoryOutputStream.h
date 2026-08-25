#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_MEMORYOUTPUTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x932480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_MEMORYOUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x932490)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO
{
	inline static constexpr unsigned int MemoryOutputStream_TypeDefinitionIndex = 21596;

	class MemoryOutputStream : public Il2CppObject
	{
	public:
		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_MEMORYOUTPUTSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_MEMORYOUTPUTSTREAM_.CTOR_OFFSET))(nullptr);
		}

	};
}

