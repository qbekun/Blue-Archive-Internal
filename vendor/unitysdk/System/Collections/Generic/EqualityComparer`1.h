#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_CREATECOMPARER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int EqualityComparer`1_TypeDefinitionIndex = 25178;

	class EqualityComparer`1 : public Il2CppObject
	{
	public:
		Il2CppObject* defaultComparer; // 0x0

		Il2CppObject* get_Default()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_GET_DEFAULT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateComparer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_CREATECOMPARER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_INDEXOF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 LastIndexOf(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_LASTINDEXOF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 System.Collections.IEqualityComparer.GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IEqualityComparer.Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_SYSTEM.COLLECTIONS.IEQUALITYCOMPARER.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

