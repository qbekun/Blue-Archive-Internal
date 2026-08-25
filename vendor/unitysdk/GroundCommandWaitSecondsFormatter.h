#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDWAITSECONDSFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x132C7E0)
#define GROUNDCOMMANDWAITSECONDSFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x132BE80)
#define GROUNDCOMMANDWAITSECONDSFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x132C830)

	inline static constexpr unsigned int GroundCommandWaitSecondsFormatter_TypeDefinitionIndex = 14257;

	class GroundCommandWaitSecondsFormatter : public Enumerator
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandWaitSeconds&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandWaitSeconds&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAITSECONDSFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAITSECONDSFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandWaitSeconds&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandWaitSeconds&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAITSECONDSFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

