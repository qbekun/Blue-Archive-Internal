#pragma once
#include "unitysdk.h"

namespace FlatData { class FurnitureCategory; }
namespace FlatData { class FurnitureSubCategory; }
class FurnitureObject;
class SortingRule;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIFURNITURELIST_2D__GETDATALIST_B__16_4_OFFSET UNITYSDK_OFFSET(0x2589550)
#define UIFURNITURELIST_2D_SETUI_OFFSET UNITYSDK_OFFSET(0x2589580)
#define UIFURNITURELIST_2D_ONSORT_OFFSET UNITYSDK_OFFSET(0x2589630)
#define UIFURNITURELIST_2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2589640)
#define UIFURNITURELIST_2D_HANDLEFURNITURECARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x25897C0)
#define UIFURNITURELIST_2D_GET_MAINCATEGORY_OFFSET UNITYSDK_OFFSET(0x25899A0)
#define UIFURNITURELIST_2D_REFRESHELEMENT_OFFSET UNITYSDK_OFFSET(0x25899B0)
#define UIFURNITURELIST_2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2589A30)
#define UIFURNITURELIST_2D_GET_SUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x2589A70)
#define UIFURNITURELIST_2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2589A80)
#define UIFURNITURELIST_2D_GET_SORTEDLIST_OFFSET UNITYSDK_OFFSET(0x2589B80)
#define UIFURNITURELIST_2D_SET_SUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x2589B90)
#define UIFURNITURELIST_2D_SET_MAINCATEGORY_OFFSET UNITYSDK_OFFSET(0x2589BA0)
#define UIFURNITURELIST_2D_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x2589BB0)
#define UIFURNITURELIST_2D__GETDATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0x2589EF0)
#define UIFURNITURELIST_2D_SET_SORTEDLIST_OFFSET UNITYSDK_OFFSET(0x2589F20)

	inline static constexpr unsigned int UIFurnitureList_2D_TypeDefinitionIndex = 6230;

	class UIFurnitureList_2D : public ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand
	{
	public:
		::FlatData::FurnitureCategory* _MainCategory_k__BackingField; // 0x100
		::FlatData::FurnitureSubCategory* _SubCategory_k__BackingField; // 0x104
		Il2CppObject* _SortedList_k__BackingField; // 0x108

		::System::Boolean _GetDataList_b__16_4(FurnitureObject* arg)
		{
			return ((::System::Boolean(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D__GETDATALIST_B__16_4_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleFurnitureCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_HANDLEFURNITURECARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::FlatData::FurnitureCategory* get_MainCategory()
		{
			return ((::FlatData::FurnitureCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_GET_MAINCATEGORY_OFFSET))(nullptr);
		}

		::System::Void RefreshElement(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_REFRESHELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::FurnitureSubCategory* get_SubCategory()
		{
			return ((::FlatData::FurnitureSubCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_GET_SUBCATEGORY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_ONENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SortedList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_GET_SORTEDLIST_OFFSET))(nullptr);
		}

		::System::Void set_SubCategory(::FlatData::FurnitureSubCategory* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureSubCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_SET_SUBCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_MainCategory(::FlatData::FurnitureCategory* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_SET_MAINCATEGORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_GETDATALIST_OFFSET))(nullptr);
		}

		::System::Boolean _GetDataList_b__16_0(FurnitureObject* arg)
		{
			return ((::System::Boolean(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D__GETDATALIST_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_SortedList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURELIST_2D_SET_SORTEDLIST_OFFSET))(arg, nullptr);
		}

	};

