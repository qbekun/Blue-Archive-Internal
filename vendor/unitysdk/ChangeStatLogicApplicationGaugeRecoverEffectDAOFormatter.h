#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeRecoverEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x164FB80)
#define CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x164FBD0)
#define CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x164C1A0)

	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeRecoverEffectDAOFormatter_TypeDefinitionIndex = 15337;

	class ChangeStatLogicApplicationGaugeRecoverEffectDAOFormatter : public TTT
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

