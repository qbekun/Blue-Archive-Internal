#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;
class MXButton;
class OpenConditionButtonController;
namespace FlatData { class WeekDungeonType; }
namespace FlatData { class SchoolDungeonType; }
class UIWeekDungeonLobby;
class UISchoolDungeonLobby;
namespace MX::GameLogic::DBModel { class EventRewardIncreaseDB; }
namespace MX::Data { class FarmingDungeonLocationManageExcelData; }

#define UIFARMINGDUNGEONLOCATIONUNIT_GET_SCHOOLDUNGEON_OFFSET UNITYSDK_OFFSET(0xBBFE40)
#define UIFARMINGDUNGEONLOCATIONUNIT_ONCLICKUNIT_OFFSET UNITYSDK_OFFSET(0xBBFE50)
#define UIFARMINGDUNGEONLOCATIONUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBBFFE0)
#define UIFARMINGDUNGEONLOCATIONUNIT_CHECKOPENCONDITION_OFFSET UNITYSDK_OFFSET(0xBBFFF0)
#define UIFARMINGDUNGEONLOCATIONUNIT_INIT_OFFSET UNITYSDK_OFFSET(0xBC00C0)
#define UIFARMINGDUNGEONLOCATIONUNIT_SETOPENCONDITION_OFFSET UNITYSDK_OFFSET(0xBC02E0)
#define UIFARMINGDUNGEONLOCATIONUNIT_SET_WEEKDUNGEONLOBBY_OFFSET UNITYSDK_OFFSET(0xBC0430)
#define UIFARMINGDUNGEONLOCATIONUNIT_GET_WEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xBC0440)
#define UIFARMINGDUNGEONLOCATIONUNIT_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0xBC0450)
#define UIFARMINGDUNGEONLOCATIONUNIT_SETACTIVEREWARDEVENTDISPLAY_OFFSET UNITYSDK_OFFSET(0xBC0460)
#define UIFARMINGDUNGEONLOCATIONUNIT_SETOPENED_OFFSET UNITYSDK_OFFSET(0xBC0490)
#define UIFARMINGDUNGEONLOCATIONUNIT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xBC0060)
#define UIFARMINGDUNGEONLOCATIONUNIT_SETUI_OFFSET UNITYSDK_OFFSET(0xBC0620)
#define UIFARMINGDUNGEONLOCATIONUNIT_GET_SCHOOLDUNGEONLOBBY_OFFSET UNITYSDK_OFFSET(0xBC07C0)
#define UIFARMINGDUNGEONLOCATIONUNIT_GET_WEEKDUNGEONLOBBY_OFFSET UNITYSDK_OFFSET(0xBC07D0)
#define UIFARMINGDUNGEONLOCATIONUNIT_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0xBC07E0)
#define UIFARMINGDUNGEONLOCATIONUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBC07F0)
#define UIFARMINGDUNGEONLOCATIONUNIT_SET_SCHOOLDUNGEONLOBBY_OFFSET UNITYSDK_OFFSET(0xBC08C0)
#define UIFARMINGDUNGEONLOCATIONUNIT_SET_WEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xBC08D0)
#define UIFARMINGDUNGEONLOCATIONUNIT_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xBC08E0)
#define UIFARMINGDUNGEONLOCATIONUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0xBC08F0)
#define UIFARMINGDUNGEONLOCATIONUNIT_SET_SCHOOLDUNGEON_OFFSET UNITYSDK_OFFSET(0xBC0900)
#define UIFARMINGDUNGEONLOCATIONUNIT_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xBC0910)

	inline static constexpr unsigned int UIFarmingDungeonLocationUnit_TypeDefinitionIndex = 8618;

	class UIFarmingDungeonLocationUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* rewardEventDisplay; // 0x18
		UITexture* bgTexture; // 0x20
		UILabel* locationTitleLabel; // 0x28
		UILabel* locationInfoLabel; // 0x30
		::UnityEngine::GameObject* disableDisplay; // 0x38
		MXButton* button; // 0x40
		OpenConditionButtonController* openConditionController; // 0x48
		Il2CppObject* _LocationId_k__BackingField; // 0x50
		::FlatData::WeekDungeonType* _WeekDungeon_k__BackingField; // 0x60
		::FlatData::SchoolDungeonType* _SchoolDungeon_k__BackingField; // 0x64
		UIWeekDungeonLobby* _WeekDungeonLobby_k__BackingField; // 0x68
		UISchoolDungeonLobby* _SchoolDungeonLobby_k__BackingField; // 0x70
		::System::Boolean _Initialized_k__BackingField; // 0x78

		::FlatData::SchoolDungeonType* get_SchoolDungeon()
		{
			return ((::FlatData::SchoolDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_GET_SCHOOLDUNGEON_OFFSET))(nullptr);
		}

		::System::Void OnClickUnit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_ONCLICKUNIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckOpenCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_CHECKOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_INIT_OFFSET))(nullptr);
		}

		::System::Void SetOpenCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SETOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Void set_WeekDungeonLobby(UIWeekDungeonLobby* arg)
		{
			((::System::Void(*)(UIWeekDungeonLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SET_WEEKDUNGEONLOBBY_OFFSET))(arg, nullptr);
		}

		::FlatData::WeekDungeonType* get_WeekDungeon()
		{
			return ((::FlatData::WeekDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_GET_WEEKDUNGEON_OFFSET))(nullptr);
		}

		Il2CppObject* get_LocationId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Void SetActiveRewardEventDisplay(::MX::GameLogic::DBModel::EventRewardIncreaseDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventRewardIncreaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SETACTIVEREWARDEVENTDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void SetOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SETOPENED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void SetUI(::MX::Data::FarmingDungeonLocationManageExcelData* arg)
		{
			((::System::Void(*)(::MX::Data::FarmingDungeonLocationManageExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SETUI_OFFSET))(arg, nullptr);
		}

		UISchoolDungeonLobby* get_SchoolDungeonLobby()
		{
			return ((UISchoolDungeonLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_GET_SCHOOLDUNGEONLOBBY_OFFSET))(nullptr);
		}

		UIWeekDungeonLobby* get_WeekDungeonLobby()
		{
			return ((UIWeekDungeonLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_GET_WEEKDUNGEONLOBBY_OFFSET))(nullptr);
		}

		::System::Void set_LocationId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SET_LOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::FarmingDungeonLocationManageExcelData* arg)
		{
			((::System::Void(*)(::MX::Data::FarmingDungeonLocationManageExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_SchoolDungeonLobby(UISchoolDungeonLobby* arg)
		{
			((::System::Void(*)(UISchoolDungeonLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SET_SCHOOLDUNGEONLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void set_WeekDungeon(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SET_WEEKDUNGEON_OFFSET))(arg, nullptr);
		}

		::System::Void set_Initialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SET_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_SchoolDungeon(::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_SET_SCHOOLDUNGEON_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFARMINGDUNGEONLOCATIONUNIT_GET_INITIALIZED_OFFSET))(nullptr);
		}

	};

