#pragma once
#include "unitysdk.h"

#define BLOCKCREATEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E5DD0)

	inline static constexpr unsigned int BlockCreatedEventArgs_TypeDefinitionIndex = 37213;

	class BlockCreatedEventArgs : public Il2CppObject
	{
	public:
		::System::Int64 _SmallPoolInUse_k__BackingField; // 0x10

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKCREATEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};

