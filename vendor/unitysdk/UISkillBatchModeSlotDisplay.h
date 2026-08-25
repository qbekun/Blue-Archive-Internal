#pragma once
#include "unitysdk.h"

class UISkillBatchGrowth;
class UISkillInfo;
class MXButton;
namespace UnityEngine { class GameObject; }
class UIGrid;
class UILabel;
class SkillBatchModeItemInputRecord;
namespace MX::Logic::BattleEntities { class SkillSlot; }
class CharacterObject;
namespace MX::GameLogic::DBModel { class SkillLevelBatchGrowthRequestDB; }

#define UISKILLBATCHMODESLOTDISPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x22E8250)
#define UISKILLBATCHMODESLOTDISPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x22E4070)
#define UISKILLBATCHMODESLOTDISPLAY_ONCLICKMINUS_OFFSET UNITYSDK_OFFSET(0x22E8A40)
#define UISKILLBATCHMODESLOTDISPLAY_GET_INPUTHISTORY_OFFSET UNITYSDK_OFFSET(0x22E8A50)
#define UISKILLBATCHMODESLOTDISPLAY_ONCLICKMAX_OFFSET UNITYSDK_OFFSET(0x22E8A60)
#define UISKILLBATCHMODESLOTDISPLAY_ACTIVEBTNALL_OFFSET UNITYSDK_OFFSET(0x22EA5D0)
#define UISKILLBATCHMODESLOTDISPLAY_CALINPUTITEM_OFFSET UNITYSDK_OFFSET(0x22E8530)
#define UISKILLBATCHMODESLOTDISPLAY_GET_SETTINGLEVEL_OFFSET UNITYSDK_OFFSET(0x22EA670)
#define UISKILLBATCHMODESLOTDISPLAY_ACTIVEMAXBTN_OFFSET UNITYSDK_OFFSET(0x22E6C40)
#define UISKILLBATCHMODESLOTDISPLAY_ONCLICKPLUS_OFFSET UNITYSDK_OFFSET(0x22EB180)
#define UISKILLBATCHMODESLOTDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x22EB190)
#define UISKILLBATCHMODESLOTDISPLAY_TRYGETREQUIEREDMATERIALSANDCOST_OFFSET UNITYSDK_OFFSET(0x22EA1E0)
#define UISKILLBATCHMODESLOTDISPLAY__ACTIVEMAXBTN_G__ISACTIVEMAXBTN|40_0_OFFSET UNITYSDK_OFFSET(0x22EA680)
#define UISKILLBATCHMODESLOTDISPLAY_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x22E88D0)
#define UISKILLBATCHMODESLOTDISPLAY_ACTIVEBTN_OFFSET UNITYSDK_OFFSET(0x22E89A0)
#define UISKILLBATCHMODESLOTDISPLAY_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0x22EB1C0)
#define UISKILLBATCHMODESLOTDISPLAY_GET_REQUESTDB_OFFSET UNITYSDK_OFFSET(0x22EB1D0)
#define UISKILLBATCHMODESLOTDISPLAY_SETLOCKBTN_OFFSET UNITYSDK_OFFSET(0x22E88E0)
#define UISKILLBATCHMODESLOTDISPLAY_GET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x22EB1E0)

	inline static constexpr unsigned int UISkillBatchModeSlotDisplay_TypeDefinitionIndex = 4874;

	class UISkillBatchModeSlotDisplay : public Il2CppObject
	{
	public:
		UISkillBatchGrowth* batchGrowth; // 0x18
		UISkillInfo* skillInfo; // 0x20
		MXButton* plusBtn; // 0x28
		MXButton* minusBtn; // 0x30
		MXButton* maxBtn; // 0x38
		::UnityEngine::GameObject* plusDisableBtn; // 0x40
		::UnityEngine::GameObject* minusDisableBtn; // 0x48
		::UnityEngine::GameObject* maxDisableBtn; // 0x50
		UIGrid* grid; // 0x58
		UILabel* levelLabel; // 0x60
		::UnityEngine::GameObject* maxIconRoot; // 0x68
		SkillBatchModeItemInputRecord* record; // 0x70
		::MX::Logic::BattleEntities::SkillSlot* skillSlot; // 0x78
		::System::String* actionName; // 0x80
		CharacterObject* charObj; // 0x88
		::System::Int32 settingLevel; // 0x90
		::System::Int32 curLevel; // 0x94
		::MX::GameLogic::DBModel::SkillLevelBatchGrowthRequestDB* requestDB; // 0x98
		::System::Int32 curSkillCost; // 0xA0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Logic::BattleEntities::SkillSlot* arg, CharacterObject* arg2, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, CharacterObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_SETDATA_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void OnClickMinus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_ONCLICKMINUS_OFFSET))(nullptr);
		}

		SkillBatchModeItemInputRecord* get_InputHistory()
		{
			return ((SkillBatchModeItemInputRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_GET_INPUTHISTORY_OFFSET))(nullptr);
		}

		::System::Void OnClickMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_ONCLICKMAX_OFFSET))(nullptr);
		}

		::System::Void ActiveBtnAll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_ACTIVEBTNALL_OFFSET))(arg, nullptr);
		}

		::System::Void CalInputItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_CALINPUTITEM_OFFSET))(nullptr);
		}

		::System::Int32 get_SettingLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_GET_SETTINGLEVEL_OFFSET))(nullptr);
		}

		::System::Void ActiveMaxBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_ACTIVEMAXBTN_OFFSET))(nullptr);
		}

		::System::Void OnClickPlus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_ONCLICKPLUS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRequieredMaterialsAndCost(::System::Int32 arg, SkillBatchModeItemInputRecord&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, SkillBatchModeItemInputRecord&*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_TRYGETREQUIEREDMATERIALSANDCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _ActiveMaxBtn_g__IsActiveMaxBtn|40_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY__ACTIVEMAXBTN_G__ISACTIVEMAXBTN|40_0_OFFSET))(nullptr);
		}

		::System::Int32 get_maxLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_GET_MAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void ActiveBtn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_ACTIVEBTN_OFFSET))(arg, nullptr);
		}

		UISkillInfo* get_SkillInfo()
		{
			return ((UISkillInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_GET_SKILLINFO_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::SkillLevelBatchGrowthRequestDB* get_RequestDB()
		{
			return ((::MX::GameLogic::DBModel::SkillLevelBatchGrowthRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_GET_REQUESTDB_OFFSET))(nullptr);
		}

		::System::Void SetLockBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_SETLOCKBTN_OFFSET))(nullptr);
		}

		::System::Int32 get_CurLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHMODESLOTDISPLAY_GET_CURLEVEL_OFFSET))(nullptr);
		}

	};

