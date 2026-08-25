#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIFurnitureSort;
class UIFurnitureInventoryScrollViewController;
class UILabel;
class UIFurnitureNameSearch;
namespace FlatData { class FurnitureCategory; }
namespace FlatData { class FurnitureSubCategory; }
class SortingRule;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class FurnitureObject;
class NameSearchResult;

#define UIFURNITUREINVENTORY_ONSORT_OFFSET UNITYSDK_OFFSET(0x2586720)
#define UIFURNITUREINVENTORY_GETFIRSTSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x25867B0)
#define UIFURNITUREINVENTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x25867C0)
#define UIFURNITUREINVENTORY_HANDLECLICKFURNITURECARDMESSAGE_OFFSET UNITYSDK_OFFSET(0x2586CA0)
#define UIFURNITUREINVENTORY_ONCLICKCHANGECATEGORY_OFFSET UNITYSDK_OFFSET(0x2586E70)
#define UIFURNITUREINVENTORY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2586EC0)
#define UIFURNITUREINVENTORY_REFRESHFURNITURECARD_OFFSET UNITYSDK_OFFSET(0x2586340)
#define UIFURNITUREINVENTORY_SETMAINTABS_OFFSET UNITYSDK_OFFSET(0x2587080)
#define UIFURNITUREINVENTORY__REFRESHFURNITURELIST_B__38_0_OFFSET UNITYSDK_OFFSET(0x25872C0)
#define UIFURNITUREINVENTORY_GET_CATEGORYTABLE_OFFSET UNITYSDK_OFFSET(0x25872F0)
#define UIFURNITUREINVENTORY_ONSEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x25876A0)
#define UIFURNITUREINVENTORY_GET_CURRENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x25876D0)
#define UIFURNITUREINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x25876E0)
#define UIFURNITUREINVENTORY__REFRESHFURNITURELIST_B__38_7_OFFSET UNITYSDK_OFFSET(0x2587770)
#define UIFURNITUREINVENTORY_INITCATEGORYTABLE_OFFSET UNITYSDK_OFFSET(0x2587320)
#define UIFURNITUREINVENTORY_ONBACK_OFFSET UNITYSDK_OFFSET(0x25877A0)
#define UIFURNITUREINVENTORY_SET_CURRENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x2587A30)
#define UIFURNITUREINVENTORY_GET_ISNEWCAFESESSION_OFFSET UNITYSDK_OFFSET(0x2586BB0)
#define UIFURNITUREINVENTORY_SET_CURRENTSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x2587A40)
#define UIFURNITUREINVENTORY_GET_CURRENTSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x2587A50)
#define UIFURNITUREINVENTORY_INITSUBTABS_OFFSET UNITYSDK_OFFSET(0x2587A60)
#define UIFURNITUREINVENTORY_SETDATA_OFFSET UNITYSDK_OFFSET(0x2587D40)
#define UIFURNITUREINVENTORY_GET_SUBTABS_OFFSET UNITYSDK_OFFSET(0x2587C60)
#define UIFURNITUREINVENTORY_INITMAINTABS_OFFSET UNITYSDK_OFFSET(0x2587DF0)
#define UIFURNITUREINVENTORY_GET_MAINTABS_OFFSET UNITYSDK_OFFSET(0x2587130)
#define UIFURNITUREINVENTORY_SETSUBTABS_OFFSET UNITYSDK_OFFSET(0x2587EE0)
#define UIFURNITUREINVENTORY_REFRESHFURNITURELIST_OFFSET UNITYSDK_OFFSET(0x2588100)
#define UIFURNITUREINVENTORY_SETTABS_OFFSET UNITYSDK_OFFSET(0x2586770)
#define UIFURNITUREINVENTORY_ONCLICKCHANGESUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x2588D60)
#define UIFURNITUREINVENTORY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2588DB0)

	inline static constexpr unsigned int UIFurnitureInventory_TypeDefinitionIndex = 6225;

	class UIFurnitureInventory : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* ItemEmptyIndicator; // 0xD8
		::UnityEngine::GameObject* ItemNotEmptyIndicator; // 0xE0
		UIFurnitureSort* UIFurnitureSort; // 0xE8
		UIFurnitureInventoryScrollViewController* furnitureInventoryScrollController; // 0xF0
		UILabel* furnitureCount; // 0xF8
		UIFurnitureNameSearch* nameSearch; // 0x100
		::System::Int32 columnCount; // 0x0
		Il2CppObject* sortedFurnitureObjects; // 0x108
		::System::Int64 _lastCafeSession; // 0x110
		Il2CppObject* mainTabs; // 0x118
		Il2CppObject* subTabs; // 0x120
		::FlatData::FurnitureCategory* _CurrentCategory_k__BackingField; // 0x128
		::FlatData::FurnitureSubCategory* _CurrentSubCategory_k__BackingField; // 0x12C
		Il2CppObject* categoryTable; // 0x130

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FurnitureSubCategory* GetFirstSubCategory(::FlatData::FurnitureCategory* arg)
		{
			return ((::FlatData::FurnitureSubCategory*(*)(::FlatData::FurnitureCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_GETFIRSTSUBCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleClickFurnitureCardMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_HANDLECLICKFURNITURECARDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickChangeCategory(::FlatData::FurnitureCategory* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_ONCLICKCHANGECATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void RefreshFurnitureCard(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_REFRESHFURNITURECARD_OFFSET))(arg, nullptr);
		}

		::System::Void SetMainTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_SETMAINTABS_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshFurnitureList_b__38_0(FurnitureObject* arg)
		{
			return ((::System::Boolean(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY__REFRESHFURNITURELIST_B__38_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CategoryTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_GET_CATEGORYTABLE_OFFSET))(nullptr);
		}

		::System::Void OnSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_ONSEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::FlatData::FurnitureCategory* get_CurrentCategory()
		{
			return ((::FlatData::FurnitureCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_GET_CURRENTCATEGORY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshFurnitureList_b__38_7(FurnitureObject* arg)
		{
			return ((::System::Boolean(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY__REFRESHFURNITURELIST_B__38_7_OFFSET))(arg, nullptr);
		}

		::System::Void InitCategoryTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_INITCATEGORYTABLE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_ONBACK_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCategory(::FlatData::FurnitureCategory* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_SET_CURRENTCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNewCafeSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_GET_ISNEWCAFESESSION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSubCategory(::FlatData::FurnitureSubCategory* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureSubCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_SET_CURRENTSUBCATEGORY_OFFSET))(arg, nullptr);
		}

		::FlatData::FurnitureSubCategory* get_CurrentSubCategory()
		{
			return ((::FlatData::FurnitureSubCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_GET_CURRENTSUBCATEGORY_OFFSET))(nullptr);
		}

		::System::Void InitSubTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_INITSUBTABS_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_SETDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_SubTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_GET_SUBTABS_OFFSET))(nullptr);
		}

		::System::Void InitMainTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_INITMAINTABS_OFFSET))(nullptr);
		}

		Il2CppObject* get_MainTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_GET_MAINTABS_OFFSET))(nullptr);
		}

		::System::Void SetSubTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_SETSUBTABS_OFFSET))(nullptr);
		}

		::System::Void RefreshFurnitureList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_REFRESHFURNITURELIST_OFFSET))(nullptr);
		}

		::System::Void SetTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_SETTABS_OFFSET))(nullptr);
		}

		::System::Void OnClickChangeSubCategory(::FlatData::FurnitureSubCategory* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureSubCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_ONCLICKCHANGESUBCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORY_AWAKE_OFFSET))(nullptr);
		}

	};

