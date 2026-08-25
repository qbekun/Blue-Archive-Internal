#pragma once
#include "unitysdk.h"

#define DEFAULTCOMPARER`1_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int DefaultComparer`1_TypeDefinitionIndex = 28438;

	class DefaultComparer`1 : public Il2CppObject
	{
	public:
		::System::Int32 Compare(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTCOMPARER`1_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};

