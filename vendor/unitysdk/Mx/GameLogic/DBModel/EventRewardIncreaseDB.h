#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EventTargetType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameLogic::DBModel { class EventRewardIncreaseDB; }

#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xFFF600)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_OVERLAP_OFFSET UNITYSDK_OFFSET(0xFFF610)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xFFF720)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_SET_BEGINDATE_OFFSET UNITYSDK_OFFSET(0xFFF730)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_GET_EVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0xFFF740)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFF750)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_SET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xFFF760)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_GET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xFFF770)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xFFF780)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_GET_BEGINDATE_OFFSET UNITYSDK_OFFSET(0xFFF810)
#define MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_SET_EVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0xFFF820)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventRewardIncreaseDB_TypeDefinitionIndex = 12627;

	class EventRewardIncreaseDB : public Il2CppObject
	{
	public:
		::FlatData::EventTargetType* _EventTargetType_k__BackingField; // 0x10
		::MX::Core::Math::BasisPoint* _Multiplier_k__BackingField; // 0x18
		::System::DateTime* _BeginDate_k__BackingField; // 0x20
		::System::DateTime* _EndDate_k__BackingField; // 0x28

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Boolean OverLap(::MX::GameLogic::DBModel::EventRewardIncreaseDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EventRewardIncreaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_OVERLAP_OFFSET))(arg, nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BeginDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_SET_BEGINDATE_OFFSET))(arg, nullptr);
		}

		::FlatData::EventTargetType* get_EventTargetType()
		{
			return ((::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_GET_EVENTTARGETTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Multiplier(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_SET_MULTIPLIER_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_Multiplier()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_GET_MULTIPLIER_OFFSET))(nullptr);
		}

		::System::Boolean IsActive(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BeginDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_GET_BEGINDATE_OFFSET))(nullptr);
		}

		::System::Void set_EventTargetType(::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTREWARDINCREASEDB_SET_EVENTTARGETTYPE_OFFSET))(arg, nullptr);
		}

	};
}

