#pragma once
#include "unitysdk.h"

class MXButton;
class SortingRuleTabController;
class UIGrid;
class SortingRule;

#define UIEVENTBONUSSORT_AWAKE_OFFSET UNITYSDK_OFFSET(0x247A3B0)
#define UIEVENTBONUSSORT_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x247A6A0)
#define UIEVENTBONUSSORT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x247A750)
#define UIEVENTBONUSSORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2478EC0)
#define UIEVENTBONUSSORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x247AC80)
#define UIEVENTBONUSSORT_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x247ACA0)
#define UIEVENTBONUSSORT_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x247AD30)

	inline static constexpr unsigned int UIEventBonusSort_TypeDefinitionIndex = 5664;

	class UIEventBonusSort : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* okButton; // 0xE0
		MXButton* cancelButton; // 0xE8
		SortingRuleTabController* sortingRuleTabController; // 0xF0
		UIGrid* sortingRuleItemListGrid; // 0xF8
		::System::Int64 eventContentId; // 0x100
		SortingRule* initialSortingRule; // 0x108
		Il2CppObject* okAction; // 0x110

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSSORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSSORT_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSSORT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, Il2CppObject* arg2, SortingRule* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, SortingRule*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSSORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSSORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSSORT_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSSORT_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

	};

