#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDUSESKILLFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x132AB90)
#define GROUNDCOMMANDUSESKILLFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1329270)
#define GROUNDCOMMANDUSESKILLFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x132ABE0)

	inline static constexpr unsigned int GroundCommandUseSkillFormatter_TypeDefinitionIndex = 14253;

	class GroundCommandUseSkillFormatter : public ::System::Collections::Generic::KeyValuePair`2
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandUseSkill&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandUseSkill&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDUSESKILLFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDUSESKILLFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandUseSkill&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandUseSkill&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDUSESKILLFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

