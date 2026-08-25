#pragma once
#include "unitysdk.h"

#define BRICKCHUNKALLOC_FLATTENINDEX_OFFSET UNITYSDK_OFFSET(0x9F7FF30)

	inline static constexpr unsigned int BrickChunkAlloc_TypeDefinitionIndex = 33786;

	class BrickChunkAlloc : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18

		::System::Int32 flattenIndex(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BRICKCHUNKALLOC_FLATTENINDEX_OFFSET))(arg, arg, nullptr);
		}

	};

