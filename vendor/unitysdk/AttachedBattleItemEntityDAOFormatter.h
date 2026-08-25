#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class AttachedBattleItemEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define ATTACHEDBATTLEITEMENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1796A60)
#define ATTACHEDBATTLEITEMENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1796A20)
#define ATTACHEDBATTLEITEMENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1796AB0)

	inline static constexpr unsigned int AttachedBattleItemEntityDAOFormatter_TypeDefinitionIndex = 15550;

	class AttachedBattleItemEntityDAOFormatter : public ::System::Reflection::Emit::EnumBuilder
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHEDBATTLEITEMENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHEDBATTLEITEMENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHEDBATTLEITEMENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

