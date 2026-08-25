#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDACTIVATEMOVINGAREAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B7690)
#define GROUNDCOMMANDACTIVATEMOVINGAREAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12B3500)
#define GROUNDCOMMANDACTIVATEMOVINGAREAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B76E0)

	inline static constexpr unsigned int GroundCommandActivateMovingAreaFormatter_TypeDefinitionIndex = 14129;

	class GroundCommandActivateMovingAreaFormatter : public StackEnumerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandActivateMovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandActivateMovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEMOVINGAREAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEMOVINGAREAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandActivateMovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandActivateMovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEMOVINGAREAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

