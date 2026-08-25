#pragma once
#include "unitysdk.h"

#define VALUECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ValueCollection_TypeDefinitionIndex = 3556;

	class ValueCollection : public Il2CppObject
	{
	public:
		Il2CppObject* values; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_TValue_.Contains(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_TValue_.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.CLEAR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_COPYTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_TValue_.get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_TValue_.Remove(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_TValue_.Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TVALUE_.ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

