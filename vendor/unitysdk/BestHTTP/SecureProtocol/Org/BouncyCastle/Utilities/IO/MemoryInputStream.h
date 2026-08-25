#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_MEMORYINPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x932460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_MEMORYINPUTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x932470)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO
{
	inline static constexpr unsigned int MemoryInputStream_TypeDefinitionIndex = 21595;

	class MemoryInputStream : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_MEMORYINPUTSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_MEMORYINPUTSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

	};
}

