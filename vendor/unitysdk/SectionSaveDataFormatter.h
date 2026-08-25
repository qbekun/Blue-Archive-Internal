#pragma once
#include "unitysdk.h"

#define SECTIONSAVEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13A0750)
#define SECTIONSAVEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13A07A0)
#define SECTIONSAVEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A0710)

	inline static constexpr unsigned int SectionSaveDataFormatter_TypeDefinitionIndex = 14451;

	class SectionSaveDataFormatter : public <>c
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::StageSaveData::SectionSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::StageSaveData::SectionSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + SECTIONSAVEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::StageSaveData::SectionSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::StageSaveData::SectionSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + SECTIONSAVEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECTIONSAVEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

