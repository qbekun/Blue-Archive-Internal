#pragma once
#include "unitysdk.h"

class CafeTemplateElementListController;

#define UIPOPUP_CAFETEMPLATEELEMENTLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x226C0C0)
#define UIPOPUP_CAFETEMPLATEELEMENTLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0x226C0D0)
#define UIPOPUP_CAFETEMPLATEELEMENTLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x2269B40)

	inline static constexpr unsigned int UIPopup_CafeTemplateElementList_TypeDefinitionIndex = 4613;

	class UIPopup_CafeTemplateElementList : public Il2CppObject
	{
	public:
		CafeTemplateElementListController* listController; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEELEMENTLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEELEMENTLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETEMPLATEELEMENTLIST_SETDATA_OFFSET))(arg, nullptr);
		}

	};

