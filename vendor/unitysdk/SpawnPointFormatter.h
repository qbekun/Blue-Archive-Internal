#pragma once
#include "unitysdk.h"

#define SPAWNPOINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C4D80)
#define SPAWNPOINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C5AC0)
#define SPAWNPOINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C5B10)

	inline static constexpr unsigned int SpawnPointFormatter_TypeDefinitionIndex = 13349;

	class SpawnPointFormatter : public ::System::IO::Enumeration::FileSystemEnumerator`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

