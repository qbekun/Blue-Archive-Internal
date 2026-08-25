#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8A5EF0)
#define BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8A5F90)
#define BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A3BE0)
#define BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x8A6040)
#define BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x8A6120)
#define BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8A61D0)
#define BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8A6270)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int OrderedDictionaryEnumerator_TypeDefinitionIndex = 23305;

	class OrderedDictionaryEnumerator : public Il2CppObject
	{
	public:
		Il2CppObject* list_enumerator; // 0x10

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::DictionaryEntry* get_Entry()
		{
			return (return (::System::Collections::DictionaryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_ENTRY_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_KEY_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ORDEREDDICTIONARYENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

