#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ImmuneInvokerWithoutLogicEffectIdEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15BAE00)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15BEA00)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15BEA10)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15BED80)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15C17B0)
#define MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BE950)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ImmuneInvokerWithoutLogicEffectIdEffectDAO_TypeDefinitionIndex = 15282;

	class ImmuneInvokerWithoutLogicEffectIdEffectDAO : public Il2CppObject
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerWithoutLogicEffectIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneInvokerWithoutLogicEffectIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerWithoutLogicEffectIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneInvokerWithoutLogicEffectIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

