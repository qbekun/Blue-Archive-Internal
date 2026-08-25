#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONCHARACTERHPCHANGEDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x134C520)
#define GROUNDCONDITIONCHARACTERHPCHANGEDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x134DD10)
#define GROUNDCONDITIONCHARACTERHPCHANGEDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x134DD60)

	inline static constexpr unsigned int GroundConditionCharacterHPChangedFormatter_TypeDefinitionIndex = 14320;

	class GroundConditionCharacterHPChangedFormatter : public ::System::Collections::Generic::Queue`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERHPCHANGEDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionCharacterHPChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionCharacterHPChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERHPCHANGEDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionCharacterHPChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionCharacterHPChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERHPCHANGEDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

