#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SKILLENTITYSPAWNERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C6070)
#define SKILLENTITYSPAWNERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C60C0)
#define SKILLENTITYSPAWNERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17C2760)

	inline static constexpr unsigned int SkillEntitySpawnerDAOFormatter_TypeDefinitionIndex = 15568;

	class SkillEntitySpawnerDAOFormatter : public ::System::IO::MonoFileType
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYSPAWNERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYSPAWNERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYSPAWNERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

