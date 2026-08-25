#pragma once
#include "unitysdk.h"

class ParcelTooltipDataRepository;
class MXButton;
class UIPopup_SkillAdditionalTooltip;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class UITooltipBase;
class TooltipInfoBase;
class TooltipType;
namespace UnityEngine { class Vector3; }
class ByNameUIOpener;
class TooltipFactory;
class UIWidget;
class AssetObjectBase;
class SkillInfoTooltipInfo;
namespace MX::Data { class CraftNodeExcelInfo; }
class BulletArmorDamageInfo;
class BattleAdaptationInfo;
class UIOpenerBase;
namespace FlatData { class ShortcutContentType; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }
namespace MX::Data { class CraftType; }
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }
namespace FlatData { class SchoolDungeonType; }
class ChangePieceCampaignUIOpener;
namespace FlatData { class ShopCategoryType; }

#define UIPOPUP_TOOLTIP_GET_ADDITIONALTOOLTIP_OFFSET UNITYSDK_OFFSET(0x274E360)
#define UIPOPUP_TOOLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x274E3D0)
#define UIPOPUP_TOOLTIP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x274E760)
#define UIPOPUP_TOOLTIP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x274E880)
#define UIPOPUP_TOOLTIP_INITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x274E9A0)
#define UIPOPUP_TOOLTIP_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x274EA60)
#define UIPOPUP_TOOLTIP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x274EB70)
#define UIPOPUP_TOOLTIP_ONBACK_OFFSET UNITYSDK_OFFSET(0x274F0E0)
#define UIPOPUP_TOOLTIP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x274F0F0)
#define UIPOPUP_TOOLTIP_REMOVEINVALIDSHORTCUTS_OFFSET UNITYSDK_OFFSET(0x274F160)
#define UIPOPUP_TOOLTIP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x274F770)
#define UIPOPUP_TOOLTIP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x274F950)
#define UIPOPUP_TOOLTIP_SETTARGET_OFFSET UNITYSDK_OFFSET(0x2744CF0)
#define UIPOPUP_TOOLTIP_CREATESWAPPINGOBJECT_OFFSET UNITYSDK_OFFSET(0x274E510)
#define UIPOPUP_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2745C20)
#define UIPOPUP_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2745720)
#define UIPOPUP_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2745B10)
#define UIPOPUP_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2754950)
#define UIPOPUP_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2754C40)
#define UIPOPUP_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2754DA0)
#define UIPOPUP_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2754D10)
#define UIPOPUP_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2754F70)
#define UIPOPUP_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2755000)
#define UIPOPUP_TOOLTIP_STRINGTOSHORTCUT_OFFSET UNITYSDK_OFFSET(0x2754820)
#define UIPOPUP_TOOLTIP_STRINGTOSHORTCUTINTERNAL_OFFSET UNITYSDK_OFFSET(0x2755090)
#define UIPOPUP_TOOLTIP_STRINGTOSHORTCUTINTERNAL_OFFSET UNITYSDK_OFFSET(0x27550F0)
#define UIPOPUP_TOOLTIP_STRINGTOSHORTCUTINTERNAL_OFFSET UNITYSDK_OFFSET(0x2755A00)
#define UIPOPUP_TOOLTIP_SETTARGETPARENTBACK_OFFSET UNITYSDK_OFFSET(0x274EE10)
#define UIPOPUP_TOOLTIP_GETTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x274FE60)
#define UIPOPUP_TOOLTIP_GETCAMPAIGNSTAGETOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2755C70)
#define UIPOPUP_TOOLTIP_GETEVENTSTAGETOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2756100)
#define UIPOPUP_TOOLTIP_GETBLOODSTAGETOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2756590)
#define UIPOPUP_TOOLTIP_GETWEEKDUNGEONTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2756A20)
#define UIPOPUP_TOOLTIP_GETSHOPTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2756EB0)
#define UIPOPUP_TOOLTIP_GETITEMINVENTORYTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x27574D0)
#define UIPOPUP_TOOLTIP_GETCRAFTTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2757C00)
#define UIPOPUP_TOOLTIP_GETCRAFTSHIFTINGTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2757B80)
#define UIPOPUP_TOOLTIP_GETMULTIFLOORRAIDTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2758120)
#define UIPOPUP_TOOLTIP_GETACADEMYTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2757B00)
#define UIPOPUP_TOOLTIP_GETSCHOOLDUNGEONTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2757C60)
#define UIPOPUP_TOOLTIP_GETMISSIONTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2757CC0)
#define UIPOPUP_TOOLTIP_GETCHANGEPIECECAMPAIGNTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x274FB00)
#define UIPOPUP_TOOLTIP_TOGGLEADDITIONALSKILLTOOLTIP_OFFSET UNITYSDK_OFFSET(0x273F460)
#define UIPOPUP_TOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2758AA0)
#define UIPOPUP_TOOLTIP__ONSCREENRESOLUTIONCHANGED_G__COCHECKSCREENRESOLUTIONCHANGED|26_0_OFFSET UNITYSDK_OFFSET(0x274EB00)
#define UIPOPUP_TOOLTIP___N__0_OFFSET UNITYSDK_OFFSET(0x2758B20)
#define UIPOPUP_TOOLTIP__GETSHOPTOOLTIPINFO_G__ISBUYABLE|54_0_OFFSET UNITYSDK_OFFSET(0x2758190)

	inline static constexpr unsigned int UIPopup_Tooltip_TypeDefinitionIndex = 7278;

	class UIPopup_Tooltip : public Il2CppObject
	{
	public:
		ParcelTooltipDataRepository* repository; // 0x0
		MXButton* closeButton; // 0xD8
		UIPopup_SkillAdditionalTooltip* addtionalTooltipPopup; // 0xE0
		::UnityEngine::Vector2* extent; // 0xE8
		::System::Boolean pass; // 0xF0
		::System::Int32 siblingIndex; // 0xF4
		::UnityEngine::GameObject* swappingObject; // 0xF8
		::UnityEngine::Transform* swappingObjectParent; // 0x100
		::UnityEngine::Transform* target; // 0x108
		::System::Int64 targetCount; // 0x110
		::MX::GameLogic::Parcel::ParcelKeyPair* targetParcel; // 0x118
		::UnityEngine::Transform* targetParent; // 0x128
		UITooltipBase* currentTooltip; // 0x130
		TooltipInfoBase* tooltipInfo; // 0x138
		TooltipType* tooltipType; // 0x140
		::UnityEngine::Vector3* worldCenter; // 0x144
		ByNameUIOpener* multiFloorRaidUIOpener; // 0x150
		TooltipFactory* tooltipFactory; // 0x158
		::System::Int32 selectExSkillInfoTooltipLabelWidth; // 0x160
		::System::Int32 MaxStageStar; // 0x0

		UIPopup_SkillAdditionalTooltip* get_AdditionalTooltip()
		{
			return ((UIPopup_SkillAdditionalTooltip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GET_ADDITIONALTOOLTIP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void InitRepository()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_INITREPOSITORY_OFFSET))(nullptr);
		}

		::System::Void OnScreenResolutionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_ONSCREENRESOLUTIONCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_ONBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void RemoveInvalidShortcuts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_REMOVEINVALIDSHORTCUTS_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetTarget(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void CreateSwappingObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_CREATESWAPPINGOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelKeyPair* arg, UIWidget* arg2, ::System::Boolean arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, UIWidget*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelKeyPair* arg, UIWidget* arg2, ::System::Boolean arg3, ::Il2CppArray<::System::Object*>* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, UIWidget*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelKeyPair* arg, UIWidget* arg2, AssetObjectBase* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, UIWidget*, AssetObjectBase*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetData(::Il2CppArray<::System::Object*>* arg, UIWidget* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(SkillInfoTooltipInfo* arg, UIWidget* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(SkillInfoTooltipInfo*, UIWidget*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(::MX::Data::CraftNodeExcelInfo* arg, UIWidget* arg2)
		{
			((::System::Void(*)(::MX::Data::CraftNodeExcelInfo*, UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(SkillInfoTooltipInfo* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector2* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(SkillInfoTooltipInfo*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetData(BulletArmorDamageInfo* arg, UIWidget* arg2)
		{
			((::System::Void(*)(BulletArmorDamageInfo*, UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(BattleAdaptationInfo* arg, UIWidget* arg2)
		{
			((::System::Void(*)(BattleAdaptationInfo*, UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		UIOpenerBase* StringToShortcut(::System::String* str)
		{
			return ((UIOpenerBase*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_STRINGTOSHORTCUT_OFFSET))(str, nullptr);
		}

		UIOpenerBase* StringToShortcutInternal(::System::String* str)
		{
			return ((UIOpenerBase*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_STRINGTOSHORTCUTINTERNAL_OFFSET))(str, nullptr);
		}

		UIOpenerBase* StringToShortcutInternal(::System::String* str, ::System::String* str2)
		{
			return ((UIOpenerBase*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_STRINGTOSHORTCUTINTERNAL_OFFSET))(str, str2, nullptr);
		}

		UIOpenerBase* StringToShortcutInternal(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			return ((UIOpenerBase*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_STRINGTOSHORTCUTINTERNAL_OFFSET))(str, str2, str3, nullptr);
		}

		::System::Void SetTargetParentBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_SETTARGETPARENTBACK_OFFSET))(nullptr);
		}

		Il2CppObject* GetTooltipInfo(::FlatData::ShortcutContentType* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Boolean arg3, bool&* arg4)
		{
			return ((Il2CppObject*(*)(::FlatData::ShortcutContentType*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Boolean, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETTOOLTIPINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetCampaignStageTooltipInfo(Il2CppObject* arg, ::FlatData::RewardTag* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETCAMPAIGNSTAGETOOLTIPINFO_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetEventStageTooltipInfo(Il2CppObject* arg, ::FlatData::RewardTag* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETEVENTSTAGETOOLTIPINFO_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetBloodStageTooltipInfo(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETBLOODSTAGETOOLTIPINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetWeekDungeonTooltipInfo(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETWEEKDUNGEONTOOLTIPINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetShopTooltipInfo(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETSHOPTOOLTIPINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetItemInventoryTooltipInfo(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETITEMINVENTORYTOOLTIPINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCraftTooltipInfo(::MX::Data::CraftType* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::CraftType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETCRAFTTOOLTIPINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCraftShiftingTooltipInfo(::MX::Data::CraftType* arg, ::MX::Data::ShiftingCraftRecipeExcelInfo* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Data::CraftType*, ::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETCRAFTSHIFTINGTOOLTIPINFO_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetMultiFloorRaidTooltipInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETMULTIFLOORRAIDTOOLTIPINFO_OFFSET))(nullptr);
		}

		Il2CppObject* GetAcademyTooltipInfo(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETACADEMYTOOLTIPINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetSchoolDungeonTooltipInfo(::FlatData::SchoolDungeonType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETSCHOOLDUNGEONTOOLTIPINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMissionTooltipInfo(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETMISSIONTOOLTIPINFO_OFFSET))(arg, nullptr);
		}

		ChangePieceCampaignUIOpener* GetChangePieceCampaignTooltipInfo(bool&* arg)
		{
			return ((ChangePieceCampaignUIOpener*(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_GETCHANGEPIECECAMPAIGNTOOLTIPINFO_OFFSET))(arg, nullptr);
		}

		::System::Void ToggleAdditionalSkillTooltip(SkillInfoTooltipInfo* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Transform* arg4)
		{
			((::System::Void(*)(SkillInfoTooltipInfo*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_TOGGLEADDITIONALSKILLTOOLTIP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnScreenResolutionChanged_g__CoCheckScreenResolutionChanged|26_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP__ONSCREENRESOLUTIONCHANGED_G__COCHECKSCREENRESOLUTIONCHANGED|26_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP___N__0_OFFSET))(nullptr);
		}

		::System::Boolean _GetShopTooltipInfo_g__IsBuyable|54_0(::FlatData::ShopCategoryType* arg, ::FlatData::ParcelType* arg2, ::System::Int64 arg3, <>c__DisplayClass54_0&* arg4)
		{
			return ((::System::Boolean(*)(::FlatData::ShopCategoryType*, ::FlatData::ParcelType*, ::System::Int64, <>c__DisplayClass54_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TOOLTIP__GETSHOPTOOLTIPINFO_G__ISBUYABLE|54_0_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

