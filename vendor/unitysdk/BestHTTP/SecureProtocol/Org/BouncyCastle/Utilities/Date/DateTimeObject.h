#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_DATE_DATETIMEOBJECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x938A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_DATE_DATETIMEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x938A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_DATE_DATETIMEOBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x938A30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date
{
	inline static constexpr unsigned int DateTimeObject_TypeDefinitionIndex = 21621;

	class DateTimeObject : public Il2CppObject
	{
	public:
		::System::DateTime* dt; // 0x10

		::System::DateTime* get_Value()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_DATE_DATETIMEOBJECT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_DATE_DATETIMEOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_DATE_DATETIMEOBJECT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

