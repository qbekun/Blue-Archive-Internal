#pragma once
#include "unitysdk.h"

class UIEventArchiveItem;

#define EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2468630)
#define EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_ADD_ITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x2468670)
#define EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_ONITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x2468710)
#define EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_REMOVE_ITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x2468730)
#define EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x24687D0)

	inline static constexpr unsigned int EventArchiveItemGroupScrollViewController_TypeDefinitionIndex = 5617;

	class EventArchiveItemGroupScrollViewController : public ::System::Xml::DocumentXPathNodeIterator_ElemDescendants
	{
	public:
		Il2CppObject* ItemClicked; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void add_ItemClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_ADD_ITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnItemClicked(UIEventArchiveItem* arg)
		{
			((::System::Void(*)(UIEventArchiveItem*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_ONITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ItemClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_REMOVE_ITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTARCHIVEITEMGROUPSCROLLVIEWCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

	};

