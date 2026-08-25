#pragma once
#include "unitysdk.h"

#define RANDOMSPAWNPOINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C6EB0)
#define RANDOMSPAWNPOINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C6EF0)
#define RANDOMSPAWNPOINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C6F40)

	inline static constexpr unsigned int RandomSpawnPointFormatter_TypeDefinitionIndex = 13351;

	class RandomSpawnPointFormatter : public ::System::IO::FileSystemInfo
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMSPAWNPOINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::RandomSpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::RandomSpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + RANDOMSPAWNPOINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::RandomSpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::RandomSpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + RANDOMSPAWNPOINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

