#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerTimelineDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SKILLENTITYSPAWNERTIMELINEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D8600)
#define SKILLENTITYSPAWNERTIMELINEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DAD00)
#define SKILLENTITYSPAWNERTIMELINEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DAD50)

	inline static constexpr unsigned int SkillEntitySpawnerTimelineDAOFormatter_TypeDefinitionIndex = 15591;

	class SkillEntitySpawnerTimelineDAOFormatter : public ::System::IO::MonoIO
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYSPAWNERTIMELINEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYSPAWNERTIMELINEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYSPAWNERTIMELINEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

