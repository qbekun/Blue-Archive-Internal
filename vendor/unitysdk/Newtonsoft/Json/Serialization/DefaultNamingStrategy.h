#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTNAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94C6EF0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTNAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C6F00)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultNamingStrategy_TypeDefinitionIndex = 31920;

	class DefaultNamingStrategy : public Il2CppObject
	{
	public:
		::System::String* ResolvePropertyName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTNAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTNAMINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

	};
}

