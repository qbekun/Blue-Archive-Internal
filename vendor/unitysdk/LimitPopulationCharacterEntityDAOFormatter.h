#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class LimitPopulationCharacterEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define LIMITPOPULATIONCHARACTERENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17A9A60)
#define LIMITPOPULATIONCHARACTERENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17A9AB0)
#define LIMITPOPULATIONCHARACTERENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17A3110)

	inline static constexpr unsigned int LimitPopulationCharacterEntityDAOFormatter_TypeDefinitionIndex = 15556;

	class LimitPopulationCharacterEntityDAOFormatter : public HexCasing
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LIMITPOPULATIONCHARACTERENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LIMITPOPULATIONCHARACTERENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMITPOPULATIONCHARACTERENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

