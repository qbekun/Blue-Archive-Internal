#pragma once
#include "unitysdk.h"

#define ENEMYSPAWNPOINTINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14701E0)
#define ENEMYSPAWNPOINTINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x146FB70)
#define ENEMYSPAWNPOINTINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1470230)

	inline static constexpr unsigned int EnemySpawnPointInfoFormatter_TypeDefinitionIndex = 15123;

	class EnemySpawnPointInfoFormatter : public ::System::Diagnostics::Tracing::EventAttribute
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::EnemySpawnPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::EnemySpawnPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + ENEMYSPAWNPOINTINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEMYSPAWNPOINTINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::EnemySpawnPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::EnemySpawnPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + ENEMYSPAWNPOINTINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

