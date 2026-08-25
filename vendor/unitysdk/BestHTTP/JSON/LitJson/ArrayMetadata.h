#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_JSON_LITJSON_ARRAYMETADATA_SET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x8A6660)
#define BESTHTTP_JSON_LITJSON_ARRAYMETADATA_SET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x8A6670)
#define BESTHTTP_JSON_LITJSON_ARRAYMETADATA_GET_ISLIST_OFFSET UNITYSDK_OFFSET(0x8A6680)
#define BESTHTTP_JSON_LITJSON_ARRAYMETADATA_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x8A6690)
#define BESTHTTP_JSON_LITJSON_ARRAYMETADATA_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x8A66A0)
#define BESTHTTP_JSON_LITJSON_ARRAYMETADATA_SET_ISLIST_OFFSET UNITYSDK_OFFSET(0x8A6730)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int ArrayMetadata_TypeDefinitionIndex = 23308;

	class ArrayMetadata : public Il2CppObject
	{
	public:
		::System::Type* element_type; // 0x10
		::System::Boolean is_array; // 0x18
		::System::Boolean is_list; // 0x19

		::System::Void set_ElementType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ARRAYMETADATA_SET_ELEMENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsArray(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ARRAYMETADATA_SET_ISARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ARRAYMETADATA_GET_ISLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ARRAYMETADATA_GET_ISARRAY_OFFSET))(nullptr);
		}

		::System::Type* get_ElementType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ARRAYMETADATA_GET_ELEMENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_IsList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_ARRAYMETADATA_SET_ISLIST_OFFSET))(arg, nullptr);
		}

	};
}

