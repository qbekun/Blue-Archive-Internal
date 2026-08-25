#pragma once
#include "unitysdk.h"

namespace MX::Conquest { class ConquestTile; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }

#define CONQUESTOPERATIONLISTITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x23748C0)

	inline static constexpr unsigned int ConquestOperationListItemInfo_TypeDefinitionIndex = 5093;

	class ConquestOperationListItemInfo : public Il2CppObject
	{
	public:
		::System::Int64 TileLevel; // 0x10
		::MX::Conquest::ConquestTile* ConquestTileData; // 0x18
		Il2CppObject* rewardItemIdAmountDict; // 0x20

		::System::Void .ctor(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOPERATIONLISTITEMINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

