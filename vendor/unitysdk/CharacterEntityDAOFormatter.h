#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CharacterEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CHARACTERENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x179EC80)
#define CHARACTERENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17A26D0)
#define CHARACTERENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17A2720)

	inline static constexpr unsigned int CharacterEntityDAOFormatter_TypeDefinitionIndex = 15554;

	class CharacterEntityDAOFormatter : public TimeSpanTokenizer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CharacterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CharacterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CharacterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CharacterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

