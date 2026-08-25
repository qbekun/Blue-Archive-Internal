#pragma once
#include "unitysdk.h"

#define BLOCKANDOFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x90EC750)

	inline static constexpr unsigned int BlockAndOffset_TypeDefinitionIndex = 37222;

	class BlockAndOffset : public Il2CppObject
	{
	public:
		::System::Int32 Block; // 0x10
		::System::Int32 Offset; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKANDOFFSET_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

