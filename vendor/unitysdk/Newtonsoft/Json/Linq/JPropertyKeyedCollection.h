#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JToken&; }
namespace Newtonsoft::Json::Linq { class JPropertyKeyedCollection; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9501DD0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ADDKEY_OFFSET UNITYSDK_OFFSET(0x9509120)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CHANGEITEMKEY_OFFSET UNITYSDK_OFFSET(0x9509240)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x9509600)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9504420)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x9509480)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ENSUREDICTIONARY_OFFSET UNITYSDK_OFFSET(0x9509180)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x9509540)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x9509660)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9509760)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x9509840)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x95095B0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_SETITEM_OFFSET UNITYSDK_OFFSET(0x95099A0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9509CB0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x95028A0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x9504530)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9509D80)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INDEXOFREFERENCE_OFFSET UNITYSDK_OFFSET(0x9502520)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_COMPARE_OFFSET UNITYSDK_OFFSET(0x9502090)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9509DD0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JPropertyKeyedCollection_TypeDefinitionIndex = 32035;

	class JPropertyKeyedCollection : public <>c__DisplayClass34_0
	{
	public:
		Il2CppObject* Comparer; // 0x0
		Il2CppObject* _dictionary; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddKey(::System::String* str, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::String*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ADDKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Void ChangeItemKey(::Newtonsoft::Json::Linq::JToken* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CHANGEITEMKEY_OFFSET))(arg, str, nullptr);
		}

		::System::Void ClearItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CLEARITEMS_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINS_OFFSET))(str, nullptr);
		}

		::System::Boolean ContainsItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINSITEM_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ENSUREDICTIONARY_OFFSET))(nullptr);
		}

		::System::String* GetKeyForItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Void InsertItem(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INSERTITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Remove(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Void RemoveItem(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEKEY_OFFSET))(str, nullptr);
		}

		::System::Void SetItem(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_SETITEM_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::Newtonsoft::Json::Linq::JToken&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Newtonsoft::Json::Linq::JToken&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* get_Keys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_KEYS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Int32 IndexOfReference(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INDEXOFREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Compare(::Newtonsoft::Json::Linq::JPropertyKeyedCollection* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JPropertyKeyedCollection*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_COMPARE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

