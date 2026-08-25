#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class HeroSetting; }
namespace MX::Logic::Battles { class SpawnCharacterSetting; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::GameLogic::DBModel { class CostumeDB; }
namespace MX::GameLogic::DBModel { class ArenaCharacterDB; }

#define MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x11FCFB0)
#define MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATEFROMPRESET_OFFSET UNITYSDK_OFFSET(0x11FD630)
#define MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATESUMMONED_OFFSET UNITYSDK_OFFSET(0x11FDF00)
#define MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x11FEC60)
#define MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x11FFBE0)
#define MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATETSS_OFFSET UNITYSDK_OFFSET(0x11FFCC0)
#define MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x11FED50)
#define MX_LOGIC_DATA_HEROSETTINGFACTORY__CREATE_G__GETSKILLLEVEL|0_0_OFFSET UNITYSDK_OFFSET(0x11FD550)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HeroSettingFactory_TypeDefinitionIndex = 13737;

	class HeroSettingFactory : public Il2CppObject
	{
	public:
		::MX::Logic::Data::HeroSetting* Create(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Int32 arg7, ::System::Int32 arg8, ::System::Int32 arg9)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Logic::Data::HeroSetting* CreateFromPreset(::MX::Logic::Battles::SpawnCharacterSetting* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::MX::Logic::Battles::SpawnCharacterSetting*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATEFROMPRESET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::HeroSetting* CreateSummoned(::MX::Logic::Battles::Battle* arg, ::System::String* str, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::System::Boolean arg7, ::System::Boolean arg8, ::System::Int64 arg9)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::MX::Logic::Battles::Battle*, ::System::String*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATESUMMONED_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Logic::Data::HeroSetting* Create(::MX::GameLogic::DBModel::CharacterDB* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::MX::GameLogic::DBModel::WeaponDB* arg4, ::MX::GameLogic::DBModel::GearDB* arg5, ::MX::GameLogic::DBModel::CostumeDB* arg6, ::System::Int32 arg7)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::MX::GameLogic::DBModel::CharacterDB*, Il2CppObject*, Il2CppObject*, ::MX::GameLogic::DBModel::WeaponDB*, ::MX::GameLogic::DBModel::GearDB*, ::MX::GameLogic::DBModel::CostumeDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::MX::Logic::Data::HeroSetting* Create(::MX::GameLogic::DBModel::ArenaCharacterDB* arg)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::MX::GameLogic::DBModel::ArenaCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::HeroSetting* CreateTSS(::MX::GameLogic::DBModel::ArenaCharacterDB* arg)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::MX::GameLogic::DBModel::ArenaCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATETSS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::HeroSetting* Create(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Int32 arg7, ::System::Int32 arg8, ::System::Int32 arg9, Il2CppObject* arg10, ::MX::GameLogic::DBModel::WeaponDB* arg11, ::MX::GameLogic::DBModel::GearDB* arg12, ::MX::GameLogic::DBModel::CostumeDB* arg13, ::System::Int32 arg14)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject*, ::MX::GameLogic::DBModel::WeaponDB*, ::MX::GameLogic::DBModel::GearDB*, ::MX::GameLogic::DBModel::CostumeDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTINGFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, nullptr);
		}

		::System::Int32 _Create_g__GetSkillLevel|0_0(::System::String* str, ::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEROSETTINGFACTORY__CREATE_G__GETSKILLLEVEL|0_0_OFFSET))(str, arg, nullptr);
		}

	};
}

