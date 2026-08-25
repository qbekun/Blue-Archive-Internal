#pragma once
#include "unitysdk.h"

#define FORMATIONSAVEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x139FAF0)
#define FORMATIONSAVEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x139F3B0)
#define FORMATIONSAVEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x139FB40)

	inline static constexpr unsigned int FormationSaveDataFormatter_TypeDefinitionIndex = 14449;

	class FormationSaveDataFormatter : public ::System::Collections::Queue
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::StageSaveData::FormationSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::StageSaveData::FormationSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONSAVEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONSAVEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::StageSaveData::FormationSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::StageSaveData::FormationSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONSAVEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

