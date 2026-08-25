#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class ItemObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }

#define UINONEQUIPMENTCARD_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x26B3580)
#define UINONEQUIPMENTCARD_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x26B3590)
#define UINONEQUIPMENTCARD_GET_SELECTEDASINGREDIENT_OFFSET UNITYSDK_OFFSET(0x26B36E0)
#define UINONEQUIPMENTCARD_SET_SELECTEDASINGREDIENT_OFFSET UNITYSDK_OFFSET(0x26B36F0)
#define UINONEQUIPMENTCARD_GET_ITEMOBJECT_OFFSET UNITYSDK_OFFSET(0x26B3720)
#define UINONEQUIPMENTCARD_SET_ITEMOBJECT_OFFSET UNITYSDK_OFFSET(0x26B3730)
#define UINONEQUIPMENTCARD_GET_ISMYASSET_OFFSET UNITYSDK_OFFSET(0x26B3750)
#define UINONEQUIPMENTCARD_SET_ISMYASSET_OFFSET UNITYSDK_OFFSET(0x26B3760)
#define UINONEQUIPMENTCARD_HANDLENONEQUIPMENTCARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x26B3770)
#define UINONEQUIPMENTCARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26B35E0)
#define UINONEQUIPMENTCARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26B3850)
#define UINONEQUIPMENTCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x26B39D0)
#define UINONEQUIPMENTCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x26B39F0)
#define UINONEQUIPMENTCARD_SETCALLBACKLISTENER_OFFSET UNITYSDK_OFFSET(0x26B3F20)
#define UINONEQUIPMENTCARD_REFRASH_OFFSET UNITYSDK_OFFSET(0x26B3F40)
#define UINONEQUIPMENTCARD_SETTOOLTIPENABLE_OFFSET UNITYSDK_OFFSET(0x26B4000)
#define UINONEQUIPMENTCARD_ONCLICK_OFFSET UNITYSDK_OFFSET(0x26B4140)
#define UINONEQUIPMENTCARD_SETUI_OFFSET UNITYSDK_OFFSET(0x26B3B00)
#define UINONEQUIPMENTCARD_SETMEMORYLOBBYUI_OFFSET UNITYSDK_OFFSET(0x26B45E0)
#define UINONEQUIPMENTCARD_SETCURRENCYUI_OFFSET UNITYSDK_OFFSET(0x26B42E0)
#define UINONEQUIPMENTCARD_SETEXPUI_OFFSET UNITYSDK_OFFSET(0x26B44A0)
#define UINONEQUIPMENTCARD_SETNONEQUIPMENTUI_OFFSET UNITYSDK_OFFSET(0x26B5200)
#define UINONEQUIPMENTCARD_SETFURNITUREUI_OFFSET UNITYSDK_OFFSET(0x26B4770)
#define UINONEQUIPMENTCARD_SETIDCARDBGUI_OFFSET UNITYSDK_OFFSET(0x26B4A40)
#define UINONEQUIPMENTCARD_SETEMBLEMCARDBGUI_OFFSET UNITYSDK_OFFSET(0x26B4C80)
#define UINONEQUIPMENTCARD_SETSTICKERUI_OFFSET UNITYSDK_OFFSET(0x26B4F40)
#define UINONEQUIPMENTCARD_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x26B5420)
#define UINONEQUIPMENTCARD_SETAMOUNTUI_OFFSET UNITYSDK_OFFSET(0x26B54F0)
#define UINONEQUIPMENTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B5580)

	inline static constexpr unsigned int UINonEquipmentCard_TypeDefinitionIndex = 6904;

	class UINonEquipmentCard : public ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand
	{
	public:
		UITexture* ItemImage; // 0x88
		UILabel* AmountText; // 0x90
		::UnityEngine::GameObject* StarGradeObject; // 0x98
		UILabel* StarGradeText; // 0xA0
		::UnityEngine::GameObject* ExpireDateObject; // 0xA8
		::UnityEngine::GameObject* interactionFurniture; // 0xB0
		::System::Boolean isSelected; // 0xB8
		Il2CppObject* onClickCallback; // 0xC0
		ItemObject* _ItemObject_k__BackingField; // 0xC8
		::System::Boolean _isMyAsset_k__BackingField; // 0xD0

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SelectedAsIngredient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_GET_SELECTEDASINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void set_SelectedAsIngredient(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SET_SELECTEDASINGREDIENT_OFFSET))(arg, nullptr);
		}

		ItemObject* get_ItemObject()
		{
			return ((ItemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_GET_ITEMOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_ItemObject(ItemObject* arg)
		{
			((::System::Void(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SET_ITEMOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isMyAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_GET_ISMYASSET_OFFSET))(nullptr);
		}

		::System::Void set_isMyAsset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SET_ISMYASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleNonEquipmentCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_HANDLENONEQUIPMENTCARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(ItemObject* arg, ::System::Boolean arg2, ::FlatData::RewardTag* arg3)
		{
			((::System::Void(*)(ItemObject*, ::System::Boolean, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(ItemObject* arg, Il2CppObject* arg2, ::FlatData::RewardTag* arg3)
		{
			((::System::Void(*)(ItemObject*, Il2CppObject*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetCallbackListener(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETCALLBACKLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void Refrash()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_REFRASH_OFFSET))(nullptr);
		}

		::System::Void SetToolTipEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETTOOLTIPENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetUI(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatData::RewardTag* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatData::RewardTag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETUI_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetMemoryLobbyUI(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETMEMORYLOBBYUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetCurrencyUI(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETCURRENCYUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetExpUI(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETEXPUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetNonEquipmentUI(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETNONEQUIPMENTUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetFurnitureUI(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETFURNITUREUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetIdCardBgUI(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETIDCARDBGUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEmblemCardBgUI(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETEMBLEMCARDBGUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetStickerUI(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETSTICKERUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void SetAmountUI(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_SETAMOUNTUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_.CTOR_OFFSET))(nullptr);
		}

	};

