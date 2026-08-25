#pragma once
#include "../../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9331B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x933200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x933210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x933220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9332B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x933280)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	inline static constexpr unsigned int PemHeader_TypeDefinitionIndex = 21604;

	class PemHeader : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* val; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMHEADER_GETHASHCODE_OFFSET))(str, nullptr);
		}

	};
}

