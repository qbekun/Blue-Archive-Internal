#pragma once
#include "unitysdk.h"

class UIScrollBar;
class UIWidget;
namespace MX::GameLogic::DBModel { class ShopProductDB; }
class UIShopListElement;
namespace FlatData { class ShopCategoryType; }

#define UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_REMOVE_SELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAB47A0)
#define UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_REFRESHSHOPLISTELEMENT_OFFSET UNITYSDK_OFFSET(0xAAB8A0)
#define UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_ADD_SELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAACC30)
#define UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xAB4840)
#define UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_ONSELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAB4B20)
#define UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_GETSHOPLISTELEMENT_OFFSET UNITYSDK_OFFSET(0xAAA850)
#define UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_SETSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xAADB80)
#define UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB4B40)

	inline static constexpr unsigned int UIShopListElementGroupScrollViewController_TypeDefinitionIndex = 7998;

	class UIShopListElementGroupScrollViewController : public ::System::Xml::XmlSignificantWhitespace
	{
	public:
		UIScrollBar* defaultScrollBar; // 0x90
		UIScrollBar* longBGScrollBar; // 0x98
		UIWidget* parentWidget; // 0xA0
		::System::Action* SelectBoxStateChanged; // 0xA8

		::System::Void remove_SelectBoxStateChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_REMOVE_SELECTBOXSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshShopListElement(::MX::GameLogic::DBModel::ShopProductDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_REFRESHSHOPLISTELEMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void add_SelectBoxStateChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_ADD_SELECTBOXSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnSelectBoxStateChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_ONSELECTBOXSTATECHANGED_OFFSET))(nullptr);
		}

		UIShopListElement* GetShopListElement(::System::Int64 arg)
		{
			return ((UIShopListElement*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_GETSHOPLISTELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetScrollbar(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_SETSCROLLBAR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUPSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

