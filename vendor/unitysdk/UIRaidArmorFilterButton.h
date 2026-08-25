#pragma once
#include "unitysdk.h"

#define UIRAIDARMORFILTERBUTTON_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x278A680)
#define UIRAIDARMORFILTERBUTTON_INIT_OFFSET UNITYSDK_OFFSET(0x278A690)
#define UIRAIDARMORFILTERBUTTON_INVOKEDISABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x278A8E0)
#define UIRAIDARMORFILTERBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x278A900)
#define UIRAIDARMORFILTERBUTTON_GETFILTERVALUE_OFFSET UNITYSDK_OFFSET(0x278A920)

	inline static constexpr unsigned int UIRaidArmorFilterButton_TypeDefinitionIndex = 7417;

	class UIRaidArmorFilterButton : public Il2CppObject
	{
	public:
		::System::Boolean IsAllType; // 0x38
		::System::Int32 BossIndex; // 0x3C
		Il2CppObject* DisableAnotherFilterCallback; // 0x40

		::System::Void SetCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDARMORFILTERBUTTON_SETCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDARMORFILTERBUTTON_INIT_OFFSET))(nullptr);
		}

		::System::Void InvokeDisableCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDARMORFILTERBUTTON_INVOKEDISABLECALLBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDARMORFILTERBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetFilterValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDARMORFILTERBUTTON_GETFILTERVALUE_OFFSET))(nullptr);
		}

	};

