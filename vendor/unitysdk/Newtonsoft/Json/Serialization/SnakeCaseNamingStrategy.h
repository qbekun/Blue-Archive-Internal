#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_SNAKECASENAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E5F80)
#define NEWTONSOFT_JSON_SERIALIZATION_SNAKECASENAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E5FB0)
#define NEWTONSOFT_JSON_SERIALIZATION_SNAKECASENAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E5FF0)
#define NEWTONSOFT_JSON_SERIALIZATION_SNAKECASENAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94E6000)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int SnakeCaseNamingStrategy_TypeDefinitionIndex = 31972;

	class SnakeCaseNamingStrategy : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SNAKECASENAMINGSTRATEGY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SNAKECASENAMINGSTRATEGY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SNAKECASENAMINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ResolvePropertyName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SNAKECASENAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET))(str, nullptr);
		}

	};
}

