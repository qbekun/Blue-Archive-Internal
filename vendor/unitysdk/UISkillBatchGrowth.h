#pragma once
#include "unitysdk.h"

class UIPopup_Skill_LevelUp;
class InventoryScrollViewController;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
class MXToggle;
class SkillLevelUpEffectController;
class UISkillLevelUpBatchGrowthResultEffect;
class CharacterObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class SkillBatchModeItemInputRecord;

#define UISKILLBATCHGROWTH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22E2890)
#define UISKILLBATCHGROWTH_ONCLICKBATCHLEVELUP_OFFSET UNITYSDK_OFFSET(0x22E2A10)
#define UISKILLBATCHGROWTH_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET UNITYSDK_OFFSET(0x22E2CF0)
#define UISKILLBATCHGROWTH_HIDELEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x22E2D90)
#define UISKILLBATCHGROWTH_GET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x22E2E20)
#define UISKILLBATCHGROWTH_SETREQUESTDBREPLACEINFO_OFFSET UNITYSDK_OFFSET(0x22E2E30)
#define UISKILLBATCHGROWTH_SET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x22E3DC0)
#define UISKILLBATCHGROWTH_SETDATA_OFFSET UNITYSDK_OFFSET(0x22E3DD0)
#define UISKILLBATCHGROWTH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22E4280)
#define UISKILLBATCHGROWTH_GET_ISLEVELUPEFFECTON_OFFSET UNITYSDK_OFFSET(0x22E4480)
#define UISKILLBATCHGROWTH_GETTOTALINPUTHISTORY_OFFSET UNITYSDK_OFFSET(0x22E4500)
#define UISKILLBATCHGROWTH_REFRESHCONSUMELIST_OFFSET UNITYSDK_OFFSET(0x22E47E0)
#define UISKILLBATCHGROWTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x22E50E0)
#define UISKILLBATCHGROWTH_USESELECTIONONCHANGED_OFFSET UNITYSDK_OFFSET(0x22E50F0)
#define UISKILLBATCHGROWTH_HANDLEBATCHSKILLLEVELUPRESPONSEMESSGE_OFFSET UNITYSDK_OFFSET(0x22E6050)
#define UISKILLBATCHGROWTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x22E61D0)
#define UISKILLBATCHGROWTH_GET_CANBATCHLEVELUP_OFFSET UNITYSDK_OFFSET(0x22E6360)
#define UISKILLBATCHGROWTH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x22E6370)
#define UISKILLBATCHGROWTH_REFRESH_OFFSET UNITYSDK_OFFSET(0x22E52D0)
#define UISKILLBATCHGROWTH_SET_CANBATCHLEVELUP_OFFSET UNITYSDK_OFFSET(0x22E6560)
#define UISKILLBATCHGROWTH_COPLAYLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x22E6160)

	inline static constexpr unsigned int UISkillBatchGrowth_TypeDefinitionIndex = 4869;

	class UISkillBatchGrowth : public Il2CppObject
	{
	public:
		UIPopup_Skill_LevelUp* skillLevelUpPopup; // 0x18
		InventoryScrollViewController* ScrollView; // 0x20
		UILabel* levelUpCostLabel; // 0x28
		UILabel* notEnoughLabel; // 0x30
		::UnityEngine::GameObject* emptyLabel; // 0x38
		MXButton* levelUpButton; // 0x40
		MXToggle* useSelectionItemToggle; // 0x48
		::UnityEngine::GameObject* levelUpDisableButton; // 0x50
		Il2CppObject* slots; // 0x58
		SkillLevelUpEffectController* exEffectController; // 0x60
		UISkillLevelUpBatchGrowthResultEffect* effectController; // 0x68
		CharacterObject* characterObject; // 0x70
		::System::Boolean _CanBatchLevelUp_k__BackingField; // 0x78
		::System::Boolean _UseSelectionItem_k__BackingField; // 0x79
		Il2CppObject* skillSlots; // 0x0
		::System::Int32 columnCount; // 0x0

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickBatchLevelUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_ONCLICKBATCHLEVELUP_OFFSET))(nullptr);
		}

		::System::Boolean AlignScrollViewOnClickParcel(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void HideLevelUpEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_HIDELEVELUPEFFECT_OFFSET))(nullptr);
		}

		::System::Boolean get_UseSelectionItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_GET_USESELECTIONITEM_OFFSET))(nullptr);
		}

		::System::Void SetRequestDBReplaceInfo(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_SETREQUESTDBREPLACEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_UseSelectionItem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_SET_USESELECTIONITEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLevelUpEffectOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_GET_ISLEVELUPEFFECTON_OFFSET))(nullptr);
		}

		SkillBatchModeItemInputRecord* GetTotalInputHistory()
		{
			return ((SkillBatchModeItemInputRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_GETTOTALINPUTHISTORY_OFFSET))(nullptr);
		}

		::System::Void RefreshConsumeList(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_REFRESHCONSUMELIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UseSelectionOnChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_USESELECTIONONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleBatchSkillLevelUpResponseMessge(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_HANDLEBATCHSKILLLEVELUPRESPONSEMESSGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBatchLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_GET_CANBATCHLEVELUP_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_REFRESH_OFFSET))(nullptr);
		}

		::System::Void set_CanBatchLevelUp(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_SET_CANBATCHLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayLevelUpEffect()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLBATCHGROWTH_COPLAYLEVELUPEFFECT_OFFSET))(nullptr);
		}

	};

