#pragma once
#include "unitysdk.h"

namespace FlatData { class FurnitureCategory; }
class UIFurnitureInventory;
namespace UnityEngine { class GameObject; }

#define UIFURNITUREMAINTAB_GET_OFF_OFFSET UNITYSDK_OFFSET(0x258A050)
#define UIFURNITUREMAINTAB_GET_CATEGORYLABELS_OFFSET UNITYSDK_OFFSET(0x258A100)
#define UIFURNITUREMAINTAB_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x258A1B0)
#define UIFURNITUREMAINTAB_INIT_OFFSET UNITYSDK_OFFSET(0x2587EB0)
#define UIFURNITUREMAINTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x258A310)
#define UIFURNITUREMAINTAB_SET_INVENTORY_OFFSET UNITYSDK_OFFSET(0x258A320)
#define UIFURNITUREMAINTAB_ONCLICK_OFFSET UNITYSDK_OFFSET(0x258A330)
#define UIFURNITUREMAINTAB_GET_INVENTORY_OFFSET UNITYSDK_OFFSET(0x258A3E0)
#define UIFURNITUREMAINTAB_SHOW_OFFSET UNITYSDK_OFFSET(0x25871E0)
#define UIFURNITUREMAINTAB_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x258A4A0)
#define UIFURNITUREMAINTAB_GET_ON_OFFSET UNITYSDK_OFFSET(0x258A3F0)
#define UIFURNITUREMAINTAB_SETLABELS_OFFSET UNITYSDK_OFFSET(0x258A1C0)

	inline static constexpr unsigned int UIFurnitureMainTab_TypeDefinitionIndex = 6231;

	class UIFurnitureMainTab : public Il2CppObject
	{
	public:
		::FlatData::FurnitureCategory* _Category_k__BackingField; // 0x18
		UIFurnitureInventory* _Inventory_k__BackingField; // 0x20
		::UnityEngine::GameObject* _On; // 0x28
		::UnityEngine::GameObject* _Off; // 0x30
		Il2CppObject* categoryLabels; // 0x38

		::UnityEngine::GameObject* get_Off()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_GET_OFF_OFFSET))(nullptr);
		}

		Il2CppObject* get_CategoryLabels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_GET_CATEGORYLABELS_OFFSET))(nullptr);
		}

		::FlatData::FurnitureCategory* get_Category()
		{
			return ((::FlatData::FurnitureCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Void Init(::FlatData::FurnitureCategory* arg, UIFurnitureInventory* arg2)
		{
			((::System::Void(*)(::FlatData::FurnitureCategory*, UIFurnitureInventory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Inventory(UIFurnitureInventory* arg)
		{
			((::System::Void(*)(UIFurnitureInventory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_SET_INVENTORY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_ONCLICK_OFFSET))(nullptr);
		}

		UIFurnitureInventory* get_Inventory()
		{
			return ((UIFurnitureInventory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_GET_INVENTORY_OFFSET))(nullptr);
		}

		::System::Void Show(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void set_Category(::FlatData::FurnitureCategory* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_On()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_GET_ON_OFFSET))(nullptr);
		}

		::System::Void SetLabels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREMAINTAB_SETLABELS_OFFSET))(nullptr);
		}

	};

