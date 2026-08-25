#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Data { class FieldKeywordInfo; }
namespace MXField::UI::Inventory { class UIKeywordElement; }

#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xEAD4D0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_FIND_OFFSET UNITYSDK_OFFSET(0xEAD6D0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xEAD7A0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0xEAD680)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAD7C0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xEAD840)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEAD870)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIKeywordElementGroup_TypeDefinitionIndex = 10783;

	class UIKeywordElementGroup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* elements; // 0x18
		Il2CppObject* keywordInfos; // 0x20

		::System::Void SetData(::MXField::Shared::Data::FieldKeywordInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldKeywordInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::MXField::UI::Inventory::UIKeywordElement* Find(::System::Int64 arg)
		{
			return ((::MXField::UI::Inventory::UIKeywordElement*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_FIND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ElementCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_GET_ELEMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_GET_ISFULL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_.CTOR_OFFSET))(nullptr);
		}

		::MXField::UI::Inventory::UIKeywordElement* get_Item(::System::Int32 arg)
		{
			return ((::MXField::UI::Inventory::UIKeywordElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTGROUP_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

