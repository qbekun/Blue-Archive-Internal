#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_NULLOUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9324A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_NULLOUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9324F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_NULLOUTPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x932500)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO
{
	inline static constexpr unsigned int NullOutputStream_TypeDefinitionIndex = 21597;

	class NullOutputStream : public ::TriInspector::TriDropdownList`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_NULLOUTPUTSTREAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_NULLOUTPUTSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_NULLOUTPUTSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

	};
}

