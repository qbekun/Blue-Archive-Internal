#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CostOverloadEnableEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COSTOVERLOADENABLEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x160AE70)
#define COSTOVERLOADENABLEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x160AEC0)
#define COSTOVERLOADENABLEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1607620)

	inline static constexpr unsigned int CostOverloadEnableEffectDAOFormatter_TypeDefinitionIndex = 15313;

	class CostOverloadEnableEffectDAOFormatter : public ::System::Globalization::JapaneseCalendar
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CostOverloadEnableEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CostOverloadEnableEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COSTOVERLOADENABLEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CostOverloadEnableEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CostOverloadEnableEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COSTOVERLOADENABLEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTOVERLOADENABLEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

