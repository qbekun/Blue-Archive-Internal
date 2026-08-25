#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class FanAreaEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define FANAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1717920)
#define FANAREAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17178E0)
#define FANAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1717970)

	inline static constexpr unsigned int FanAreaEntityDAOFormatter_TypeDefinitionIndex = 15488;

	class FanAreaEntityDAOFormatter : public ::System::Collections::DictionaryEntry
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FanAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FanAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FANAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANAREAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FanAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FanAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FANAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

