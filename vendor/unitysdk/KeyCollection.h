#pragma once
#include "unitysdk.h"

#define KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int KeyCollection_TypeDefinitionIndex = 3555;

	class KeyCollection : public Il2CppObject
	{
	public:
		Il2CppObject* dictionary; // 0x0

		::System::Boolean System.Collections.Generic.ICollection_TKey_.Contains(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_TKey_.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_TKey_.get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_TKey_.Remove(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_COPYTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_TKey_.Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TKEY_.ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYCOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

	};

