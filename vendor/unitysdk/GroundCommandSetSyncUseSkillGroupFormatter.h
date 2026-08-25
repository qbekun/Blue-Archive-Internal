#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETSYNCUSESKILLGROUPFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x131AF40)
#define GROUNDCOMMANDSETSYNCUSESKILLGROUPFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x131AF80)
#define GROUNDCOMMANDSETSYNCUSESKILLGROUPFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x131AFE0)

	inline static constexpr unsigned int GroundCommandSetSyncUseSkillGroupFormatter_TypeDefinitionIndex = 14235;

	class GroundCommandSetSyncUseSkillGroupFormatter : public ::System::Collections::Generic::IDictionary`2
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSYNCUSESKILLGROUPFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetSyncUseSkillGroup&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetSyncUseSkillGroup&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSYNCUSESKILLGROUPFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetSyncUseSkillGroup&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetSyncUseSkillGroup&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSYNCUSESKILLGROUPFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

