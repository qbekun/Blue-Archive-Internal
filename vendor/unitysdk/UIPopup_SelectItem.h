#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class MXButton;
class UIScrollView;
class UIPopup_SelectItem_Product;
class SelectItemScrollController;
class UISelectItemCountController;
class ItemObject;
class SelectedItemInfo;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define UIPOPUP_SELECTITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x272F010)
#define UIPOPUP_SELECTITEM_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x272F040)
#define UIPOPUP_SELECTITEM_GET_COUNTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x272F0B0)
#define UIPOPUP_SELECTITEM_SETDATA_PRODUCTSELECT_OFFSET UNITYSDK_OFFSET(0x272F120)
#define UIPOPUP_SELECTITEM_GET_AMOUNTDESCLABEL_OFFSET UNITYSDK_OFFSET(0x2730660)
#define UIPOPUP_SELECTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x2730670)
#define UIPOPUP_SELECTITEM_GET_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x2730E80)
#define UIPOPUP_SELECTITEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2730ED0)
#define UIPOPUP_SELECTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2730F10)
#define UIPOPUP_SELECTITEM_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x2730F20)
#define UIPOPUP_SELECTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2731100)
#define UIPOPUP_SELECTITEM_SETUI_OFFSET UNITYSDK_OFFSET(0x2731230)
#define UIPOPUP_SELECTITEM_ONPICKED_OFFSET UNITYSDK_OFFSET(0x2732030)

	inline static constexpr unsigned int UIPopup_SelectItem_TypeDefinitionIndex = 7193;

	class UIPopup_SelectItem : public Il2CppObject
	{
	public:
		UILabel* NameText; // 0xD8
		UILabel* DescText; // 0xE0
		UITexture* ItemImage; // 0xE8
		UILabel* countLabel; // 0xF0
		MXButton* closeButton; // 0xF8
		UIScrollView* descScrollView; // 0x100
		UILabel* amountDescLabel; // 0x108
		UILabel* amountCountLabel; // 0x110
		UIPopup_SelectItem_Product* productSelect; // 0x118
		SelectItemScrollController* _scrollController; // 0x120
		UISelectItemCountController* _countController; // 0x128
		::System::Int32 columnCount; // 0x0
		ItemObject* ticket; // 0x130
		SelectedItemInfo* pickedParcel; // 0x138

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_ONENABLE_OFFSET))(nullptr);
		}

		SelectItemScrollController* get_scrollController()
		{
			return ((SelectItemScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		UISelectItemCountController* get_countController()
		{
			return ((UISelectItemCountController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_GET_COUNTCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void SetData_ProductSelect(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_SETDATA_PRODUCTSELECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		UILabel* get_AmountDescLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_GET_AMOUNTDESCLABEL_OFFSET))(nullptr);
		}

		::System::Void SetData(ItemObject* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2)
		{
			((::System::Void(*)(ItemObject*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_ColumnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_GET_COLUMNCOUNT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Exchange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_EXCHANGE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetUI(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnPicked(SelectedItemInfo* arg)
		{
			((::System::Void(*)(SelectedItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTITEM_ONPICKED_OFFSET))(arg, nullptr);
		}

	};

