#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1653D30)
#define CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1653D80)
#define CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1650010)

	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAOFormatter_TypeDefinitionIndex = 15339;

	class ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAOFormatter : public TimeSpanToken
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

