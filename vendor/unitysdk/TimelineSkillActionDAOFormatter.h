#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TimelineSkillActionDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define TIMELINESKILLACTIONDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E9950)
#define TIMELINESKILLACTIONDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17E5EE0)
#define TIMELINESKILLACTIONDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E99A0)

	inline static constexpr unsigned int TimelineSkillActionDAOFormatter_TypeDefinitionIndex = 15605;

	class TimelineSkillActionDAOFormatter : public __StaticArrayInitTypeSize=336
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINESKILLACTIONDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINESKILLACTIONDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINESKILLACTIONDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

