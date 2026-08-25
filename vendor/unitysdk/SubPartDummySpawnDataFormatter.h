#pragma once
#include "unitysdk.h"

#define SUBPARTDUMMYSPAWNDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11CB9E0)
#define SUBPARTDUMMYSPAWNDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CE050)
#define SUBPARTDUMMYSPAWNDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CE0A0)

	inline static constexpr unsigned int SubPartDummySpawnDataFormatter_TypeDefinitionIndex = 13363;

	class SubPartDummySpawnDataFormatter : public __StaticArrayInitTypeSize=15
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYSPAWNDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SubPartDummySpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SubPartDummySpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYSPAWNDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SubPartDummySpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SubPartDummySpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYSPAWNDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

