#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }

#define NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9517DE0)
#define NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9517E40)
#define NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9517E70)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenEqualityComparer_TypeDefinitionIndex = 32050;

	class JTokenEqualityComparer : public Il2CppObject
	{
	public:
		::System::Boolean Equals(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENEQUALITYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};
}

