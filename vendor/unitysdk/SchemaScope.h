#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Linq { class JTokenType; }
namespace Newtonsoft::Json::Linq { class JTokenWriter; }
namespace Newtonsoft::Json::Schema { class JsonSchemaModel; }

#define SCHEMASCOPE_GET_CURRENTPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x948C420)
#define SCHEMASCOPE_SET_CURRENTPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x948C430)
#define SCHEMASCOPE_GET_ARRAYITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x948C440)
#define SCHEMASCOPE_SET_ARRAYITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x948C450)
#define SCHEMASCOPE_GET_ISUNIQUEARRAY_OFFSET UNITYSDK_OFFSET(0x948C460)
#define SCHEMASCOPE_GET_UNIQUEARRAYITEMS_OFFSET UNITYSDK_OFFSET(0x948C470)
#define SCHEMASCOPE_GET_CURRENTITEMWRITER_OFFSET UNITYSDK_OFFSET(0x948C480)
#define SCHEMASCOPE_SET_CURRENTITEMWRITER_OFFSET UNITYSDK_OFFSET(0x948C490)
#define SCHEMASCOPE_GET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x948C4A0)
#define SCHEMASCOPE_GET_REQUIREDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x948C4B0)
#define SCHEMASCOPE_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x948C4C0)
#define SCHEMASCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9488B60)
#define SCHEMASCOPE_GETREQUIREDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x948C4D0)

	inline static constexpr unsigned int SchemaScope_TypeDefinitionIndex = 31774;

	class SchemaScope : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JTokenType* _tokenType; // 0x10
		Il2CppObject* _schemas; // 0x18
		Il2CppObject* _requiredProperties; // 0x20
		::System::String* _CurrentPropertyName_k__BackingField; // 0x28
		::System::Int32 _ArrayItemCount_k__BackingField; // 0x30
		::System::Boolean _IsUniqueArray_k__BackingField; // 0x34
		Il2CppObject* _UniqueArrayItems_k__BackingField; // 0x38
		::Newtonsoft::Json::Linq::JTokenWriter* _CurrentItemWriter_k__BackingField; // 0x40

		::System::String* get_CurrentPropertyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_GET_CURRENTPROPERTYNAME_OFFSET))(nullptr);
		}

		::System::Void set_CurrentPropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_SET_CURRENTPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_ArrayItemCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_GET_ARRAYITEMCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ArrayItemCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_SET_ARRAYITEMCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUniqueArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_GET_ISUNIQUEARRAY_OFFSET))(nullptr);
		}

		Il2CppObject* get_UniqueArrayItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_GET_UNIQUEARRAYITEMS_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JTokenWriter* get_CurrentItemWriter()
		{
			return (return (::Newtonsoft::Json::Linq::JTokenWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_GET_CURRENTITEMWRITER_OFFSET))(nullptr);
		}

		::System::Void set_CurrentItemWriter(::Newtonsoft::Json::Linq::JTokenWriter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JTokenWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_SET_CURRENTITEMWRITER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Schemas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_GET_SCHEMAS_OFFSET))(nullptr);
		}

		Il2CppObject* get_RequiredProperties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_GET_REQUIREDPROPERTIES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JTokenType* get_TokenType()
		{
			return (return (::Newtonsoft::Json::Linq::JTokenType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_GET_TOKENTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JTokenType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JTokenType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetRequiredProperties(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMASCOPE_GETREQUIREDPROPERTIES_OFFSET))(arg, nullptr);
		}

	};

