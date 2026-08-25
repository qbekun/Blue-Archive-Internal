#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class AccountAchievementType; }
namespace MX::GameLogic::DBModel { class AccountAchievementDB; }

#define MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_GET_ACHIEVEMENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE1050)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_SET_ACHIEVEMENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE1060)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_GET_ACHIEVEMENTVALUE_OFFSET UNITYSDK_OFFSET(0xFE1070)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_SET_ACHIEVEMENTVALUE_OFFSET UNITYSDK_OFFSET(0xFE1080)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1090)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE10A0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE10D0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFE1100)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountAchievementDB_TypeDefinitionIndex = 12468;

	class AccountAchievementDB : public Il2CppObject
	{
	public:
		::System::Int64 _AchievementUniqueId_k__BackingField; // 0x10
		::System::Int64 _AchievementValue_k__BackingField; // 0x18

		::System::Int64 get_AchievementUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_GET_ACHIEVEMENTUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_AchievementUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_SET_ACHIEVEMENTUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AchievementValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_GET_ACHIEVEMENTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_AchievementValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_SET_ACHIEVEMENTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::AccountAchievementType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::AccountAchievementType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::AccountAchievementDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::AccountAchievementDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTACHIEVEMENTDB_CLONE_OFFSET))(nullptr);
		}

	};
}

