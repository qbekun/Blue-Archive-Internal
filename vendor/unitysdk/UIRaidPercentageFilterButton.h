#pragma once
#include "unitysdk.h"

#define UIRAIDPERCENTAGEFILTERBUTTON_GETFILTERVALUE_OFFSET UNITYSDK_OFFSET(0x278AED0)
#define UIRAIDPERCENTAGEFILTERBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x278AEE0)
#define UIRAIDPERCENTAGEFILTERBUTTON_INVOKEDISABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x278AEF0)
#define UIRAIDPERCENTAGEFILTERBUTTON_INIT_OFFSET UNITYSDK_OFFSET(0x278AF10)
#define UIRAIDPERCENTAGEFILTERBUTTON_SETAVAILABLE_OFFSET UNITYSDK_OFFSET(0x278B070)
#define UIRAIDPERCENTAGEFILTERBUTTON_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x278B090)

	inline static constexpr unsigned int UIRaidPercentageFilterButton_TypeDefinitionIndex = 7420;

	class UIRaidPercentageFilterButton : public Il2CppObject
	{
	public:
		::System::Boolean IsAllType; // 0x38
		::System::Int32 percentageOption; // 0x3C
		Il2CppObject* DisableAnotherFilterCallback; // 0x40

		::System::Int32 GetFilterValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDPERCENTAGEFILTERBUTTON_GETFILTERVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDPERCENTAGEFILTERBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InvokeDisableCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDPERCENTAGEFILTERBUTTON_INVOKEDISABLECALLBACK_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDPERCENTAGEFILTERBUTTON_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetAvailable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDPERCENTAGEFILTERBUTTON_SETAVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDPERCENTAGEFILTERBUTTON_SETCALLBACK_OFFSET))(arg, nullptr);
		}

	};

