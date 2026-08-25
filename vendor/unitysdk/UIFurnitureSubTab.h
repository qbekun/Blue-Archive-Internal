#pragma once
#include "unitysdk.h"

namespace FlatData { class FurnitureSubCategory; }
class UIFurnitureInventory;
namespace UnityEngine { class GameObject; }

#define UIFURNITURESUBTAB_INIT_OFFSET UNITYSDK_OFFSET(0x2587D10)
#define UIFURNITURESUBTAB_SETLABELS_OFFSET UNITYSDK_OFFSET(0x258A7F0)
#define UIFURNITURESUBTAB_GET_OFF_OFFSET UNITYSDK_OFFSET(0x258A9F0)
#define UIFURNITURESUBTAB_GET_INVENTORY_OFFSET UNITYSDK_OFFSET(0x258AAA0)
#define UIFURNITURESUBTAB_GET_CATEGORYLABELS_OFFSET UNITYSDK_OFFSET(0x258A940)
#define UIFURNITURESUBTAB_GET_ON_OFFSET UNITYSDK_OFFSET(0x258AAB0)
#define UIFURNITURESUBTAB_GET_SUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x258AB60)
#define UIFURNITURESUBTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x258AB70)
#define UIFURNITURESUBTAB_SHOW_OFFSET UNITYSDK_OFFSET(0x2588020)
#define UIFURNITURESUBTAB_SET_SUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x258AB80)
#define UIFURNITURESUBTAB_SET_INVENTORY_OFFSET UNITYSDK_OFFSET(0x258AB90)
#define UIFURNITURESUBTAB_ONCLICK_OFFSET UNITYSDK_OFFSET(0x258ABA0)

	inline static constexpr unsigned int UIFurnitureSubTab_TypeDefinitionIndex = 6234;

	class UIFurnitureSubTab : public Il2CppObject
	{
	public:
		::FlatData::FurnitureSubCategory* _SubCategory_k__BackingField; // 0x18
		UIFurnitureInventory* _Inventory_k__BackingField; // 0x20
		::UnityEngine::GameObject* _On; // 0x28
		::UnityEngine::GameObject* _Off; // 0x30
		Il2CppObject* categoryLabels; // 0x38

		::System::Void Init(::FlatData::FurnitureSubCategory* arg, UIFurnitureInventory* arg2)
		{
			((::System::Void(*)(::FlatData::FurnitureSubCategory*, UIFurnitureInventory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLabels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_SETLABELS_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Off()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_GET_OFF_OFFSET))(nullptr);
		}

		UIFurnitureInventory* get_Inventory()
		{
			return ((UIFurnitureInventory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_GET_INVENTORY_OFFSET))(nullptr);
		}

		Il2CppObject* get_CategoryLabels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_GET_CATEGORYLABELS_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_On()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_GET_ON_OFFSET))(nullptr);
		}

		::FlatData::FurnitureSubCategory* get_SubCategory()
		{
			return ((::FlatData::FurnitureSubCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_GET_SUBCATEGORY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Show(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void set_SubCategory(::FlatData::FurnitureSubCategory* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureSubCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_SET_SUBCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Inventory(UIFurnitureInventory* arg)
		{
			((::System::Void(*)(UIFurnitureInventory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_SET_INVENTORY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESUBTAB_ONCLICK_OFFSET))(nullptr);
		}

	};

