#pragma once
#include "../../../unitysdk.h"

namespace MXField::UI::Inventory { class UIKeywordElementUnit; }
namespace MXField::UI::Inventory { class UIKeywordElementEmptyUnit; }
class MXButton;
namespace MXField::Shared::Data { class FieldKeywordInfo; }

#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xEAC800)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_SET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xEACF00)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0xEACF10)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_START_OFFSET UNITYSDK_OFFSET(0xEAD140)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_HANDLESELECT_OFFSET UNITYSDK_OFFSET(0xEACF20)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xEAD370)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_HANDLEDESELECT_OFFSET UNITYSDK_OFFSET(0xEAD380)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAD4B0)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIKeywordElement_TypeDefinitionIndex = 10780;

	class UIKeywordElement : public Il2CppObject
	{
	public:
		::MXField::UI::Inventory::UIKeywordElementUnit* selectedObject; // 0x18
		::MXField::UI::Inventory::UIKeywordElementUnit* activeObject; // 0x20
		::MXField::UI::Inventory::UIKeywordElementUnit* inactiveObject; // 0x28
		::MXField::UI::Inventory::UIKeywordElementEmptyUnit* emptyObject; // 0x30
		MXButton* button; // 0x38
		::MXField::Shared::Data::FieldKeywordInfo* _KeywordInfo_k__BackingField; // 0x40

		::System::Void SetData(::MXField::Shared::Data::FieldKeywordInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldKeywordInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_KeywordInfo(::MXField::Shared::Data::FieldKeywordInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldKeywordInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_SET_KEYWORDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_ONCLICKTHIS_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_START_OFFSET))(nullptr);
		}

		::System::Boolean HandleSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_HANDLESELECT_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldKeywordInfo* get_KeywordInfo()
		{
			return ((::MXField::Shared::Data::FieldKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_GET_KEYWORDINFO_OFFSET))(nullptr);
		}

		::System::Void HandleDeselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_HANDLEDESELECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

