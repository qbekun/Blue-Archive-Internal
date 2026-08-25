#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x952E890)
#define NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x952E9D0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int DateTimeConverterBase_TypeDefinitionIndex = 32090;

	class DateTimeConverterBase : public Il2CppObject
	{
	public:
		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

