#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { class PemObject; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMREADER_LOADOBJECT_OFFSET UNITYSDK_OFFSET(0x9334B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMREADER_READPEMOBJECT_OFFSET UNITYSDK_OFFSET(0x933920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x933A60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMREADER_GET_READER_OFFSET UNITYSDK_OFFSET(0x933AF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	inline static constexpr unsigned int PemReader_TypeDefinitionIndex = 21608;

	class PemReader : public Il2CppObject
	{
	public:
		::System::String* BeginString; // 0x0
		::System::String* EndString; // 0x0
		::System::IO::TextReader* reader; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* LoadObject(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMREADER_LOADOBJECT_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* ReadPemObject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMREADER_READPEMOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::IO::TextReader* get_Reader()
		{
			return (return (::System::IO::TextReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMREADER_GET_READER_OFFSET))(nullptr);
		}

	};
}

