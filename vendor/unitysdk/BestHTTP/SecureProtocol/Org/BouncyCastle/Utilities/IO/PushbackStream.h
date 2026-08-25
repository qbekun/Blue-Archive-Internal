#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PUSHBACKSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x932510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PUSHBACKSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x932580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PUSHBACKSTREAM_UNREAD_OFFSET UNITYSDK_OFFSET(0x9325C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PUSHBACKSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x932630)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO
{
	inline static constexpr unsigned int PushbackStream_TypeDefinitionIndex = 21598;

	class PushbackStream : public Il2CppObject
	{
	public:
		::System::Int32 buf; // 0x30

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PUSHBACKSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PUSHBACKSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Void Unread(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PUSHBACKSTREAM_UNREAD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PUSHBACKSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

