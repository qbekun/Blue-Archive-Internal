#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class HPRatioBoundaryGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define HPRATIOBOUNDARYGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16675D0)
#define HPRATIOBOUNDARYGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1667620)
#define HPRATIOBOUNDARYGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1661F40)

	inline static constexpr unsigned int HPRatioBoundaryGaugeEffectDAOFormatter_TypeDefinitionIndex = 15347;

	class HPRatioBoundaryGaugeEffectDAOFormatter : public ::System::Collections::Generic::ObjectEqualityComparer`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HPRATIOBOUNDARYGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HPRATIOBOUNDARYGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPRATIOBOUNDARYGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

