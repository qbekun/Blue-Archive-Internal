#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDBATTLEADDITIONALUISETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C04D0)
#define GROUNDCOMMANDBATTLEADDITIONALUISETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C0520)
#define GROUNDCOMMANDBATTLEADDITIONALUISETFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12BE6B0)

	inline static constexpr unsigned int GroundCommandBattleAdditionalUISetFormatter_TypeDefinitionIndex = 14137;

	class GroundCommandBattleAdditionalUISetFormatter : public ::System::Collections::BitArray
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandBattleAdditionalUISet&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandBattleAdditionalUISet&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUISETFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandBattleAdditionalUISet&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandBattleAdditionalUISet&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUISETFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUISETFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

