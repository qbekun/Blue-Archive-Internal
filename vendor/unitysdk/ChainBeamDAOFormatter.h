#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ChainBeamDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CHAINBEAMDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D6A10)
#define CHAINBEAMDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D6EF0)
#define CHAINBEAMDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D6F40)

	inline static constexpr unsigned int ChainBeamDAOFormatter_TypeDefinitionIndex = 15585;

	class ChainBeamDAOFormatter : public ::System::Globalization::NumberStyles
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAINBEAMDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChainBeamDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChainBeamDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHAINBEAMDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChainBeamDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChainBeamDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHAINBEAMDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

