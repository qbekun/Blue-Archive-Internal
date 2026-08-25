#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x164BCB0)
#define CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1648160)
#define CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x164BD00)

	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeEffectDAOFormatter_TypeDefinitionIndex = 15335;

	class ChangeStatLogicApplicationGaugeEffectDAOFormatter : public TimeSpanStandardStyles
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

