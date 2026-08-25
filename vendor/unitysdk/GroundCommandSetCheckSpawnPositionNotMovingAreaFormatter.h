#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13015C0)
#define GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13005E0)
#define GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1301610)

	inline static constexpr unsigned int GroundCommandSetCheckSpawnPositionNotMovingAreaFormatter_TypeDefinitionIndex = 14210;

	class GroundCommandSetCheckSpawnPositionNotMovingAreaFormatter : public Enumerator
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetCheckSpawnPositionNotMovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetCheckSpawnPositionNotMovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetCheckSpawnPositionNotMovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetCheckSpawnPositionNotMovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

