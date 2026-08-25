#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_SIMPLEJSON_JSON_PARSE_OFFSET UNITYSDK_OFFSET(0x9CD3440)
#define NPA_SIMPLEJSON_JSON_PARSEADVANCED_OFFSET UNITYSDK_OFFSET(0x9CD3450)

namespace NPA::SimpleJSON
{
	inline static constexpr unsigned int JSON_TypeDefinitionIndex = 27430;

	class JSON : public Il2CppObject
	{
	public:
		::NPA::SimpleJSON::JSONNode* Parse(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSON_PARSE_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ParseAdvanced(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSON_PARSEADVANCED_OFFSET))(str, nullptr);
		}

	};
}

