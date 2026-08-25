#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int IOrderedDictionary_TypeDefinitionIndex = 23302;

	class IOrderedDictionary : public Il2CppObject
	{
	public:
		::System::Void set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_INSERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IORDEREDDICTIONARY_REMOVEAT_OFFSET))(arg, nullptr);
		}

	};
}

