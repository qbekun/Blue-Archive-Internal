#pragma once
#include "unitysdk.h"

class ClearDeckGroupListScrollViewController;

#define UIPOPUP_CLEARDECKGROUPDETAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0x27639A0)
#define UIPOPUP_CLEARDECKGROUPDETAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0x2763BA0)
#define UIPOPUP_CLEARDECKGROUPDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2763D60)

	inline static constexpr unsigned int UIPopup_ClearDeckGroupDetail_TypeDefinitionIndex = 7308;

	class UIPopup_ClearDeckGroupDetail : public Il2CppObject
	{
	public:
		ClearDeckGroupListScrollViewController* deckList; // 0xD8

		::System::Void SetData(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUPDETAIL_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUPDETAIL_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUPDETAIL_.CTOR_OFFSET))(nullptr);
		}

	};

