#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define SELECTEDMULTISWEEPITEMINFO_SET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0x270BE40)
#define SELECTEDMULTISWEEPITEMINFO_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0x270BE50)
#define SELECTEDMULTISWEEPITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x270BD70)
#define SELECTEDMULTISWEEPITEMINFO_GET_ITEMSELECT_OFFSET UNITYSDK_OFFSET(0x270BE60)
#define SELECTEDMULTISWEEPITEMINFO_SET_ITEMSELECT_OFFSET UNITYSDK_OFFSET(0x270BE70)
#define SELECTEDMULTISWEEPITEMINFO_GET_ONSELECTED_OFFSET UNITYSDK_OFFSET(0x270BE80)
#define SELECTEDMULTISWEEPITEMINFO_GET_ONSELECTEDASINGREDIENT_OFFSET UNITYSDK_OFFSET(0x270BE90)
#define SELECTEDMULTISWEEPITEMINFO_SET_ONSELECTEDASINGREDIENT_OFFSET UNITYSDK_OFFSET(0x270BEA0)
#define SELECTEDMULTISWEEPITEMINFO_SET_ONSELECTED_OFFSET UNITYSDK_OFFSET(0x270BEB0)

	inline static constexpr unsigned int SelectedMultiSweepItemInfo_TypeDefinitionIndex = 7119;

	class SelectedMultiSweepItemInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _onSelected_k__BackingField; // 0x10
		Il2CppObject* _onSelectedAsIngredient_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* _itemInfo_k__BackingField; // 0x20
		::System::Boolean _ItemSelect_k__BackingField; // 0x28

		::System::Void set_itemInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDMULTISWEEPITEMINFO_SET_ITEMINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_itemInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTEDMULTISWEEPITEMINFO_GET_ITEMINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelInfo* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDMULTISWEEPITEMINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_ItemSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTEDMULTISWEEPITEMINFO_GET_ITEMSELECT_OFFSET))(nullptr);
		}

		::System::Void set_ItemSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDMULTISWEEPITEMINFO_SET_ITEMSELECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_onSelected()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTEDMULTISWEEPITEMINFO_GET_ONSELECTED_OFFSET))(nullptr);
		}

		Il2CppObject* get_onSelectedAsIngredient()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTEDMULTISWEEPITEMINFO_GET_ONSELECTEDASINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void set_onSelectedAsIngredient(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDMULTISWEEPITEMINFO_SET_ONSELECTEDASINGREDIENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_onSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEDMULTISWEEPITEMINFO_SET_ONSELECTED_OFFSET))(arg, nullptr);
		}

	};

