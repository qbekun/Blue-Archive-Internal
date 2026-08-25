#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDBATTLEADDITIONALUIACTIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12B95E0)
#define GROUNDCOMMANDBATTLEADDITIONALUIACTIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12BCB70)
#define GROUNDCOMMANDBATTLEADDITIONALUIACTIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12BCBC0)

	inline static constexpr unsigned int GroundCommandBattleAdditionalUIActionFormatter_TypeDefinitionIndex = 14135;

	class GroundCommandBattleAdditionalUIActionFormatter : public BitArrayEnumeratorSimple
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUIACTIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandBattleAdditionalUIAction&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandBattleAdditionalUIAction&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUIACTIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandBattleAdditionalUIAction&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandBattleAdditionalUIAction&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUIACTIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

