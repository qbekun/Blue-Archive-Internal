#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_GETARBITRARYVALUE_OFFSET UNITYSDK_OFFSET(0x8CADA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_GETENUMVALUE_OFFSET UNITYSDK_OFFSET(0x8CAF50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_GETENUMVALUES_OFFSET UNITYSDK_OFFSET(0x8CAE80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_ISENUMTYPE_OFFSET UNITYSDK_OFFSET(0x8CB150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8CB180)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	inline static constexpr unsigned int Enums_TypeDefinitionIndex = 21569;

	class Enums : public Il2CppObject
	{
	public:
		::System::Enum* GetArbitraryValue(::System::Type* arg)
		{
			return (return (::System::Enum*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_GETARBITRARYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Enum* GetEnumValue(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Enum*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_GETENUMVALUE_OFFSET))(arg, str, nullptr);
		}

		::System::Array* GetEnumValues(::System::Type* arg)
		{
			return (return (::System::Array*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_GETENUMVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEnumType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_ISENUMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENUMS_.CTOR_OFFSET))(nullptr);
		}

	};
}

