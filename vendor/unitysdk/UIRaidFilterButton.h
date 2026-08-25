#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;

#define UIRAIDFILTERBUTTON_ISENABLE_OFFSET UNITYSDK_OFFSET(0x278AC70)
#define UIRAIDFILTERBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x278A910)
#define UIRAIDFILTERBUTTON_ONCLICKFILTER_OFFSET UNITYSDK_OFFSET(0x278AC90)
#define UIRAIDFILTERBUTTON_INVOKEDISABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x278AD20)
#define UIRAIDFILTERBUTTON_SETENABLE_OFFSET UNITYSDK_OFFSET(0x278AD30)
#define UIRAIDFILTERBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x278ADB0)

	inline static constexpr unsigned int UIRaidFilterButton_TypeDefinitionIndex = 7419;

	class UIRaidFilterButton : public Il2CppObject
	{
	public:
		MXButton* FilterButton; // 0x18
		::UnityEngine::GameObject* FilterOnObject; // 0x20
		UILabel* OnLabel; // 0x28
		UILabel* OffLabel; // 0x30

		::System::Boolean IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDFILTERBUTTON_ISENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDFILTERBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDFILTERBUTTON_ONCLICKFILTER_OFFSET))(nullptr);
		}

		::System::Void InvokeDisableCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDFILTERBUTTON_INVOKEDISABLECALLBACK_OFFSET))(nullptr);
		}

		::System::Void SetEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDFILTERBUTTON_SETENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDFILTERBUTTON_AWAKE_OFFSET))(nullptr);
		}

	};

