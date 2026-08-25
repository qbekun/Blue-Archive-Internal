#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B98D0)
#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B9900)
#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B9940)
#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94B9950)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int CamelCaseNamingStrategy_TypeDefinitionIndex = 31906;

	class CamelCaseNamingStrategy : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ResolvePropertyName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASENAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET))(str, nullptr);
		}

	};
}

