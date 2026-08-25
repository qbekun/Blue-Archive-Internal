#pragma once
#include "unitysdk.h"

#define SHADERGAUGECONTROLLER_GETFILL_OFFSET UNITYSDK_OFFSET(0x20C32D0)
#define SHADERGAUGECONTROLLER_GETGRADATION_OFFSET UNITYSDK_OFFSET(0x20C33D0)
#define SHADERGAUGECONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20C34D0)
#define SHADERGAUGECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C3640)
#define SHADERGAUGECONTROLLER_GET_GRADATION_OFFSET UNITYSDK_OFFSET(0x20C3660)
#define SHADERGAUGECONTROLLER_SETGRADATION_OFFSET UNITYSDK_OFFSET(0x20C3670)
#define SHADERGAUGECONTROLLER_SETFILL_OFFSET UNITYSDK_OFFSET(0x20C3780)
#define SHADERGAUGECONTROLLER_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x20C3890)
#define SHADERGAUGECONTROLLER_SET_GRADATION_OFFSET UNITYSDK_OFFSET(0x20C38A0)
#define SHADERGAUGECONTROLLER_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x20C38E0)

	inline static constexpr unsigned int ShaderGaugeController_TypeDefinitionIndex = 3655;

	class ShaderGaugeController : public Il2CppObject
	{
	public:
		::System::String* gaugePropertyName; // 0xD0
		::System::String* gradationPropertyName; // 0xD8
		::System::Int32 gaugePropertyID; // 0xE0
		::System::Int32 gradationPropertyID; // 0xE4

		::System::Single GetFill()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_GETFILL_OFFSET))(nullptr);
		}

		::System::Single GetGradation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_GETGRADATION_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_Gradation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_GET_GRADATION_OFFSET))(nullptr);
		}

		::System::Void SetGradation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_SETGRADATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetFill(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_SETFILL_OFFSET))(arg, nullptr);
		}

		::System::Single get_FillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_GET_FILLAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Gradation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_SET_GRADATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_FillAmount(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERGAUGECONTROLLER_SET_FILLAMOUNT_OFFSET))(arg, nullptr);
		}

	};

