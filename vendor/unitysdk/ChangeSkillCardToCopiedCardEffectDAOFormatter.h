#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ChangeSkillCardToCopiedCardEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CHANGESKILLCARDTOCOPIEDCARDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x167A7E0)
#define CHANGESKILLCARDTOCOPIEDCARDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x167A830)
#define CHANGESKILLCARDTOCOPIEDCARDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1676EF0)

	inline static constexpr unsigned int ChangeSkillCardToCopiedCardEffectDAOFormatter_TypeDefinitionIndex = 15355;

	class ChangeSkillCardToCopiedCardEffectDAOFormatter : public ::System::Globalization::TimeSpanFormat
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESKILLCARDTOCOPIEDCARDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeSkillCardToCopiedCardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESKILLCARDTOCOPIEDCARDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESKILLCARDTOCOPIEDCARDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

