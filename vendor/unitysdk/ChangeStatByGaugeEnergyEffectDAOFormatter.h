#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ChangeStatByGaugeEnergyEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CHANGESTATBYGAUGEENERGYEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1641550)
#define CHANGESTATBYGAUGEENERGYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16453E0)
#define CHANGESTATBYGAUGEENERGYEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1645430)

	inline static constexpr unsigned int ChangeStatByGaugeEnergyEffectDAOFormatter_TypeDefinitionIndex = 15333;

	class ChangeStatByGaugeEnergyEffectDAOFormatter : public ParseFailureKind
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATBYGAUGEENERGYEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATBYGAUGEENERGYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATBYGAUGEENERGYEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

