#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIGrid;
class CafePresetUnit;
class CafePresetRefreshMessage;

#define CAFEPRESETLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22648C0)
#define CAFEPRESETLIST_CREATEUNITS_OFFSET UNITYSDK_OFFSET(0x2264B70)
#define CAFEPRESETLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x2264CB0)
#define CAFEPRESETLIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2264D80)
#define CAFEPRESETLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2264EC0)
#define CAFEPRESETLIST_HANDLECAFEPRESETREFRESHMESSAGE_OFFSET UNITYSDK_OFFSET(0x2264F40)
#define CAFEPRESETLIST_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x22648D0)

	inline static constexpr unsigned int CafePresetList_TypeDefinitionIndex = 4587;

	class CafePresetList : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x18
		UIGrid* grid; // 0x20
		CafePresetUnit* unitPrefab; // 0x28
		Il2CppObject* _units; // 0x30

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void CreateUnits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETLIST_CREATEUNITS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETLIST_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleCafePresetRefreshMessage(CafePresetRefreshMessage* arg)
		{
			return ((::System::Boolean(*)(CafePresetRefreshMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETLIST_HANDLECAFEPRESETREFRESHMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETLIST_REFRESHLIST_OFFSET))(nullptr);
		}

	};

