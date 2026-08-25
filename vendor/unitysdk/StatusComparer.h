#pragma once
#include "unitysdk.h"

#define STATUSCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1177090)
#define STATUSCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x117D680)

	inline static constexpr unsigned int StatusComparer_TypeDefinitionIndex = 13230;

	class StatusComparer : public CRASH_BEHAVIOR
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSCOMPARER_COMPARE_OFFSET))(arg, arg2, nullptr);
		}

	};

