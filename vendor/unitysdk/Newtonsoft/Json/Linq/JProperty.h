#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace Newtonsoft::Json::Linq { class JsonCloneSettings; }
namespace Newtonsoft::Json::Linq { class JsonMergeSettings; }
namespace Newtonsoft::Json::Linq { class JTokenType; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETOASYNC_OFFSET UNITYSDK_OFFSET(0x9506E30)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETOASYNC_OFFSET UNITYSDK_OFFSET(0x9506F90)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITEVALUEASYNC_OFFSET UNITYSDK_OFFSET(0x9506F30)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x95070E0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x95070F0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x9507230)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9507240)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x94FE9E0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9503060)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9507250)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x95072F0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GETITEM_OFFSET UNITYSDK_OFFSET(0x9507390)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_SETITEM_OFFSET UNITYSDK_OFFSET(0x9507400)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x95075C0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEMAT_OFFSET UNITYSDK_OFFSET(0x9507680)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x9507740)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x9507790)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_CONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x95078B0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_MERGEITEM_OFFSET UNITYSDK_OFFSET(0x95078D0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x95079D0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x9507A90)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x9507B20)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9507B80)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94FEE50)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9507B90)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9504210)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETO_OFFSET UNITYSDK_OFFSET(0x9507BA0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x9507C30)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_LOAD_OFFSET UNITYSDK_OFFSET(0x9507CA0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_LOAD_OFFSET UNITYSDK_OFFSET(0x9507CB0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JProperty_TypeDefinitionIndex = 32033;

	class JProperty : public Il2CppObject
	{
	public:
		JPropertyList* _content; // 0x58
		::System::String* _name; // 0x60

		::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* arg, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteToAsync(::System::Threading::Tasks::Task* arg, ::Newtonsoft::Json::JsonWriter* arg, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETOASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteValueAsync(::Newtonsoft::Json::JsonWriter* arg, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITEVALUEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_LOADASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_LOADASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_ChildrenTokens()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_CHILDRENTOKENS_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_NAME_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Value()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JProperty* arg, ::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* GetItem(::System::Int32 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GETITEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetItem(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_SETITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RemoveItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveItemAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEMAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_INDEXOFITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean InsertItem(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_INSERTITEM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ContainsItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_CONTAINSITEM_OFFSET))(arg, nullptr);
		}

		::System::Void MergeItem(::System::Object* arg, ::Newtonsoft::Json::Linq::JsonMergeSettings* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_MERGEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_CLEARITEMS_OFFSET))(nullptr);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_DEEPEQUALS_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_CLONETOKEN_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JTokenType* get_Type()
		{
			return (return (::Newtonsoft::Json::Linq::JTokenType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDeepHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GETDEEPHASHCODE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JProperty*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_LOAD_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JProperty*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_LOAD_OFFSET))(arg, arg, nullptr);
		}

	};
}

