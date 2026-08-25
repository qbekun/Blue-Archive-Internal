#pragma once
#include "unitysdk.h"

class MultiSweepListScrollInfo;

#define MULTISWEEPLISTSCROLLCONTROLLER_GETSELECTITEM_OFFSET UNITYSDK_OFFSET(0x2708410)
#define MULTISWEEPLISTSCROLLCONTROLLER_REFRESHHARDSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x27084F0)
#define MULTISWEEPLISTSCROLLCONTROLLER_SET_SELECTEDITEMPARCELINFOLIST_OFFSET UNITYSDK_OFFSET(0x2708920)
#define MULTISWEEPLISTSCROLLCONTROLLER_GET_SELECTEDITEMPARCELINFOLIST_OFFSET UNITYSDK_OFFSET(0x2708940)
#define MULTISWEEPLISTSCROLLCONTROLLER_GETSELECTITEMS_OFFSET UNITYSDK_OFFSET(0x2708950)
#define MULTISWEEPLISTSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2708A80)

	inline static constexpr unsigned int MultiSweepListScrollController_TypeDefinitionIndex = 7103;

	class MultiSweepListScrollController : public SingleObjectEnumerator
	{
	public:
		Il2CppObject* _selectedItemParcelInfoList_k__BackingField; // 0x90

		MultiSweepListScrollInfo* GetSelectItem(::System::Int64 arg)
		{
			return ((MultiSweepListScrollInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLCONTROLLER_GETSELECTITEM_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshHardStageInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLCONTROLLER_REFRESHHARDSTAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_selectedItemParcelInfoList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLCONTROLLER_SET_SELECTEDITEMPARCELINFOLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_selectedItemParcelInfoList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLCONTROLLER_GET_SELECTEDITEMPARCELINFOLIST_OFFSET))(nullptr);
		}

		Il2CppObject* GetSelectItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLCONTROLLER_GETSELECTITEMS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

