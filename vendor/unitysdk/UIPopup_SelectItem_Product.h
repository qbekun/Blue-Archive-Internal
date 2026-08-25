#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class SelectItemScrollController;
class SelectedItemInfo;
class UIPopup_SelectItem;

#define UIPOPUP_SELECTITEM_PRODUCT_SETDATA_OFFSET UNITYSDK_OFFSET(0x272F400)
#define UIPOPUP_SELECTITEM_PRODUCT_SET_CURRENTPRODUCTSELECTGROUPID_OFFSET UNITYSDK_OFFSET(0x27323E0)
#define UIPOPUP_SELECTITEM_PRODUCT_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2732370)
#define UIPOPUP_SELECTITEM_PRODUCT_SETPRODUCTSELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x27323F0)
#define UIPOPUP_SELECTITEM_PRODUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2732500)
#define UIPOPUP_SELECTITEM_PRODUCT_CHANGEUISTATE_OFFSET UNITYSDK_OFFSET(0x272F260)
#define UIPOPUP_SELECTITEM_PRODUCT_GET_ISPRODUCTSELECT_OFFSET UNITYSDK_OFFSET(0x2732510)
#define UIPOPUP_SELECTITEM_PRODUCT_GET_CURRENTPRODUCTSELECTGROUPID_OFFSET UNITYSDK_OFFSET(0x2732520)
#define UIPOPUP_SELECTITEM_PRODUCT_SET_ISPRODUCTSELECT_OFFSET UNITYSDK_OFFSET(0x2732530)

	inline static constexpr unsigned int UIPopup_SelectItem_Product_TypeDefinitionIndex = 7196;

	class UIPopup_SelectItem_Product : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x18
		UILabel* productTitleLabel; // 0x20
		::Il2CppArray<::System::Object*>* originalUIs; // 0x28
		::Il2CppArray<::System::Object*>* productSelectUIs; // 0x30
		MXButton* okButton; // 0x38
		::UnityEngine::GameObject* okButtonDisable; // 0x40
		MXButton* closeButton; // 0x48
		SelectItemScrollController* _scrollController; // 0x50
		SelectedItemInfo* pickedParcel; // 0x58
		UIPopup_SelectItem* curPopup; // 0x60
		::System::Int64 _CurrentProductSelectGroupId_k__BackingField; // 0x68
		::System::Boolean _IsProductSelect_k__BackingField; // 0x70

		::System::Void SetData(UIPopup_SelectItem* arg, ::System::Int64 arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(UIPopup_SelectItem*, ::System::Int64, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_PRODUCT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_CurrentProductSelectGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_PRODUCT_SET_CURRENTPRODUCTSELECTGROUPID_OFFSET))(arg, nullptr);
		}

		SelectItemScrollController* get_scrollController()
		{
			return ((SelectItemScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_PRODUCT_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void SetProductSelectButton(SelectedItemInfo* arg)
		{
			((::System::Void(*)(SelectedItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_PRODUCT_SETPRODUCTSELECTBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_PRODUCT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ChangeUIState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_PRODUCT_CHANGEUISTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsProductSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_PRODUCT_GET_ISPRODUCTSELECT_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentProductSelectGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_PRODUCT_GET_CURRENTPRODUCTSELECTGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_IsProductSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_PRODUCT_SET_ISPRODUCTSELECT_OFFSET))(arg, nullptr);
		}

	};

