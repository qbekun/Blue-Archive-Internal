#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEOUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x932EF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEOUTPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x932F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEOUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x932FB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEOUTPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x933030)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO
{
	inline static constexpr unsigned int TeeOutputStream_TypeDefinitionIndex = 21602;

	class TeeOutputStream : public ::TriInspector::TriDropdownList`1
	{
	public:
		::System::IO::Stream* output; // 0x30
		::System::IO::Stream* tee; // 0x38

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEOUTPUTSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEOUTPUTSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEOUTPUTSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEOUTPUTSTREAM_CLOSE_OFFSET))(nullptr);
		}

	};
}

