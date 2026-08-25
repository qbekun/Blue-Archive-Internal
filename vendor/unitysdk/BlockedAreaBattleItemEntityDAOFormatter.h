#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BlockedAreaBattleItemEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BLOCKEDAREABATTLEITEMENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x179C820)
#define BLOCKEDAREABATTLEITEMENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1798FA0)
#define BLOCKEDAREABATTLEITEMENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x179C870)

	inline static constexpr unsigned int BlockedAreaBattleItemEntityDAOFormatter_TypeDefinitionIndex = 15552;

	class BlockedAreaBattleItemEntityDAOFormatter : public ::System::Globalization::DateTimeStyles
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREABATTLEITEMENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREABATTLEITEMENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREABATTLEITEMENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

