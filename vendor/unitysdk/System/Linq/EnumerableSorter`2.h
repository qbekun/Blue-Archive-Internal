#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_ENUMERABLESORTER`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ENUMERABLESORTER`2_COMPUTEKEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ENUMERABLESORTER`2_COMPAREKEYS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int EnumerableSorter`2_TypeDefinitionIndex = 32970;

	class EnumerableSorter`2 : public ::MX::GameLogic::Factory::ItemDBFactory
	{
	public:
		Il2CppObject* keySelector; // 0x0
		Il2CppObject* comparer; // 0x0
		::System::Boolean descending; // 0x0
		Il2CppObject* next; // 0x0
		::Il2CppArray<::System::Object*>* keys; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLESORTER`2_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ComputeKeys(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLESORTER`2_COMPUTEKEYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareKeys(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLESORTER`2_COMPAREKEYS_OFFSET))(arg, arg, nullptr);
		}

	};
}

