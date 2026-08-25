#pragma once
#include "unitysdk.h"

#define OBSTACLESAVEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x139F150)
#define OBSTACLESAVEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x139E730)
#define OBSTACLESAVEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x139F1A0)

	inline static constexpr unsigned int ObstacleSaveDataFormatter_TypeDefinitionIndex = 14447;

	class ObstacleSaveDataFormatter : public <>c
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + OBSTACLESAVEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSTACLESAVEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + OBSTACLESAVEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

