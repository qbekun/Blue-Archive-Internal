#pragma once
#include "unitysdk.h"

class IntTabController;
class UIPopup_Skill_LevelUp;
class UISkillInfo;
class MXToggle;
class UILabel;
class ButtonActivator;
namespace UnityEngine { class GameObject; }
class UIScrollView;
class SkillLevelUpEffectController;
class SkillLevelUpIngredient;
class UIGrid;
class UISkillNormalGrowth_SelectExSkillInfo;
class CharacterObject;
namespace MX::Logic::BattleEntities { class SkillSlot; }
class UISkillLevelUpAdditionalSkillPairs;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISKILLNORMALGROWTH_SETDOT_OFFSET UNITYSDK_OFFSET(0x22ED1A0)
#define UISKILLNORMALGROWTH_ONCLICKLEVELUP_OFFSET UNITYSDK_OFFSET(0x22ED6C0)
#define UISKILLNORMALGROWTH_GET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x22ED9C0)
#define UISKILLNORMALGROWTH_SET_SLOTPARCELS_OFFSET UNITYSDK_OFFSET(0x22ED9D0)
#define UISKILLNORMALGROWTH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22ED9F0)
#define UISKILLNORMALGROWTH__SETSKILLDATA_G__SETSKILLINFO|54_0_OFFSET UNITYSDK_OFFSET(0x22EDB70)
#define UISKILLNORMALGROWTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x22EDCD0)
#define UISKILLNORMALGROWTH_GET_SLOTPARCELS_OFFSET UNITYSDK_OFFSET(0x22EDF20)
#define UISKILLNORMALGROWTH_SET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x22EE010)
#define UISKILLNORMALGROWTH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x22EE020)
#define UISKILLNORMALGROWTH_HIDELEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x22EE210)
#define UISKILLNORMALGROWTH_SETUI_OFFSET UNITYSDK_OFFSET(0x22EE2E0)
#define UISKILLNORMALGROWTH_GET_ADDITIONALSKILLPAIRS_OFFSET UNITYSDK_OFFSET(0x22EFDA0)
#define UISKILLNORMALGROWTH_USESELECTIONONCHANGED_OFFSET UNITYSDK_OFFSET(0x22F0440)
#define UISKILLNORMALGROWTH_SETDATA_OFFSET UNITYSDK_OFFSET(0x22F0520)
#define UISKILLNORMALGROWTH_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET UNITYSDK_OFFSET(0x22F0890)
#define UISKILLNORMALGROWTH__ONCLICKLEVELUP_G__REQUESTSTART|56_0_OFFSET UNITYSDK_OFFSET(0x22ED8A0)
#define UISKILLNORMALGROWTH_HANDLESKILLLEVELUPRESPONSEMESSGE_OFFSET UNITYSDK_OFFSET(0x22F0920)
#define UISKILLNORMALGROWTH_GET_ISLEVELUPEFFECTON_OFFSET UNITYSDK_OFFSET(0x22F0AA0)
#define UISKILLNORMALGROWTH_SETINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x22EEC00)
#define UISKILLNORMALGROWTH_ONSKILLTABCHANGED_OFFSET UNITYSDK_OFFSET(0x22F0B40)
#define UISKILLNORMALGROWTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F0BD0)
#define UISKILLNORMALGROWTH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22F0BE0)
#define UISKILLNORMALGROWTH_SETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x22F0660)
#define UISKILLNORMALGROWTH_COPLAYLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x22F0A30)
#define UISKILLNORMALGROWTH_GET_EFFECTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x22EE2C0)

	inline static constexpr unsigned int UISkillNormalGrowth_TypeDefinitionIndex = 4889;

	class UISkillNormalGrowth : public Il2CppObject
	{
	public:
		Il2CppObject* SkillInfos; // 0x18
		Il2CppObject* Dots; // 0x20
		IntTabController* SkillTab; // 0x28
		UIPopup_Skill_LevelUp* skillLevelUpPopup; // 0x30
		UISkillInfo* currentSkillInfo; // 0x38
		UISkillInfo* nextSkillInfo; // 0x40
		MXToggle* useSelectionItemToggle; // 0x48
		UILabel* levelUpCostLabel; // 0x50
		UILabel* notEnoughLabel; // 0x58
		ButtonActivator* levelUpButton; // 0x60
		::UnityEngine::GameObject* levelUpObj; // 0x68
		::UnityEngine::GameObject* DisablelevelUpObj; // 0x70
		Il2CppObject* maxLevelOn; // 0x78
		Il2CppObject* maxLevelOff; // 0x80
		Il2CppObject* skillDescTextScrollViews; // 0x88
		UIScrollView* levelUpIngredientScrollView; // 0x90
		SkillLevelUpEffectController* normalEffectController; // 0x98
		SkillLevelUpEffectController* exEffectController; // 0xA0
		SkillLevelUpIngredient* ingredientPrefab; // 0xA8
		UIGrid* grid; // 0xB0
		::UnityEngine::GameObject* originalObj; // 0xB8
		::UnityEngine::GameObject* selectExSkillInfoObj; // 0xC0
		UISkillNormalGrowth_SelectExSkillInfo* selectExSkillInfo; // 0xC8
		Il2CppObject* items; // 0xD0
		CharacterObject* characterObject; // 0xD8
		Il2CppObject* skillSlots; // 0x0
		::System::Int32 targetLevel; // 0xE0
		::System::String* skillGroupId; // 0xE8
		::MX::Logic::BattleEntities::SkillSlot* skillSlot; // 0xF0
		::System::Int32 skillInfoItemIndex; // 0xF4
		Il2CppObject* ingredients; // 0xF8
		Il2CppObject* replaceInfos; // 0x100
		::System::Boolean _UseSelectionItem_k__BackingField; // 0x108
		UISkillLevelUpAdditionalSkillPairs* additionalSkillPairs; // 0x110

		::System::Void SetDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_SETDOT_OFFSET))(nullptr);
		}

		::System::Void OnClickLevelUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_ONCLICKLEVELUP_OFFSET))(nullptr);
		}

		::System::Boolean get_UseSelectionItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_GET_USESELECTIONITEM_OFFSET))(nullptr);
		}

		::System::Void set_SlotParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_SET_SLOTPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean _SetSkillData_g__SetSkillInfo|54_0(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int32 arg2, ::System::String* str)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH__SETSKILLDATA_G__SETSKILLINFO|54_0_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_AWAKE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SlotParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_GET_SLOTPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_UseSelectionItem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_SET_USESELECTIONITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void HideLevelUpEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_HIDELEVELUPEFFECT_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_SETUI_OFFSET))(nullptr);
		}

		UISkillLevelUpAdditionalSkillPairs* get_AdditionalSkillPairs()
		{
			return ((UISkillLevelUpAdditionalSkillPairs*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_GET_ADDITIONALSKILLPAIRS_OFFSET))(nullptr);
		}

		::System::Void UseSelectionOnChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_USESELECTIONONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(CharacterObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(CharacterObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlignScrollViewOnClickParcel(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickLevelUp_g__RequestStart|56_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH__ONCLICKLEVELUP_G__REQUESTSTART|56_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleSkillLevelUpResponseMessge(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_HANDLESKILLLEVELUPRESPONSEMESSGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLevelUpEffectOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_GET_ISLEVELUPEFFECTON_OFFSET))(nullptr);
		}

		::System::Void SetIngredients(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_SETINGREDIENTS_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkillTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_ONSKILLTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetSkillData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_SETSKILLDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayLevelUpEffect()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_COPLAYLEVELUPEFFECT_OFFSET))(nullptr);
		}

		SkillLevelUpEffectController* get_EffectController()
		{
			return ((SkillLevelUpEffectController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_GET_EFFECTCONTROLLER_OFFSET))(nullptr);
		}

	};

