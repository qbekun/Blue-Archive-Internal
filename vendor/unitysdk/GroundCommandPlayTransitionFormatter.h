#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDPLAYTRANSITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x217B5C0)
#define GROUNDCOMMANDPLAYTRANSITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x217B610)
#define GROUNDCOMMANDPLAYTRANSITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2179160)

	inline static constexpr unsigned int GroundCommandPlayTransitionFormatter_TypeDefinitionIndex = 4038;

	class GroundCommandPlayTransitionFormatter : public KeyCollection
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandPlayTransition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandPlayTransition&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandPlayTransition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandPlayTransition&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

