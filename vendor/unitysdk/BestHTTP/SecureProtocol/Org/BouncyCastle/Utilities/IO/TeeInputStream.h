#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEINPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x932D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEINPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x932DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEINPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x932E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x932E80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO
{
	inline static constexpr unsigned int TeeInputStream_TypeDefinitionIndex = 21601;

	class TeeInputStream : public ::TriInspector::ShowInEditModeAttribute
	{
	public:
		::System::IO::Stream* input; // 0x30
		::System::IO::Stream* tee; // 0x38

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEINPUTSTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEINPUTSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEINPUTSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_TEEINPUTSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

