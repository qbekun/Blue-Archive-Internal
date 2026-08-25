#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { class PemObject; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x933360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9333D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x933470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x933480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x933490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_GENERATE_OFFSET UNITYSDK_OFFSET(0x9334A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	inline static constexpr unsigned int PemObject_TypeDefinitionIndex = 21605;

	class PemObject : public Il2CppObject
	{
	public:
		::System::String* type; // 0x10
		::System::Collections::IList* headers; // 0x18
		::Il2CppArray<::System::Object*>* content; // 0x20

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Collections::IList* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Collections::IList*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* get_Type()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Collections::IList* get_Headers()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_GET_HEADERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Content()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_GET_CONTENT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECT_GENERATE_OFFSET))(nullptr);
		}

	};
}

