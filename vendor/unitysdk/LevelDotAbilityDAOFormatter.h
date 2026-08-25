#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class LevelDotAbilityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define LEVELDOTABILITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DE760)
#define LEVELDOTABILITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16DE7C0)
#define LEVELDOTABILITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DE800)

	inline static constexpr unsigned int LevelDotAbilityDAOFormatter_TypeDefinitionIndex = 15393;

	class LevelDotAbilityDAOFormatter : public ::System::Buffers::ReadOnlySequenceDebugView`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LevelDotAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LevelDotAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LEVELDOTABILITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELDOTABILITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LevelDotAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LevelDotAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LEVELDOTABILITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

