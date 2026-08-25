#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONBATTLESTARTEDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x134C190)
#define GROUNDCONDITIONBATTLESTARTEDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x134C1E0)
#define GROUNDCONDITIONBATTLESTARTEDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x134B670)

	inline static constexpr unsigned int GroundConditionBattleStartedFormatter_TypeDefinitionIndex = 14318;

	class GroundConditionBattleStartedFormatter : public Enumerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionBattleStarted&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionBattleStarted&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONBATTLESTARTEDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionBattleStarted&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionBattleStarted&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONBATTLESTARTEDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONBATTLESTARTEDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

