#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { class PemObjectGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { class PemObject; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_WRITEPREENCAPSULATIONBOUNDARY_OFFSET UNITYSDK_OFFSET(0x933B00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_WRITEENCODED_OFFSET UNITYSDK_OFFSET(0x933B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x933D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_GET_WRITER_OFFSET UNITYSDK_OFFSET(0x9343F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_GETOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x934400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_WRITEPOSTENCAPSULATIONBOUNDARY_OFFSET UNITYSDK_OFFSET(0x934370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x934910)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	inline static constexpr unsigned int PemWriter_TypeDefinitionIndex = 21609;

	class PemWriter : public Il2CppObject
	{
	public:
		::System::Int32 LineLength; // 0x0
		::System::IO::TextWriter* writer; // 0x10
		::System::Int32 nlLength; // 0x18
		::Il2CppArray<::System::Object*>* buf; // 0x20

		::System::Void WritePreEncapsulationBoundary(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_WRITEPREENCAPSULATIONBOUNDARY_OFFSET))(str, nullptr);
		}

		::System::Void WriteEncoded(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_WRITEENCODED_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_WRITEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::IO::TextWriter* get_Writer()
		{
			return (return (::System::IO::TextWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_GET_WRITER_OFFSET))(nullptr);
		}

		::System::Int32 GetOutputSize(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_GETOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void WritePostEncapsulationBoundary(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_WRITEPOSTENCAPSULATIONBOUNDARY_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::IO::TextWriter* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

