#pragma once
#include "unitysdk.h"

class EventArchiveItemGroup;
class UIEventArchiveItem;

#define UIEVENTARCHIVEITEMGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2473DA0)
#define UIEVENTARCHIVEITEMGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2473EC0)
#define UIEVENTARCHIVEITEMGROUP_REMOVE_ITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x2473F00)
#define UIEVENTARCHIVEITEMGROUP_ADD_ITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x2468AB0)
#define UIEVENTARCHIVEITEMGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2473FA0)
#define UIEVENTARCHIVEITEMGROUP_ONITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x2474110)

	inline static constexpr unsigned int UIEventArchiveItemGroup_TypeDefinitionIndex = 5650;

	class UIEventArchiveItemGroup : public ::System::Xml::XmlNameTable
	{
	public:
		::Il2CppArray<::System::Object*>* items; // 0x28
		Il2CppObject* ItemClicked; // 0x30

		::System::Void SetData(EventArchiveItemGroup* arg)
		{
			((::System::Void(*)(EventArchiveItemGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEMGROUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEMGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void remove_ItemClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEMGROUP_REMOVE_ITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void add_ItemClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEMGROUP_ADD_ITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEMGROUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnItemClicked(UIEventArchiveItem* arg)
		{
			((::System::Void(*)(UIEventArchiveItem*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTARCHIVEITEMGROUP_ONITEMCLICKED_OFFSET))(arg, nullptr);
		}

	};

