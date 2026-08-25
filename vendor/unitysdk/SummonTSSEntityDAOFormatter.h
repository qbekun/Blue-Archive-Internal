#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SummonTSSEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SUMMONTSSENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17BE0A0)
#define SUMMONTSSENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17BE1E0)
#define SUMMONTSSENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17BE230)

	inline static constexpr unsigned int SummonTSSEntityDAOFormatter_TypeDefinitionIndex = 15564;

	class SummonTSSEntityDAOFormatter : public __StaticArrayInitTypeSize=28
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUMMONTSSENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SummonTSSEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SummonTSSEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUMMONTSSENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SummonTSSEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SummonTSSEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUMMONTSSENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

