#pragma once
#include "unitysdk.h"

#define KEYVALUEPAIRCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYVALUEPAIRCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int KeyValuePairComparer_TypeDefinitionIndex = 29602;

	class KeyValuePairComparer : public CRASH_RECEIVE_SERVER_REGION
	{
	public:
		Il2CppObject* keyComparer; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYVALUEPAIRCOMPARER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYVALUEPAIRCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};

