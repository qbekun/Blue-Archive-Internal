#pragma once
#include "unitysdk.h"

class UIEquipmentGrowth;
class InventoryScrollViewController;
class UIGearBatchModeSlotDisplay;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Transform; }
class UIBatchModeConsumeItem;
class MXToggle;
class MXButton;
class UIEquipmentBatchGrowthResultEffect;
class CharacterObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEQUIPMENTBATCHGROWTH_GET_TOTALNEEDCOST_OFFSET UNITYSDK_OFFSET(0x23F6AC0)
#define UIEQUIPMENTBATCHGROWTH_SET_TOTALNEEDCOST_OFFSET UNITYSDK_OFFSET(0x23F6AD0)
#define UIEQUIPMENTBATCHGROWTH_GET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x23F6AE0)
#define UIEQUIPMENTBATCHGROWTH_SET_USESELECTIONITEM_OFFSET UNITYSDK_OFFSET(0x23F6AF0)
#define UIEQUIPMENTBATCHGROWTH_GET_EXPITEMS_OFFSET UNITYSDK_OFFSET(0x23F6B00)
#define UIEQUIPMENTBATCHGROWTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x23F6B10)
#define UIEQUIPMENTBATCHGROWTH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23F6CA0)
#define UIEQUIPMENTBATCHGROWTH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23F6CB0)
#define UIEQUIPMENTBATCHGROWTH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23F6EB0)
#define UIEQUIPMENTBATCHGROWTH_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F7130)
#define UIEQUIPMENTBATCHGROWTH_GETTOTALINPUTHISTORY_OFFSET UNITYSDK_OFFSET(0x23F8E30)
#define UIEQUIPMENTBATCHGROWTH_REFRESHCONSUMELIST_OFFSET UNITYSDK_OFFSET(0x23F7F90)
#define UIEQUIPMENTBATCHGROWTH_REFRESHCONSUMELIST_OFFSET UNITYSDK_OFFSET(0x23F9DE0)
#define UIEQUIPMENTBATCHGROWTH_SETREQUESTDBREPLACEINFO_OFFSET UNITYSDK_OFFSET(0x23FA5F0)
#define UIEQUIPMENTBATCHGROWTH_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET UNITYSDK_OFFSET(0x23FB130)
#define UIEQUIPMENTBATCHGROWTH_ONCLICKBATCHMODEUP_OFFSET UNITYSDK_OFFSET(0x23FB1D0)
#define UIEQUIPMENTBATCHGROWTH_HANDLEBATCHMODEUP_OFFSET UNITYSDK_OFFSET(0x23FBF80)
#define UIEQUIPMENTBATCHGROWTH_CO_DIRECTING_OFFSET UNITYSDK_OFFSET(0x23FC120)
#define UIEQUIPMENTBATCHGROWTH_USESELECTIONONCHANGED_OFFSET UNITYSDK_OFFSET(0x23FC1B0)
#define UIEQUIPMENTBATCHGROWTH_HANDLEEQUIPMENTBATCHMODEREFRESHMESSAGE_OFFSET UNITYSDK_OFFSET(0x23FC3A0)
#define UIEQUIPMENTBATCHGROWTH_ISEFFECTPLAYING_OFFSET UNITYSDK_OFFSET(0x23FC410)
#define UIEQUIPMENTBATCHGROWTH_APPLYCHANGEPIECE_OFFSET UNITYSDK_OFFSET(0x23F9390)
#define UIEQUIPMENTBATCHGROWTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x23FCA90)
#define UIEQUIPMENTBATCHGROWTH__SETREQUESTDBREPLACEINFO_G__GETSELECTTICKETREPLACEINFO|36_1_OFFSET UNITYSDK_OFFSET(0x23FA9B0)
#define UIEQUIPMENTBATCHGROWTH__ONCLICKBATCHMODEUP_G__REQUESTSTART|38_1_OFFSET UNITYSDK_OFFSET(0x23FB600)

	inline static constexpr unsigned int UIEquipmentBatchGrowth_TypeDefinitionIndex = 5437;

	class UIEquipmentBatchGrowth : public Il2CppObject
	{
	public:
		UIEquipmentGrowth* equipmentGrowth; // 0x18
		InventoryScrollViewController* ScrollView; // 0x20
		Il2CppObject* equipmentSlots; // 0x28
		UIGearBatchModeSlotDisplay* gearSlot; // 0x30
		::UnityEngine::GameObject* emptyLabel; // 0x38
		UILabel* expLabel; // 0x40
		UILabel* costLabel; // 0x48
		::UnityEngine::Transform* expItemsRoot; // 0x50
		UIBatchModeConsumeItem* consumeItemPrefab; // 0x58
		MXToggle* useSelectionItemToggle; // 0x60
		MXButton* batchModeButton; // 0x68
		::UnityEngine::GameObject* batchModeDisableButton; // 0x70
		UIEquipmentBatchGrowthResultEffect* effect; // 0x78
		UILabel* notEnoughLabel; // 0x80
		Il2CppObject* expItems; // 0x88
		Il2CppObject* dic_Record; // 0x90
		::System::Int32 columnCount; // 0x0
		CharacterObject* characterObj; // 0x98
		::System::Int64 _TotalNeedCost_k__BackingField; // 0xA0
		::System::Boolean _UseSelectionItem_k__BackingField; // 0xA8

		::System::Int64 get_TotalNeedCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_GET_TOTALNEEDCOST_OFFSET))(nullptr);
		}

		::System::Void set_TotalNeedCost(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_SET_TOTALNEEDCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseSelectionItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_GET_USESELECTIONITEM_OFFSET))(nullptr);
		}

		::System::Void set_UseSelectionItem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_SET_USESELECTIONITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExpItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_GET_EXPITEMS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIEquipmentGrowth* arg)
		{
			((::System::Void(*)(UIEquipmentGrowth*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_SETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTotalInputHistory()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_GETTOTALINPUTHISTORY_OFFSET))(nullptr);
		}

		::System::Void RefreshConsumeList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_REFRESHCONSUMELIST_OFFSET))(nullptr);
		}

		::System::Void RefreshConsumeList(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_REFRESHCONSUMELIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRequestDBReplaceInfo(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_SETREQUESTDBREPLACEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlignScrollViewOnClickParcel(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBatchModeUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_ONCLICKBATCHMODEUP_OFFSET))(nullptr);
		}

		::System::Boolean HandleBatchModeUp(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_HANDLEBATCHMODEUP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_Directing()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_CO_DIRECTING_OFFSET))(nullptr);
		}

		::System::Void UseSelectionOnChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_USESELECTIONONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleEquipmentBatchModeRefreshMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_HANDLEEQUIPMENTBATCHMODEREFRESHMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEffectPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_ISEFFECTPLAYING_OFFSET))(nullptr);
		}

		::System::Void ApplyChangePiece(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_APPLYCHANGEPIECE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _SetRequestDBReplaceInfo_g__GetSelectTicketReplaceInfo|36_1(Il2CppObject* arg, Il2CppObject* arg2, <>c__DisplayClass36_0&* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, <>c__DisplayClass36_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH__SETREQUESTDBREPLACEINFO_G__GETSELECTTICKETREPLACEINFO|36_1_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OnClickBatchModeUp_g__RequestStart|38_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHGROWTH__ONCLICKBATCHMODEUP_G__REQUESTSTART|38_1_OFFSET))(nullptr);
		}

	};

