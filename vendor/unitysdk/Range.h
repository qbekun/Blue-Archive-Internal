#pragma once
#include "unitysdk.h"

#define RANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E374E0)

	inline static constexpr unsigned int Range_TypeDefinitionIndex = 36998;

	class Range : public Il2CppObject
	{
	public:
		::System::Int32 Pointer; // 0x10
		::System::Int32 Items; // 0x18
		AllocatorHandle* Allocator; // 0x1C

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANGE_DISPOSE_OFFSET))(nullptr);
		}

	};

