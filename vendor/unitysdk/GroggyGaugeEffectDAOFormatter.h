#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class GroggyGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define GROGGYGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x154F8D0)
#define GROGGYGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x154F920)
#define GROGGYGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x154C0D0)

	inline static constexpr unsigned int GroggyGaugeEffectDAOFormatter_TypeDefinitionIndex = 15257;

	class GroggyGaugeEffectDAOFormatter : public KeyList
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + GROGGYGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + GROGGYGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROGGYGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

