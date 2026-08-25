#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class DamageTransferEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1508140)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1509E30)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1509E80)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x150C8C0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x150CB80)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x150CBE0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DamageTransferEffectDAO_TypeDefinitionIndex = 15230;

	class DamageTransferEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::System::Int64 TransferRatio; // 0x60
		::System::Boolean IsDispellable; // 0x68
		::System::String* TransferredDamageEffectGroupId; // 0x70
		::System::Int32 TransferredDamageEffectLevel; // 0x78

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamageTransferEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamageTransferEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamageTransferEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamageTransferEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGETRANSFEREFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

