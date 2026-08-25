#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::SimpleJSON { class JSONLazyCreator; }
namespace NPA::SimpleJSON { class JSONTextMode; }
namespace NPA::SimpleJSON { class JSONArray; }
namespace NPA::SimpleJSON { class JSONClass; }

#define NPA_SIMPLEJSON_JSONLAZYCREATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCF800)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD0920)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_OFFSET UNITYSDK_OFFSET(0x9CD2570)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CD25E0)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CD2660)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CD2720)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CD27A0)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x9CD2870)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x9CD2930)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9CD2A00)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9CD2A20)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x9CD2A40)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9CD2A60)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x9CD2A70)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x9CD2AC0)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x9CD2B90)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x9CD2C60)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x9CD2D30)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x9CD2E00)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x9CD2ED0)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x9CD2FA0)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x9CD3070)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x9CD3140)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x9CD3210)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x9CD32E0)
#define NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x9CD3390)

namespace NPA::SimpleJSON
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 27429;

	class JSONLazyCreator : public Il2CppObject
	{
	public:
		::NPA::SimpleJSON::JSONNode* m_Node; // 0x10
		::System::String* m_Key; // 0x18

		::System::Void .ctor(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::NPA::SimpleJSON::JSONNode* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void Set(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* get_Item(::System::Int32 arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* get_Item(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean op_Equality(::NPA::SimpleJSON::JSONLazyCreator* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::NPA::SimpleJSON::JSONLazyCreator*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::SimpleJSON::JSONLazyCreator* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::NPA::SimpleJSON::JSONLazyCreator*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::NPA::SimpleJSON::JSONTextMode* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::NPA::SimpleJSON::JSONTextMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_AsInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET))(nullptr);
		}

		::System::Void set_AsInt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AsLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASLONG_OFFSET))(nullptr);
		}

		::System::Void set_AsLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASLONG_OFFSET))(arg, nullptr);
		}

		::System::Single get_AsFloat()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(nullptr);
		}

		::System::Void set_AsFloat(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Double get_AsDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(nullptr);
		}

		::System::Void set_AsDouble(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AsBool()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(nullptr);
		}

		::System::Void set_AsBool(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONArray* get_AsArray()
		{
			return (return (::NPA::SimpleJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONClass* get_AsObject()
		{
			return (return (::NPA::SimpleJSON::JSONClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(nullptr);
		}

	};
}

