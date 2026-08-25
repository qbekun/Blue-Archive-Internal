#pragma once
#include "unitysdk.h"

class UICharacterInfo;
class UICharacterWeaponInfo;
class UIGearCard;
class MXButton;
class UILabel;
class UITexture;
class TooltipButton;
namespace UnityEngine { class GameObject; }
class CharacterObject;
class CharacterDetailData;
class UIEquipmentGrowth;
class UIPopup_WeaponGrowth;
class CharacterDetailDisplayState;
namespace MX::Logic::BattleEntities { class SkillSlot; }
class UIPotentialGrowth;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_Skill_LevelUp;
class UIPopup_StatDetail;
class UIPopup_WeaponInfo;

#define UICHARACTERBASICINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x22D3C60)
#define UICHARACTERBASICINFO__ONCLICKEQUIPGROWTH_B__51_1_OFFSET UNITYSDK_OFFSET(0x22D44E0)
#define UICHARACTERBASICINFO__ONCLICKWEAPONGROWTH_B__53_0_OFFSET UNITYSDK_OFFSET(0x22D4700)
#define UICHARACTERBASICINFO_SETCHARATERINFODISPLAY_OFFSET UNITYSDK_OFFSET(0x22D47D0)
#define UICHARACTERBASICINFO_CHECKPOPUPTABREFRESH_OFFSET UNITYSDK_OFFSET(0x22D45E0)
#define UICHARACTERBASICINFO_ONCLICKPOTENTIALGROWTHBUTTON_OFFSET UNITYSDK_OFFSET(0x22D49E0)
#define UICHARACTERBASICINFO_ONCLICKSECRETSTONEEXCHANGE_OFFSET UNITYSDK_OFFSET(0x22D4C00)
#define UICHARACTERBASICINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22D4DA0)
#define UICHARACTERBASICINFO_PLAYEQUIPMENTBOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0x22D4EA0)
#define UICHARACTERBASICINFO_PLAYCANMOUNTEDTWEEN_OFFSET UNITYSDK_OFFSET(0x22D50B0)
#define UICHARACTERBASICINFO_ONCLICKWEAPON_OFFSET UNITYSDK_OFFSET(0x22D5130)
#define UICHARACTERBASICINFO_SETSKILLINFO_OFFSET UNITYSDK_OFFSET(0x22D53D0)
#define UICHARACTERBASICINFO_GET_RECORDOPENPOPUPNAME_OFFSET UNITYSDK_OFFSET(0x22D55B0)
#define UICHARACTERBASICINFO_RESETEQUIPMENTBOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0x22D55C0)
#define UICHARACTERBASICINFO__ONCLICKPOTENTIALGROWTHBUTTON_B__56_1_OFFSET UNITYSDK_OFFSET(0x22D5770)
#define UICHARACTERBASICINFO_SETSKILLDISPLAY_OFFSET UNITYSDK_OFFSET(0x22D5830)
#define UICHARACTERBASICINFO_SETCHARACTERGAINRECIPE_OFFSET UNITYSDK_OFFSET(0x22D5D40)
#define UICHARACTERBASICINFO_HANDLEEQUIPMENTSLOTCLICKMESSAGE_OFFSET UNITYSDK_OFFSET(0x22D6180)
#define UICHARACTERBASICINFO_CHECKOPENGROWTHPOPUPRECORD_OFFSET UNITYSDK_OFFSET(0x22D6630)
#define UICHARACTERBASICINFO_ONCLICKSKILLGROWTH_OFFSET UNITYSDK_OFFSET(0x22D6B20)
#define UICHARACTERBASICINFO__ONCLICKSKILLGROWTH_B__50_0_OFFSET UNITYSDK_OFFSET(0x22D6D60)
#define UICHARACTERBASICINFO_SETPOTENTIALBUTTONLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x22D6E30)
#define UICHARACTERBASICINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22D6EE0)
#define UICHARACTERBASICINFO_ONFINISHEQUIPBOUNDEFFECT_OFFSET UNITYSDK_OFFSET(0x22D7060)
#define UICHARACTERBASICINFO__ONCLICKEQUIPGROWTH_B__51_2_OFFSET UNITYSDK_OFFSET(0x22D7180)
#define UICHARACTERBASICINFO_SET_RECORDOPENPOPUPNAME_OFFSET UNITYSDK_OFFSET(0x22D7220)
#define UICHARACTERBASICINFO_ONCLICKWEAPONGROWTH_OFFSET UNITYSDK_OFFSET(0x22D6C80)
#define UICHARACTERBASICINFO_ONCLICKEQUIPGROWTH_OFFSET UNITYSDK_OFFSET(0x22D6C00)
#define UICHARACTERBASICINFO__ONCLICKDETAILINFO_B__48_0_OFFSET UNITYSDK_OFFSET(0x22D72B0)
#define UICHARACTERBASICINFO_ONCLICKDETAILINFO_OFFSET UNITYSDK_OFFSET(0x22D72E0)
#define UICHARACTERBASICINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x22D73C0)
#define UICHARACTERBASICINFO_SETEQUIPMENTDISPLAY_OFFSET UNITYSDK_OFFSET(0x22D7440)
#define UICHARACTERBASICINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x22D7960)
#define UICHARACTERBASICINFO__ONCLICKEQUIPGROWTH_G__SETREPEATERANDOPEN|51_0_OFFSET UNITYSDK_OFFSET(0x22D7240)
#define UICHARACTERBASICINFO__ONCLICKWEAPON_B__52_0_OFFSET UNITYSDK_OFFSET(0x22D7D40)

	inline static constexpr unsigned int UICharacterBasicInfo_TypeDefinitionIndex = 4839;

	class UICharacterBasicInfo : public Il2CppObject
	{
	public:
		UICharacterInfo* characterInfo; // 0x18
		UICharacterWeaponInfo* weaponInfo; // 0x20
		UIGearCard* gearSlot; // 0x28
		Il2CppObject* skillInfoItems; // 0x30
		MXButton* secretstoneExchangeButton; // 0x38
		UILabel* secretStoneCount; // 0x40
		UITexture* secretStoneIcon; // 0x48
		TooltipButton* secretStoneTooltip; // 0x50
		::UnityEngine::GameObject* enableExchangeButton; // 0x58
		::UnityEngine::GameObject* disableExchangeButton; // 0x60
		MXButton* detailButton; // 0x68
		MXButton* weaponButton; // 0x70
		MXButton* weaponGrowthButton; // 0x78
		::UnityEngine::GameObject* weaponGrowthDisableButton; // 0x80
		MXButton* equipmentGrowthButton; // 0x88
		::UnityEngine::GameObject* equipmentGrowthDisable; // 0x90
		MXButton* skillGrowthButton; // 0x98
		::UnityEngine::GameObject* gachaWindow; // 0xA0
		::UnityEngine::GameObject* gainWindow; // 0xA8
		::Il2CppArray<::System::Object*>* openConditionButtonControllers; // 0xB0
		Il2CppObject* equipBoundEffects; // 0xB8
		UILabel* displayExplanationLabel; // 0xC0
		MXButton* potentialGrowthButton; // 0xC8
		::UnityEngine::GameObject* potentialGrowthButtonLockRoot; // 0xD0
		::System::String* _RecordOpenPopupName_k__BackingField; // 0xD8
		::System::Int32 skillInfoItemIndex; // 0xE0
		CharacterObject* charObj; // 0xE8
		::System::Boolean hasCharacterInfo; // 0xF0
		CharacterDetailData* detailInfo; // 0xF8
		::System::Int64 requiredAmountForShop; // 0x100

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickEquipGrowth_b__51_1(UIEquipmentGrowth* arg)
		{
			((::System::Void(*)(UIEquipmentGrowth*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO__ONCLICKEQUIPGROWTH_B__51_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickWeaponGrowth_b__53_0(UIPopup_WeaponGrowth* arg)
		{
			((::System::Void(*)(UIPopup_WeaponGrowth*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO__ONCLICKWEAPONGROWTH_B__53_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharaterInfoDisplay(CharacterDetailDisplayState* arg, ::System::String* str)
		{
			((::System::Void(*)(CharacterDetailDisplayState*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_SETCHARATERINFODISPLAY_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean CheckPopupTabRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_CHECKPOPUPTABREFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickPotentialGrowthButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONCLICKPOTENTIALGROWTHBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickSecretstoneExchange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONCLICKSECRETSTONEEXCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void PlayEquipmentBoundEffect(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_PLAYEQUIPMENTBOUNDEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayCanMountedTween(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_PLAYCANMOUNTEDTWEEN_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickWeapon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONCLICKWEAPON_OFFSET))(nullptr);
		}

		::System::Boolean SetSkillInfo(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int32 arg2, ::System::String* str, ::System::Int32 arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_SETSKILLINFO_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::System::String* get_RecordOpenPopupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_GET_RECORDOPENPOPUPNAME_OFFSET))(nullptr);
		}

		::System::Void ResetEquipmentBoundEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_RESETEQUIPMENTBOUNDEFFECT_OFFSET))(nullptr);
		}

		::System::Void _OnClickPotentialGrowthButton_b__56_1(UIPotentialGrowth* arg)
		{
			((::System::Void(*)(UIPotentialGrowth*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO__ONCLICKPOTENTIALGROWTHBUTTON_B__56_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetSkillDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_SETSKILLDISPLAY_OFFSET))(nullptr);
		}

		::System::Void SetCharacterGainRecipe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_SETCHARACTERGAINRECIPE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEquipmentSlotClickMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_HANDLEEQUIPMENTSLOTCLICKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckOpenGrowthPopupRecord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_CHECKOPENGROWTHPOPUPRECORD_OFFSET))(nullptr);
		}

		::System::Void OnClickSkillGrowth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONCLICKSKILLGROWTH_OFFSET))(nullptr);
		}

		::System::Void _OnClickSkillGrowth_b__50_0(UIPopup_Skill_LevelUp* arg)
		{
			((::System::Void(*)(UIPopup_Skill_LevelUp*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO__ONCLICKSKILLGROWTH_B__50_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetPotentialButtonLockState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_SETPOTENTIALBUTTONLOCKSTATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnFinishEquipBoundEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONFINISHEQUIPBOUNDEFFECT_OFFSET))(nullptr);
		}

		::System::Void _OnClickEquipGrowth_b__51_2(UIEquipmentGrowth* arg)
		{
			((::System::Void(*)(UIEquipmentGrowth*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO__ONCLICKEQUIPGROWTH_B__51_2_OFFSET))(arg, nullptr);
		}

		::System::Void set_RecordOpenPopupName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_SET_RECORDOPENPOPUPNAME_OFFSET))(str, nullptr);
		}

		::System::Void OnClickWeaponGrowth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONCLICKWEAPONGROWTH_OFFSET))(nullptr);
		}

		::System::Void OnClickEquipGrowth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONCLICKEQUIPGROWTH_OFFSET))(nullptr);
		}

		::System::Void _OnClickDetailInfo_b__48_0(UIPopup_StatDetail* arg)
		{
			((::System::Void(*)(UIPopup_StatDetail*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO__ONCLICKDETAILINFO_B__48_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDetailInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_ONCLICKDETAILINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEquipmentDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_SETEQUIPMENTDISPLAY_OFFSET))(nullptr);
		}

		::System::Void SetData(CharacterDetailData* arg)
		{
			((::System::Void(*)(CharacterDetailData*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnClickEquipGrowth_g__SetRepeaterAndOpen|51_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO__ONCLICKEQUIPGROWTH_G__SETREPEATERANDOPEN|51_0_OFFSET))(nullptr);
		}

		::System::Void _OnClickWeapon_b__52_0(UIPopup_WeaponInfo* arg)
		{
			((::System::Void(*)(UIPopup_WeaponInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERBASICINFO__ONCLICKWEAPON_B__52_0_OFFSET))(arg, nullptr);
		}

	};

