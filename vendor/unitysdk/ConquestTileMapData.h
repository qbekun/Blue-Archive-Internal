#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::Conquest { class ConquestTileMap; }

#define CONQUESTTILEMAPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9C70)

	inline static constexpr unsigned int ConquestTileMapData_TypeDefinitionIndex = 1529;

	class ConquestTileMapData : public Il2CppObject
	{
	public:
		::FlatData::StageDifficulty* StageDifficulty; // 0x10
		::System::Int32 Step; // 0x14
		::System::String* Name; // 0x18
		::MX::Conquest::ConquestTileMap* TileMap; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPDATA_.CTOR_OFFSET))(nullptr);
		}

	};

