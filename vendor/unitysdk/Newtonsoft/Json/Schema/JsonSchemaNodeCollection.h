#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchemaNode; }

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODECOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x94F44B0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F2510)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaNodeCollection_TypeDefinitionIndex = 31990;

	class JsonSchemaNodeCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::FilterStream
	{
	public:
		::System::String* GetKeyForItem(::Newtonsoft::Json::Schema::JsonSchemaNode* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODECOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODECOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

