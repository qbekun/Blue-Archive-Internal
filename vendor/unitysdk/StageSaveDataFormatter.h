#pragma once
#include "unitysdk.h"

#define STAGESAVEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13A2CD0)
#define STAGESAVEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13A2D20)
#define STAGESAVEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A2C90)

	inline static constexpr unsigned int StageSaveDataFormatter_TypeDefinitionIndex = 14455;

	class StageSaveDataFormatter : public <>c
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::StageSaveData::StageSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::StageSaveData::StageSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESAVEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::StageSaveData::StageSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::StageSaveData::StageSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + STAGESAVEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGESAVEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

