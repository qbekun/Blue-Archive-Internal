#pragma once
#include "unitysdk.h"

#define SPAWNPOINTBASEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C4070)
#define SPAWNPOINTBASEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C3FF0)
#define SPAWNPOINTBASEFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11C4490)
#define SPAWNPOINTBASEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C4620)

	inline static constexpr unsigned int SpawnPointBaseFormatter_TypeDefinitionIndex = 13347;

	class SpawnPointBaseFormatter : public ::System::IO::Enumeration::FileSystemEntry
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SpawnPointBase&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SpawnPointBase&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTBASEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTBASEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTBASEFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SpawnPointBase&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SpawnPointBase&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTBASEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

