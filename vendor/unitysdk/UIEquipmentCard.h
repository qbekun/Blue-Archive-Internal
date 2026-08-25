#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class TweenAlpha;
class EquipmentObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class RewardTag; }
class AssetObjectBase;
namespace MX::GameLogic::DBModel { class EquipmentDB; }
namespace MX::Data::Excel { class EquipmentExcel; }
class CharacterObject;
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace FlatData { class EquipmentCategory; }

#define UIEQUIPMENTCARD_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x2416500)
#define UIEQUIPMENTCARD_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x2416510)
#define UIEQUIPMENTCARD_GET_ITEMOBJECT_OFFSET UNITYSDK_OFFSET(0x2416590)
#define UIEQUIPMENTCARD_SET_ITEMOBJECT_OFFSET UNITYSDK_OFFSET(0x24165A0)
#define UIEQUIPMENTCARD_GET_ISMYASSET_OFFSET UNITYSDK_OFFSET(0x24165C0)
#define UIEQUIPMENTCARD_SET_ISMYASSET_OFFSET UNITYSDK_OFFSET(0x24165D0)
#define UIEQUIPMENTCARD_HANDLEEQUIPMENTCARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x24165E0)
#define UIEQUIPMENTCARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24166C0)
#define UIEQUIPMENTCARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24167C0)
#define UIEQUIPMENTCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x2416940)
#define UIEQUIPMENTCARD_SETUI_OFFSET UNITYSDK_OFFSET(0x2416AC0)
#define UIEQUIPMENTCARD_SETUIFORASSISTEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x2417210)
#define UIEQUIPMENTCARD_SETCALLBACKLISTENER_OFFSET UNITYSDK_OFFSET(0x24177C0)
#define UIEQUIPMENTCARD_ONCLICK_OFFSET UNITYSDK_OFFSET(0x24177E0)
#define UIEQUIPMENTCARD_SETUI_OFFSET UNITYSDK_OFFSET(0x2417A10)
#define UIEQUIPMENTCARD_SETEQUIPMENTMOUNTINGSLOT_OFFSET UNITYSDK_OFFSET(0x2418040)
#define UIEQUIPMENTCARD_SETAMOUNTUI_OFFSET UNITYSDK_OFFSET(0x24182A0)
#define UIEQUIPMENTCARD_SETEQUIPMENTMOUNTINGANDLOCK_OFFSET UNITYSDK_OFFSET(0x2418360)
#define UIEQUIPMENTCARD_SETNOTMOUNTING_OFFSET UNITYSDK_OFFSET(0x2416A40)
#define UIEQUIPMENTCARD_SETTOOLTIPENABLE_OFFSET UNITYSDK_OFFSET(0x2418520)
#define UIEQUIPMENTCARD_SETACTIVECARDTIER_OFFSET UNITYSDK_OFFSET(0x24171C0)
#define UIEQUIPMENTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2418660)

	inline static constexpr unsigned int UIEquipmentCard_TypeDefinitionIndex = 5478;

	class UIEquipmentCard : public <nameBuffer>e__FixedBuffer
	{
	public:
		::Il2CppArray<::System::Object*>* ItemImages; // 0x88
		UILabel* LevelText; // 0x90
		UILabel* TierText; // 0x98
		UILabel* CountText; // 0xA0
		UILabel* SlotOpenLevelText; // 0xA8
		::UnityEngine::GameObject* LockItemObject; // 0xB0
		::UnityEngine::GameObject* NonMountItemObject; // 0xB8
		::UnityEngine::GameObject* CardTier; // 0xC0
		TweenAlpha* Dim; // 0xC8
		Il2CppObject* GearBGs; // 0xD0
		::System::Boolean isSelected; // 0xD8
		Il2CppObject* onClickCallback; // 0xE0
		EquipmentObject* _ItemObject_k__BackingField; // 0xE8
		::System::Boolean _isMyAsset_k__BackingField; // 0xF0
		::System::Int32 slotIndex; // 0xF4
		::System::Int64 uniqueId; // 0xF8

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		EquipmentObject* get_ItemObject()
		{
			return ((EquipmentObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_GET_ITEMOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_ItemObject(EquipmentObject* arg)
		{
			((::System::Void(*)(EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SET_ITEMOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isMyAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_GET_ISMYASSET_OFFSET))(nullptr);
		}

		::System::Void set_isMyAsset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SET_ISMYASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEquipmentCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_HANDLEEQUIPMENTCARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(EquipmentObject* arg, ::System::Boolean arg2, ::FlatData::RewardTag* arg3)
		{
			((::System::Void(*)(EquipmentObject*, ::System::Boolean, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetUI(AssetObjectBase* arg, ::FlatData::RewardTag* arg2)
		{
			((::System::Void(*)(AssetObjectBase*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetUIForAssistEquipment(::MX::GameLogic::DBModel::EquipmentDB* arg, ::MX::Data::Excel::EquipmentExcel* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::MX::Data::Excel::EquipmentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETUIFORASSISTEQUIPMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCallbackListener(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETCALLBACKLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::Int64 arg, ::System::Int64 arg2, ::FlatData::RewardTag* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetEquipmentMountingSlot(CharacterObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(CharacterObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETEQUIPMENTMOUNTINGSLOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetAmountUI(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETAMOUNTUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetEquipmentMountingAndLock(::MX::GameLogic::DBModel::AssistCharacterDB* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETEQUIPMENTMOUNTINGANDLOCK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetNotMounting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETNOTMOUNTING_OFFSET))(arg, nullptr);
		}

		::System::Void SetToolTipEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETTOOLTIPENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveCardTier(::FlatData::EquipmentCategory* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::EquipmentCategory*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_SETACTIVECARDTIER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_.CTOR_OFFSET))(nullptr);
		}

	};

