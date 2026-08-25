#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }
namespace FlatData { class BulletType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BlackBoardSumBulletTypeDamagedEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x169F7B0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A2200)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16A3EF0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16A21B0)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16A3F50)
#define MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16A4380)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BlackBoardSumBulletTypeDamagedEffectDAO_TypeDefinitionIndex = 15370;

	class BlackBoardSumBulletTypeDamagedEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x58
		::System::Boolean IsDispellable; // 0x5C
		::System::String* BlackBoardKey; // 0x60
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x68
		::FlatData::BulletType* BulletType; // 0x6C

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

