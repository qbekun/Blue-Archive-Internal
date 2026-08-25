#pragma once
#include "unitysdk.h"

#define SPAWNDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C9C60)
#define SPAWNDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CAE90)
#define SPAWNDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CAEE0)

	inline static constexpr unsigned int SpawnDataFormatter_TypeDefinitionIndex = 13359;

	class SpawnDataFormatter : public ::System::IO::CStreamWriter
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

