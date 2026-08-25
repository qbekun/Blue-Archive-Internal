#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BattleItemEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BATTLEITEMENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1790690)
#define BATTLEITEMENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1790650)
#define BATTLEITEMENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17906E0)

	inline static constexpr unsigned int BattleItemEntityDAOFormatter_TypeDefinitionIndex = 15546;

	class BattleItemEntityDAOFormatter : public ::System::Reflection::Emit::ParameterBuilder
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BattleItemEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BattleItemEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

