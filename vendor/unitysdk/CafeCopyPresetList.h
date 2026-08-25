#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIGrid;
class CafeCopyPresetUnit;
class CafePresetRefreshMessage;

#define CAFECOPYPRESETLIST_CREATEUNITS_OFFSET UNITYSDK_OFFSET(0x22627A0)
#define CAFECOPYPRESETLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x22628E0)
#define CAFECOPYPRESETLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2262960)
#define CAFECOPYPRESETLIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2262CD0)
#define CAFECOPYPRESETLIST_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x2262A30)
#define CAFECOPYPRESETLIST_HANDLECAFEPRESETREFRESHMESSAGE_OFFSET UNITYSDK_OFFSET(0x2262E50)

	inline static constexpr unsigned int CafeCopyPresetList_TypeDefinitionIndex = 4581;

	class CafeCopyPresetList : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x18
		UIGrid* grid; // 0x20
		CafeCopyPresetUnit* unitPrefab; // 0x28
		Il2CppObject* _units; // 0x30

		::System::Void CreateUnits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETLIST_CREATEUNITS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETLIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETLIST_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Boolean HandleCafePresetRefreshMessage(CafePresetRefreshMessage* arg)
		{
			return ((::System::Boolean(*)(CafePresetRefreshMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETLIST_HANDLECAFEPRESETREFRESHMESSAGE_OFFSET))(arg, nullptr);
		}

	};

