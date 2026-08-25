#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ChangeCurrentHpRateEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CHANGECURRENTHPRATEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16CF1E0)
#define CHANGECURRENTHPRATEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16CD130)
#define CHANGECURRENTHPRATEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16CF230)

	inline static constexpr unsigned int ChangeCurrentHpRateEffectDAOFormatter_TypeDefinitionIndex = 15385;

	class ChangeCurrentHpRateEffectDAOFormatter : public ::System::Globalization::SortVersion
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGECURRENTHPRATEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGECURRENTHPRATEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGECURRENTHPRATEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

