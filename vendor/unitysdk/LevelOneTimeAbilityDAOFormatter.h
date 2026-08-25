#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class LevelOneTimeAbilityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define LEVELONETIMEABILITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E0470)
#define LEVELONETIMEABILITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E04C0)
#define LEVELONETIMEABILITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16DECC0)

	inline static constexpr unsigned int LevelOneTimeAbilityDAOFormatter_TypeDefinitionIndex = 15395;

	class LevelOneTimeAbilityDAOFormatter : public ::System::Buffers::ReadOnlySequenceSegment`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LEVELONETIMEABILITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LEVELONETIMEABILITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELONETIMEABILITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

