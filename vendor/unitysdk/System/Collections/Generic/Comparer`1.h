#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_CREATECOMPARER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_SYSTEM.COLLECTIONS.ICOMPARER.COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Comparer`1_TypeDefinitionIndex = 25173;

	class Comparer`1 : public Il2CppObject
	{
	public:
		Il2CppObject* defaultComparer; // 0x0

		Il2CppObject* get_Default()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_GET_DEFAULT_OFFSET))(nullptr);
		}

		Il2CppObject* Create(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_CREATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateComparer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_CREATECOMPARER_OFFSET))(nullptr);
		}

		::System::Int32 Compare(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.IComparer.Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_SYSTEM.COLLECTIONS.ICOMPARER.COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

