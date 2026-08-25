#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ExSkillEntityTimelineDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define EXSKILLENTITYTIMELINEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D81F0)
#define EXSKILLENTITYTIMELINEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D8230)
#define EXSKILLENTITYTIMELINEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D8280)

	inline static constexpr unsigned int ExSkillEntityTimelineDAOFormatter_TypeDefinitionIndex = 15589;

	class ExSkillEntityTimelineDAOFormatter : public ::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLENTITYTIMELINEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLENTITYTIMELINEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLENTITYTIMELINEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

