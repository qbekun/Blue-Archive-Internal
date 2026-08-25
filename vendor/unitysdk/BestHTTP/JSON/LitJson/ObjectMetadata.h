#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_JSON_LITJSON_OBJECTMETADATA_SET_ISDICTIONARY_OFFSET UNITYSDK_OFFSET(0x8A6740)
#define BESTHTTP_JSON_LITJSON_OBJECTMETADATA_SET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x8A6750)
#define BESTHTTP_JSON_LITJSON_OBJECTMETADATA_GET_ISDICTIONARY_OFFSET UNITYSDK_OFFSET(0x8A6760)
#define BESTHTTP_JSON_LITJSON_OBJECTMETADATA_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x8A6770)
#define BESTHTTP_JSON_LITJSON_OBJECTMETADATA_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x8A6800)
#define BESTHTTP_JSON_LITJSON_OBJECTMETADATA_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x8A6810)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int ObjectMetadata_TypeDefinitionIndex = 23309;

	class ObjectMetadata : public Il2CppObject
	{
	public:
		::System::Type* element_type; // 0x10
		::System::Boolean is_dictionary; // 0x18
		Il2CppObject* properties; // 0x20

		::System::Void set_IsDictionary(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_OBJECTMETADATA_SET_ISDICTIONARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ElementType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_OBJECTMETADATA_SET_ELEMENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDictionary()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_OBJECTMETADATA_GET_ISDICTIONARY_OFFSET))(nullptr);
		}

		::System::Type* get_ElementType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_OBJECTMETADATA_GET_ELEMENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_Properties(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_OBJECTMETADATA_SET_PROPERTIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Properties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_OBJECTMETADATA_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

