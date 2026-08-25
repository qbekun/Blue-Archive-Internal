#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::SimpleJSON { class JSONTextMode; }

#define NPA_SIMPLEJSON_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CCF740)
#define NPA_SIMPLEJSON_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CCF840)
#define NPA_SIMPLEJSON_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CCF930)
#define NPA_SIMPLEJSON_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CCF9B0)
#define NPA_SIMPLEJSON_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9CCFA50)
#define NPA_SIMPLEJSON_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x9CCFA90)
#define NPA_SIMPLEJSON_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x9CCFB30)
#define NPA_SIMPLEJSON_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x9CCFBC0)
#define NPA_SIMPLEJSON_JSONARRAY_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x9CCFC10)
#define NPA_SIMPLEJSON_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9CCFCC0)
#define NPA_SIMPLEJSON_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x9CCFD50)
#define NPA_SIMPLEJSON_JSONARRAY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9CCFFF0)
#define NPA_SIMPLEJSON_JSONARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD00C0)

namespace NPA::SimpleJSON
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 27423;

	class JSONArray : public Il2CppObject
	{
	public:
		Il2CppObject* m_List; // 0x10

		::NPA::SimpleJSON::JSONNode* get_Item(::System::Int32 arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* get_Item(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_ADD_OFFSET))(str, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Remove(::System::Int32 arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_REMOVE_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Remove(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Childs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_GET_CHILDS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::NPA::SimpleJSON::JSONTextMode* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::NPA::SimpleJSON::JSONTextMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_SERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONARRAY_.CTOR_OFFSET))(nullptr);
		}

	};
}

