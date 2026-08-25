#pragma once
#include "unitysdk.h"

#define CACHE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Cache`1_TypeDefinitionIndex = 35458;

	class Cache`1 : public Il2CppObject
	{
	public:
		::System::Boolean IsReferenceOrNullable; // 0x0
		::System::Boolean IsUnmanagedSZArray; // 0x0
		::System::Int32 UnmanagedSZArrayElementSize; // 0x0
		::System::Boolean IsFixedSizeMemoryPackable; // 0x0
		::System::Int32 MemoryPackableFixedSize; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHE`1_.CCTOR_OFFSET))(nullptr);
		}

	};

