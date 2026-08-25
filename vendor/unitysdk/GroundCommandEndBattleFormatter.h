#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDENDBATTLEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D6540)
#define GROUNDCOMMANDENDBATTLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D6580)
#define GROUNDCOMMANDENDBATTLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D65D0)

	inline static constexpr unsigned int GroundCommandEndBattleFormatter_TypeDefinitionIndex = 14161;

	class GroundCommandEndBattleFormatter : public Segment
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDENDBATTLEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandEndBattle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandEndBattle&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDENDBATTLEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandEndBattle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandEndBattle&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDENDBATTLEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

