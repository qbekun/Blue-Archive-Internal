#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ImmuneInvokerWithLogicEffectIdEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15973C0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15976E0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x159A110)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x159A160)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x159A1C0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15973D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ImmuneInvokerWithLogicEffectIdEffectDAO_TypeDefinitionIndex = 15280;

	class ImmuneInvokerWithLogicEffectIdEffectDAO : public Il2CppObject
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerWithLogicEffectIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneInvokerWithLogicEffectIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerWithLogicEffectIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneInvokerWithLogicEffectIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

