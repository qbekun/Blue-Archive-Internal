#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::SimpleJSON { class JSONTextMode; }

#define NPA_SIMPLEJSON_JSONCLASS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CD0850)
#define NPA_SIMPLEJSON_JSONCLASS_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CD0970)
#define NPA_SIMPLEJSON_JSONCLASS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CD0A20)
#define NPA_SIMPLEJSON_JSONCLASS_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CD0AB0)
#define NPA_SIMPLEJSON_JSONCLASS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9CD0B70)
#define NPA_SIMPLEJSON_JSONCLASS_ADD_OFFSET UNITYSDK_OFFSET(0x9CD0BC0)
#define NPA_SIMPLEJSON_JSONCLASS_REMOVE_OFFSET UNITYSDK_OFFSET(0x9CD0D50)
#define NPA_SIMPLEJSON_JSONCLASS_REMOVE_OFFSET UNITYSDK_OFFSET(0x9CD0E00)
#define NPA_SIMPLEJSON_JSONCLASS_REMOVE_OFFSET UNITYSDK_OFFSET(0x9CD0ED0)
#define NPA_SIMPLEJSON_JSONCLASS_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x9CD10D0)
#define NPA_SIMPLEJSON_JSONCLASS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9CD1180)
#define NPA_SIMPLEJSON_JSONCLASS_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x9CD1210)
#define NPA_SIMPLEJSON_JSONCLASS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9CD1560)
#define NPA_SIMPLEJSON_JSONCLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD17B0)

namespace NPA::SimpleJSON
{
	inline static constexpr unsigned int JSONClass_TypeDefinitionIndex = 27427;

	class JSONClass : public Il2CppObject
	{
	public:
		Il2CppObject* m_Dict; // 0x10

		::NPA::SimpleJSON::JSONNode* get_Item(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* get_Item(::System::Int32 arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_ADD_OFFSET))(str, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Remove(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_REMOVE_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Remove(::System::Int32 arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_REMOVE_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Remove(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Childs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_GET_CHILDS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::NPA::SimpleJSON::JSONTextMode* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::NPA::SimpleJSON::JSONTextMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_WRITETOSTRINGBUILDER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_SERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONCLASS_.CTOR_OFFSET))(nullptr);
		}

	};
}

