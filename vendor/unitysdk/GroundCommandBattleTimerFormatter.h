#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDBATTLETIMERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C1D00)
#define GROUNDCOMMANDBATTLETIMERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C0730)
#define GROUNDCOMMANDBATTLETIMERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C1D50)

	inline static constexpr unsigned int GroundCommandBattleTimerFormatter_TypeDefinitionIndex = 14139;

	class GroundCommandBattleTimerFormatter : public IListWrapper
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandBattleTimer&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandBattleTimer&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLETIMERFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLETIMERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandBattleTimer&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandBattleTimer&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLETIMERFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

