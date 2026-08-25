#pragma once
#include "unitysdk.h"

class InventoryScrollInfo;

#define UIINVENTORYLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2206F70)
#define UIINVENTORYLISTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x2206FB0)

	inline static constexpr unsigned int UIInventoryListItem_TypeDefinitionIndex = 4334;

	class UIInventoryListItem : public ::System::Xml::XPath::XPathNavigator
	{
	public:
		::Il2CppArray<::System::Object*>* Items; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINVENTORYLISTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(InventoryScrollInfo* arg)
		{
			((::System::Void(*)(InventoryScrollInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIINVENTORYLISTITEM_SETDATA_OFFSET))(arg, nullptr);
		}

	};

