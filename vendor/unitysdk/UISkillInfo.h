#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UISprite;
class UITexture;
class MXButton;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class BoxCollider; }
class UIPanel;
namespace MX::Logic::BattleEntities { class SkillSlot; }
class CharacterObject;
class UISkillInfoPool;
class SkillInfoTooltipInfo;
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
class EventDelegate;
class UIPopup_Tooltip;

#define UISKILLINFO_GET_BOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0x2321190)
#define UISKILLINFO_GET_DESCLABEL_OFFSET UNITYSDK_OFFSET(0x2321220)
#define UISKILLINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x2321230)
#define UISKILLINFO_GET_ISACTIVEREINFORCEDICON_OFFSET UNITYSDK_OFFSET(0x2321250)
#define UISKILLINFO_GET_APPLYMAXLEVELCOLOR_OFFSET UNITYSDK_OFFSET(0x23212C0)
#define UISKILLINFO_SET_APPLYMAXLEVELCOLOR_OFFSET UNITYSDK_OFFSET(0x23212D0)
#define UISKILLINFO_GET_SKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x23212E0)
#define UISKILLINFO_SET_SKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x2321300)
#define UISKILLINFO_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x2321330)
#define UISKILLINFO_SET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x2321340)
#define UISKILLINFO_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x2321350)
#define UISKILLINFO_SET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x2321360)
#define UISKILLINFO_GET_FROMBUTTONORIDEPTH_OFFSET UNITYSDK_OFFSET(0x2321370)
#define UISKILLINFO_SET_FROMBUTTONORIDEPTH_OFFSET UNITYSDK_OFFSET(0x2321380)
#define UISKILLINFO_GET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x2321390)
#define UISKILLINFO_SET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x23213A0)
#define UISKILLINFO_GET_SKILLGROUPIDNAME_OFFSET UNITYSDK_OFFSET(0x23213B0)
#define UISKILLINFO_SET_SKILLGROUPIDNAME_OFFSET UNITYSDK_OFFSET(0x23213C0)
#define UISKILLINFO_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x23213E0)
#define UISKILLINFO_SET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x23213F0)
#define UISKILLINFO_GET_ISOPENSKILL_OFFSET UNITYSDK_OFFSET(0x2321400)
#define UISKILLINFO_SET_ISOPENSKILL_OFFSET UNITYSDK_OFFSET(0x2321410)
#define UISKILLINFO_GET_USESHORTSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x2321420)
#define UISKILLINFO_SET_USESHORTSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x2321430)
#define UISKILLINFO_GET_USELEVELNUMBERONLY_OFFSET UNITYSDK_OFFSET(0x2321440)
#define UISKILLINFO_SET_USELEVELNUMBERONLY_OFFSET UNITYSDK_OFFSET(0x2321450)
#define UISKILLINFO_GET_DETAILBUTTONCALLBACKONLY_OFFSET UNITYSDK_OFFSET(0x2321460)
#define UISKILLINFO_SET_DETAILBUTTONCALLBACKONLY_OFFSET UNITYSDK_OFFSET(0x2321470)
#define UISKILLINFO_GET_FROMMULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x2321480)
#define UISKILLINFO_SET_FROMMULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x2321490)
#define UISKILLINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x23214A0)
#define UISKILLINFO_SETFROMSKILLBUTTONS_OFFSET UNITYSDK_OFFSET(0x2321890)
#define UISKILLINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x231B6D0)
#define UISKILLINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x23218B0)
#define UISKILLINFO_SETDATABYPOOL_OFFSET UNITYSDK_OFFSET(0x2322B90)
#define UISKILLINFO_SETUI_OFFSET UNITYSDK_OFFSET(0x2321AD0)
#define UISKILLINFO_SETCOSTLABELCOLOR_OFFSET UNITYSDK_OFFSET(0x2323140)
#define UISKILLINFO_SETDATADEFAULT_OFFSET UNITYSDK_OFFSET(0x231B4E0)
#define UISKILLINFO_GETTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2323560)
#define UISKILLINFO_GETTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x23235A0)
#define UISKILLINFO_SETDATABYSETTINGS_OFFSET UNITYSDK_OFFSET(0x2323DA0)
#define UISKILLINFO_TRYSETACTIVESKILLANDREINFORCEICON_OFFSET UNITYSDK_OFFSET(0x2322F10)
#define UISKILLINFO_SETREINFORCEICON_OFFSET UNITYSDK_OFFSET(0x2323E60)
#define UISKILLINFO_SETACTIVEREINFORCEICON_OFFSET UNITYSDK_OFFSET(0x23230A0)
#define UISKILLINFO_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x231B360)
#define UISKILLINFO_SETNODATAERROR_OFFSET UNITYSDK_OFFSET(0x23240E0)
#define UISKILLINFO_CLOSE_OFFSET UNITYSDK_OFFSET(0x2324250)
#define UISKILLINFO_RESETDETAILBUTTON_OFFSET UNITYSDK_OFFSET(0x23242B0)
#define UISKILLINFO_ONCLICKDETAIL_OFFSET UNITYSDK_OFFSET(0x2324340)
#define UISKILLINFO_DETAILBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x23243B0)
#define UISKILLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2324480)
#define UISKILLINFO__AWAKE_B__87_0_OFFSET UNITYSDK_OFFSET(0x2324490)
#define UISKILLINFO__AWAKE_B__87_1_OFFSET UNITYSDK_OFFSET(0x2324520)
#define UISKILLINFO__DETAILBUTTONACTION_B__106_0_OFFSET UNITYSDK_OFFSET(0x23245B0)
#define UISKILLINFO__DETAILBUTTONACTION_B__106_1_OFFSET UNITYSDK_OFFSET(0x2324960)

	inline static constexpr unsigned int UISkillInfo_TypeDefinitionIndex = 4918;

	class UISkillInfo : public Il2CppObject
	{
	public:
		UILabel* level; // 0x18
		UILabel* name; // 0x20
		UILabel* type; // 0x28
		UILabel* desc; // 0x30
		UILabel* cost; // 0x38
		::UnityEngine::GameObject* costWidget; // 0x40
		UILabel* requireGrade; // 0x48
		UILabel* bulletType; // 0x50
		UISprite* iconBg; // 0x58
		UISprite* maxIcon; // 0x60
		UISprite* maxIconWithHideLevel; // 0x68
		UITexture* icon; // 0x70
		UISprite* parcelBg; // 0x78
		MXButton* closeButton; // 0x80
		MXButton* detailButton; // 0x88
		::UnityEngine::GameObject* SkillArrow; // 0x90
		::UnityEngine::Vector3* tooltipPopupPosition; // 0x98
		::System::Int32 tooltipWidth; // 0xA4
		::UnityEngine::GameObject* inactiveWidget; // 0xA8
		::UnityEngine::GameObject* normalWidget; // 0xB0
		::UnityEngine::GameObject* emptyWidget; // 0xB8
		::UnityEngine::GameObject* selectWidget; // 0xC0
		::UnityEngine::Transform* reinforcedIconTexture; // 0xC8
		::Il2CppArray<::System::Object*>* fromSkillButtons; // 0xD0
		::UnityEngine::BoxCollider* boxCollider; // 0xD8
		Il2CppObject* onDetailCallback; // 0xE0
		UIPanel* panel; // 0xE8
		::System::Boolean _ApplyMaxLevelColor_k__BackingField; // 0xF0
		Il2CppObject* _SkillExcel_k__BackingField; // 0xF8
		::System::Int32 _SkillLevel_k__BackingField; // 0x110
		::System::Boolean _IsMaxLevel_k__BackingField; // 0x114
		::System::Int32 _FromButtonOriDepth_k__BackingField; // 0x118
		::System::Int64 _CharacterServerId_k__BackingField; // 0x120
		::System::String* _SkillGroupIdName_k__BackingField; // 0x128
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x130
		::System::Boolean _IsOpenSkill_k__BackingField; // 0x134
		::System::Boolean _UseShortSkillType_k__BackingField; // 0x135
		::System::Boolean _UseLevelNumberOnly_k__BackingField; // 0x136
		::System::Boolean _DetailButtonCallbackOnly_k__BackingField; // 0x137
		::System::Boolean _FromMultiFloor_k__BackingField; // 0x138

		::UnityEngine::BoxCollider* get_BoxCollider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_BOXCOLLIDER_OFFSET))(nullptr);
		}

		UILabel* get_DescLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_DESCLABEL_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActiveReinforcedIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_ISACTIVEREINFORCEDICON_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyMaxLevelColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_APPLYMAXLEVELCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_ApplyMaxLevelColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_APPLYMAXLEVELCOLOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SkillExcel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_SKILLEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_SkillExcel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_SKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_SkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_SKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_ISMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_IsMaxLevel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_ISMAXLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FromButtonOriDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_FROMBUTTONORIDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_FromButtonOriDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_FROMBUTTONORIDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_CHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_CHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillGroupIdName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_SKILLGROUPIDNAME_OFFSET))(nullptr);
		}

		::System::Void set_SkillGroupIdName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_SKILLGROUPIDNAME_OFFSET))(str, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::Void set_SkillSlot(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_SKILLSLOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOpenSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_ISOPENSKILL_OFFSET))(nullptr);
		}

		::System::Void set_IsOpenSkill(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_ISOPENSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseShortSkillType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_USESHORTSKILLTYPE_OFFSET))(nullptr);
		}

		::System::Void set_UseShortSkillType(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_USESHORTSKILLTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseLevelNumberOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_USELEVELNUMBERONLY_OFFSET))(nullptr);
		}

		::System::Void set_UseLevelNumberOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_USELEVELNUMBERONLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DetailButtonCallbackOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_DETAILBUTTONCALLBACKONLY_OFFSET))(nullptr);
		}

		::System::Void set_DetailButtonCallbackOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_DETAILBUTTONCALLBACKONLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FromMultiFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GET_FROMMULTIFLOOR_OFFSET))(nullptr);
		}

		::System::Void set_FromMultiFloor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SET_FROMMULTIFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetFromSkillButtons(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETFROMSKILLBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetData(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int64 arg2, ::System::String* str, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int64, ::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETDATA_OFFSET))(arg, arg2, str, arg3, arg4, nullptr);
		}

		::System::Boolean SetData(::MX::Logic::BattleEntities::SkillSlot* arg, CharacterObject* arg2, ::System::String* str, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, CharacterObject*, ::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETDATA_OFFSET))(arg, arg2, str, arg3, arg4, nullptr);
		}

		::System::Void SetDataByPool(UISkillInfoPool* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(UISkillInfoPool*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETDATABYPOOL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SetUI(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetCostLabelColor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETCOSTLABELCOLOR_OFFSET))(str, nullptr);
		}

		::System::Boolean SetDataDefault(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int64 arg2, ::System::String* str, ::System::Int32 arg3, ::System::Boolean arg4, ::System::Int32 arg5)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int64, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETDATADEFAULT_OFFSET))(arg, arg2, str, arg3, arg4, arg5, nullptr);
		}

		SkillInfoTooltipInfo* GetTooltipInfo()
		{
			return ((SkillInfoTooltipInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GETTOOLTIPINFO_OFFSET))(nullptr);
		}

		SkillInfoTooltipInfo* GetTooltipInfo(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int64 arg2, ::System::String* str, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			return ((SkillInfoTooltipInfo*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int64, ::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_GETTOOLTIPINFO_OFFSET))(arg, arg2, str, arg3, arg4, nullptr);
		}

		::System::Boolean SetDataBySettings(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::String* str, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::MX::Logic::Data::WeaponSetting* arg6, ::MX::Logic::Data::GearSetting* arg7)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::String*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Boolean, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETDATABYSETTINGS_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean TrySetActiveSkillAndReinforceIcon(::System::Int64 arg, ::System::Int32 arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3, ::System::String* str, ::MX::Logic::Data::WeaponSetting* arg4, ::MX::Logic::Data::GearSetting* arg5)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::System::String*, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_TRYSETACTIVESKILLANDREINFORCEICON_OFFSET))(arg, arg2, arg3, str, arg4, arg5, nullptr);
		}

		::System::Void SetReinforceIcon(::System::Int64 arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::MX::Logic::Data::WeaponSetting* arg3, ::MX::Logic::Data::GearSetting* arg4)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::BattleEntities::SkillSlot*, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETREINFORCEICON_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetActiveReinforceIcon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETACTIVEREINFORCEICON_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void SetNoDataError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_SETNODATAERROR_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_CLOSE_OFFSET))(nullptr);
		}

		::System::Void ResetDetailButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_RESETDETAILBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_ONCLICKDETAIL_OFFSET))(nullptr);
		}

		::System::Void DetailButtonAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_DETAILBUTTONACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Awake_b__87_0(EventDelegate* arg)
		{
			return ((::System::Boolean(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO__AWAKE_B__87_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Awake_b__87_1(EventDelegate* arg)
		{
			return ((::System::Boolean(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO__AWAKE_B__87_1_OFFSET))(arg, nullptr);
		}

		::System::Void _DetailButtonAction_b__106_0(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO__DETAILBUTTONACTION_B__106_0_OFFSET))(arg, nullptr);
		}

		::System::Void _DetailButtonAction_b__106_1(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFO__DETAILBUTTONACTION_B__106_1_OFFSET))(arg, nullptr);
		}

	};

