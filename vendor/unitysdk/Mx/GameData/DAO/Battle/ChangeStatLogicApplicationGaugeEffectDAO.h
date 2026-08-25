#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1645480)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16454E0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1647EE0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16481A0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x164BC50)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x164BCA0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeEffectDAO_TypeDefinitionIndex = 15336;

	class ChangeStatLogicApplicationGaugeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 SetGaugeEnergyToTargetHpRatio; // 0x58
		::System::Int64 StartGaugeEnergyRatio; // 0x60
		::System::Boolean Dispellable; // 0x68
		::System::String* LogicEffectTypeReduceGauge; // 0x70
		::System::String* UIPath; // 0x78
		::System::String* GaugeTraceElement; // 0x80

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

