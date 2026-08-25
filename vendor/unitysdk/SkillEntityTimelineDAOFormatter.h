#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SkillEntityTimelineDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SKILLENTITYTIMELINEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D76B0)
#define SKILLENTITYTIMELINEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D7660)
#define SKILLENTITYTIMELINEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D7700)

	inline static constexpr unsigned int SkillEntityTimelineDAOFormatter_TypeDefinitionIndex = 15587;

	class SkillEntityTimelineDAOFormatter : public ::System::IO::MonoIOError
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillEntityTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillEntityTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYTIMELINEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYTIMELINEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillEntityTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillEntityTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYTIMELINEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

