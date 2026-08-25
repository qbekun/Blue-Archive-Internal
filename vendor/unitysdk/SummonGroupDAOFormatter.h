#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SummonGroupDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SUMMONGROUPDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17CE390)
#define SUMMONGROUPDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CF920)
#define SUMMONGROUPDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CF970)

	inline static constexpr unsigned int SummonGroupDAOFormatter_TypeDefinitionIndex = 15576;

	class SummonGroupDAOFormatter : public __StaticArrayInitTypeSize=20
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUMMONGROUPDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SummonGroupDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SummonGroupDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUMMONGROUPDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SummonGroupDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SummonGroupDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUMMONGROUPDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

