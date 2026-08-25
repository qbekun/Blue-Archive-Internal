#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JTokenType; }
namespace Newtonsoft::Json::Linq { class JArray; }
namespace Newtonsoft::Json::Linq { class JsonCloneSettings; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json::Linq { class JsonMergeSettings; }

#define NEWTONSOFT_JSON_LINQ_JARRAY_WRITETOASYNC_OFFSET UNITYSDK_OFFSET(0x94F5A90)
#define NEWTONSOFT_JSON_LINQ_JARRAY_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x94F5BC0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x94F5BD0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x94F5D10)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x94F5D20)
#define NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F5D30)
#define NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F5DB0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F5E40)
#define NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F5ED0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F5EE0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x94F5F80)
#define NEWTONSOFT_JSON_LINQ_JARRAY_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x94F6000)
#define NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_OFFSET UNITYSDK_OFFSET(0x94F6060)
#define NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_OFFSET UNITYSDK_OFFSET(0x94F6070)
#define NEWTONSOFT_JSON_LINQ_JARRAY_PARSE_OFFSET UNITYSDK_OFFSET(0x94F6210)
#define NEWTONSOFT_JSON_LINQ_JARRAY_PARSE_OFFSET UNITYSDK_OFFSET(0x94F6220)
#define NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x94F6410)
#define NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x94F6430)
#define NEWTONSOFT_JSON_LINQ_JARRAY_WRITETO_OFFSET UNITYSDK_OFFSET(0x94F65B0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x94F6680)
#define NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x94F67B0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x94F68E0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x94F6900)
#define NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x94F6920)
#define NEWTONSOFT_JSON_LINQ_JARRAY_MERGEITEM_OFFSET UNITYSDK_OFFSET(0x94F6980)
#define NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x94F6A50)
#define NEWTONSOFT_JSON_LINQ_JARRAY_INSERT_OFFSET UNITYSDK_OFFSET(0x94F6A70)
#define NEWTONSOFT_JSON_LINQ_JARRAY_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x94F6AA0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x94F6AC0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x94F6B40)
#define NEWTONSOFT_JSON_LINQ_JARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x94F6B60)
#define NEWTONSOFT_JSON_LINQ_JARRAY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x94F6B80)
#define NEWTONSOFT_JSON_LINQ_JARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x94F6BA0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x94F6BC0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x94F6BD0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x94F6BF0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JArray_TypeDefinitionIndex = 32013;

	class JArray : public Il2CppObject
	{
	public:
		Il2CppObject* _values; // 0x58

		::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* arg, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_WRITETOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_LOADASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_LOADASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_ChildrenTokens()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_CHILDRENTOKENS_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JTokenType* get_Type()
		{
			return (return (::Newtonsoft::Json::Linq::JTokenType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JArray* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JArray*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JArray* arg, ::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JArray*, ::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_DEEPEQUALS_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_CLONETOKEN_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JArray*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JArray*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JArray* Parse(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Linq::JArray*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_PARSE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Linq::JArray* Parse(::System::String* str, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JArray*(*)(::System::String*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_PARSE_OFFSET))(str, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JArray* FromObject(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JArray*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JArray* FromObject(::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JArray*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_WRITETO_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Int32 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOFITEM_OFFSET))(arg, nullptr);
		}

		::System::Void MergeItem(::System::Object* arg, ::Newtonsoft::Json::Linq::JsonMergeSettings* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_MERGEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_REMOVEAT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Add(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean Remove(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDeepHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GETDEEPHASHCODE_OFFSET))(nullptr);
		}

	};
}

