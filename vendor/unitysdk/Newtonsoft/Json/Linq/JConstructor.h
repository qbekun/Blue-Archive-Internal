#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonMergeSettings; }
namespace Newtonsoft::Json::Linq { class JTokenType; }
namespace Newtonsoft::Json::Linq { class JConstructor; }
namespace Newtonsoft::Json::Linq { class JsonCloneSettings; }

#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_WRITETOASYNC_OFFSET UNITYSDK_OFFSET(0x94F77E0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x94F7910)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x94F7920)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x94F7A60)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x94F7A70)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_MERGEITEM_OFFSET UNITYSDK_OFFSET(0x94F7AD0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x94F8AF0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_SET_NAME_OFFSET UNITYSDK_OFFSET(0x94F8B00)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x94F8B10)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F8B20)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F8C20)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F9090)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F9140)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F9180)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F91C0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x94F9330)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x94F9690)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_WRITETO_OFFSET UNITYSDK_OFFSET(0x94F96F0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x94F97D0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x94F9900)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x94F9A30)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET UNITYSDK_OFFSET(0x94F9D70)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET UNITYSDK_OFFSET(0x94F9D80)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JConstructor_TypeDefinitionIndex = 32016;

	class JConstructor : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x58
		Il2CppObject* _values; // 0x60

		::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* arg, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_WRITETOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOADASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOADASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_ChildrenTokens()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_CHILDRENTOKENS_OFFSET))(nullptr);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_INDEXOFITEM_OFFSET))(arg, nullptr);
		}

		::System::Void MergeItem(::System::Object* arg, ::Newtonsoft::Json::Linq::JsonMergeSettings* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_MERGEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_SET_NAME_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Linq::JTokenType* get_Type()
		{
			return (return (::Newtonsoft::Json::Linq::JTokenType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JConstructor* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JConstructor*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JConstructor* arg, ::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JConstructor*, ::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_DEEPEQUALS_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_CLONETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_WRITETO_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDeepHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GETDEEPHASHCODE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JConstructor*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JConstructor*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET))(arg, arg, nullptr);
		}

	};
}

