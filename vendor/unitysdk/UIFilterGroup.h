#pragma once
#include "unitysdk.h"

class UIFilterUnit;
class UILabel;
class UITable;
class IFilterGroupController;
class IUIFilterTab;

#define UIFILTERGROUP_GET_FILTERUNITS_OFFSET UNITYSDK_OFFSET(0xAE8210)
#define UIFILTERGROUP_SETFILTERGROUP_OFFSET UNITYSDK_OFFSET(0xAE8220)
#define UIFILTERGROUP_SET_FILTERGROUPCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAE91E0)
#define UIFILTERGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE91F0)
#define UIFILTERGROUP_SET_FILTERUNITS_OFFSET UNITYSDK_OFFSET(0xAE9270)
#define UIFILTERGROUP_PREPAREFILTERUNITS_OFFSET UNITYSDK_OFFSET(0xAE8EF0)
#define UIFILTERGROUP_GET_FILTERGROUPCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAE9280)
#define UIFILTERGROUP_REPOSITION_OFFSET UNITYSDK_OFFSET(0xAE9290)

	inline static constexpr unsigned int UIFilterGroup_TypeDefinitionIndex = 8101;

	class UIFilterGroup : public Il2CppObject
	{
	public:
		UIFilterUnit* filterUnitPrefab; // 0x18
		UILabel* groupNameLabel; // 0x20
		UITable* alignTable; // 0x28
		UITable* filterUnitTable; // 0x30
		Il2CppObject* _FilterUnits_k__BackingField; // 0x38
		IFilterGroupController* _FilterGroupController_k__BackingField; // 0x40

		Il2CppObject* get_FilterUnits()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERGROUP_GET_FILTERUNITS_OFFSET))(nullptr);
		}

		::System::Void SetFilterGroup(IUIFilterTab* arg)
		{
			((::System::Void(*)(IUIFilterTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERGROUP_SETFILTERGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_FilterGroupController(IFilterGroupController* arg)
		{
			((::System::Void(*)(IFilterGroupController*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERGROUP_SET_FILTERGROUPCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FilterUnits(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERGROUP_SET_FILTERUNITS_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareFilterUnits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERGROUP_PREPAREFILTERUNITS_OFFSET))(arg, nullptr);
		}

		IFilterGroupController* get_FilterGroupController()
		{
			return ((IFilterGroupController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERGROUP_GET_FILTERGROUPCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void Reposition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERGROUP_REPOSITION_OFFSET))(nullptr);
		}

	};

