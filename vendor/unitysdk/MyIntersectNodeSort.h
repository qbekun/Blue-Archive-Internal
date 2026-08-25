#pragma once
#include "unitysdk.h"

#define MYINTERSECTNODESORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DB30)
#define MYINTERSECTNODESORT_COMPARE_OFFSET UNITYSDK_OFFSET(0x286DB40)

	inline static constexpr unsigned int MyIntersectNodeSort_TypeDefinitionIndex = 34387;

	class MyIntersectNodeSort : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MYINTERSECTNODESORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(IntersectNode* arg, IntersectNode* arg)
		{
			return (return (::System::Int32(*)(IntersectNode*, IntersectNode*, ::PVOID))((::PBYTE)hIl2Cpp + MYINTERSECTNODESORT_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};

