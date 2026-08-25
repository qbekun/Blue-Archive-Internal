#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ObjectEqualityComparer`1_TypeDefinitionIndex = 25181;

	class ObjectEqualityComparer`1 : public ::MX::GameLogic::DBModel::CraftProcessCompleteType
	{
	public:
		::System::Boolean Equals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_INDEXOF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 LastIndexOf(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_LASTINDEXOF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_OBJECTEQUALITYCOMPARER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

