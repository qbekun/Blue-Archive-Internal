#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BlackBoardMultiAlarmEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16AADD0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16AB090)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16B05D0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16B43E0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16B43F0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16B0580)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BlackBoardMultiAlarmEffectDAO_TypeDefinitionIndex = 15374;

	class BlackBoardMultiAlarmEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x58
		::System::Boolean IsDispellable; // 0x5C
		::System::String* BlackBoardKeyList; // 0x60
		::System::String* BlackBoardKeyTypeList; // 0x68
		::System::String* AlarmValueList; // 0x70
		::System::String* EachAlarmEffectGroupIdList; // 0x78
		::System::Int32 CombinedAlarmCount; // 0x80
		::System::String* CombinedAlarmEffectGroupIdList; // 0x88
		::System::String* NoAlarmSkillSlotList; // 0x90

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlackBoardMultiAlarmEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDMULTIALARMEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

