#pragma once
#include "unitysdk.h"

#define MULTIPARTCHARACTERSPAWNPOINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C7F10)
#define MULTIPARTCHARACTERSPAWNPOINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C8220)
#define MULTIPARTCHARACTERSPAWNPOINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C8270)

	inline static constexpr unsigned int MultiPartCharacterSpawnPointFormatter_TypeDefinitionIndex = 13353;

	class MultiPartCharacterSpawnPointFormatter : public ::System::IO::PathInternal
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIPARTCHARACTERSPAWNPOINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIPARTCHARACTERSPAWNPOINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIPARTCHARACTERSPAWNPOINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

