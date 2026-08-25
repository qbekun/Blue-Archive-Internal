#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BlackBoardAlarmOnReachEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16A4430)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A47A0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16A82A0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A8300)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16A8250)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16AAD20)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BlackBoardAlarmOnReachEffectDAO_TypeDefinitionIndex = 15372;

	class BlackBoardAlarmOnReachEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x58
		::System::Boolean IsDispellable; // 0x5C
		::System::String* BlackBoardKey; // 0x60
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x68
		::System::Int64 AlarmValue; // 0x70
		::System::String* AlarmEffectGroupIdList; // 0x78
		::System::String* NoAlarmSkillSlotList; // 0x80

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlackBoardAlarmOnReachEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDALARMONREACHEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

