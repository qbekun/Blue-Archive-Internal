#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Schema { class JsonSchema; }
namespace Newtonsoft::Json::Schema { class ValidationEventHandler; }

#define NEWTONSOFT_JSON_SCHEMA_EXTENSIONS_ISVALID_OFFSET UNITYSDK_OFFSET(0x94E87F0)
#define NEWTONSOFT_JSON_SCHEMA_EXTENSIONS_ISVALID_OFFSET UNITYSDK_OFFSET(0x94E8BF0)
#define NEWTONSOFT_JSON_SCHEMA_EXTENSIONS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x94E8D90)
#define NEWTONSOFT_JSON_SCHEMA_EXTENSIONS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x94E89C0)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int Extensions_TypeDefinitionIndex = 31977;

	class Extensions : public Il2CppObject
	{
	public:
		::System::Boolean IsValid(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_EXTENSIONS_ISVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValid(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Schema::JsonSchema*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_EXTENSIONS_ISVALID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Validate(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_EXTENSIONS_VALIDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Validate(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg, ::Newtonsoft::Json::Schema::ValidationEventHandler* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Schema::JsonSchema*, ::Newtonsoft::Json::Schema::ValidationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_EXTENSIONS_VALIDATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

