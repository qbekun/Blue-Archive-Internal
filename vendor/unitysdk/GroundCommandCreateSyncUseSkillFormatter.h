#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCREATESYNCUSESKILLFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D16E0)
#define GROUNDCOMMANDCREATESYNCUSESKILLFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D17C0)
#define GROUNDCOMMANDCREATESYNCUSESKILLFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D1810)

	inline static constexpr unsigned int GroundCommandCreateSyncUseSkillFormatter_TypeDefinitionIndex = 14155;

	class GroundCommandCreateSyncUseSkillFormatter : public ::System::Collections::Hashtable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATESYNCUSESKILLFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCreateSyncUseSkill&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCreateSyncUseSkill&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATESYNCUSESKILLFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCreateSyncUseSkill&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCreateSyncUseSkill&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATESYNCUSESKILLFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

