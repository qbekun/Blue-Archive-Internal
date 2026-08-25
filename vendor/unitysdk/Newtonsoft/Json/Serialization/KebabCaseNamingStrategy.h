#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_KEBABCASENAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E4E90)
#define NEWTONSOFT_JSON_SERIALIZATION_KEBABCASENAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E4ED0)
#define NEWTONSOFT_JSON_SERIALIZATION_KEBABCASENAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E4F10)
#define NEWTONSOFT_JSON_SERIALIZATION_KEBABCASENAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94E4F20)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int KebabCaseNamingStrategy_TypeDefinitionIndex = 31964;

	class KebabCaseNamingStrategy : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_KEBABCASENAMINGSTRATEGY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_KEBABCASENAMINGSTRATEGY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_KEBABCASENAMINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ResolvePropertyName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_KEBABCASENAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET))(str, nullptr);
		}

	};
}

