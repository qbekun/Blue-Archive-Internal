#pragma once
#include "unitysdk.h"

#define SPAWNMOVEPOINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CEC20)
#define SPAWNMOVEPOINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CEC70)
#define SPAWNMOVEPOINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11CE9F0)

	inline static constexpr unsigned int SpawnMovePointFormatter_TypeDefinitionIndex = 13365;

	class SpawnMovePointFormatter : public ::System::IO::MonoLinqHelper
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SpawnMovePoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SpawnMovePoint&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNMOVEPOINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SpawnMovePoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SpawnMovePoint&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNMOVEPOINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNMOVEPOINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

