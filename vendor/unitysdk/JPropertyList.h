#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }

#define JPROPERTYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9507EA0)
#define JPROPERTYLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9507F30)
#define JPROPERTYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x9507FA0)
#define JPROPERTYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x9507FB0)
#define JPROPERTYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9507FD0)
#define JPROPERTYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x9507FE0)
#define JPROPERTYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x9508060)
#define JPROPERTYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9508090)
#define JPROPERTYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x95080A0)
#define JPROPERTYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9507780)
#define JPROPERTYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x95080B0)
#define JPROPERTYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x95080D0)
#define JPROPERTYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x95080F0)
#define JPROPERTYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9508150)
#define JPROPERTYLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x95072E0)

	inline static constexpr unsigned int JPropertyList_TypeDefinitionIndex = 32030;

	class JPropertyList : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JToken* _token; // 0x10

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Add(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Remove(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Int32 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPROPERTYLIST_.CTOR_OFFSET))(nullptr);
		}

	};

