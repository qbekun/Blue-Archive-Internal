#pragma once
#include "unitysdk.h"

#define SCREENSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD50)
#define SCREENSERVICE_GET_INDICATORBARRATIO_OFFSET UNITYSDK_OFFSET(0x1FDBE50)
#define SCREENSERVICE_GET_TOOWIDETOVALIDASPECTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1FDC000)
#define SCREENSERVICE_GET_SCREENASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1FDC090)
#define SCREENSERVICE_GET_TOONARROWTOVALIDASPECTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1FDC0C0)
#define SCREENSERVICE_SET_MOSTNARROWASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1FDC1C0)
#define SCREENSERVICE_GET_SAFEAREASCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1FDC220)
#define SCREENSERVICE_CHANGEMOSTNARROWASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1FDC510)
#define SCREENSERVICE_GET_CLAMPEDSCREENASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1FDC810)
#define SCREENSERVICE_GET_MOSTNARROWASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1FDC8F0)
#define SCREENSERVICE_GETSCALEDFOV_OFFSET UNITYSDK_OFFSET(0x1FDC940)

	inline static constexpr unsigned int ScreenService_TypeDefinitionIndex = 3032;

	class ScreenService : public Il2CppObject
	{
	public:
		::System::Single MostNarrowAspectRatioDefault; // 0x0
		::System::Single MostNarrowAspectRatioInBattle; // 0x4
		::System::Single MostNarrowAspectRatioInPortraitMinigame; // 0x8
		::System::Int32 screenWidth; // 0xC
		::System::Int32 screenHeight; // 0x10
		::System::Single MostWideAspectRatio; // 0x14
		::System::Single MostWideAspectRatioForLetterBox; // 0x18
		::System::Single _MostNarrowAspectRatio_k__BackingField; // 0x1C
		::System::Single StandardFieldOfView; // 0x20
		::System::UInt32 StandardWidth; // 0x24
		::System::UInt32 StandardHeight; // 0x28
		::System::Single StandardAspectRatio; // 0x2C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Single get_IndicatorBarRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_GET_INDICATORBARRATIO_OFFSET))(nullptr);
		}

		::System::Single get_TooWideToValidAspectMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_GET_TOOWIDETOVALIDASPECTMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Single get_ScreenAspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_GET_SCREENASPECTRATIO_OFFSET))(nullptr);
		}

		::System::Single get_TooNarrowToValidAspectMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_GET_TOONARROWTOVALIDASPECTMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_MostNarrowAspectRatio(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_SET_MOSTNARROWASPECTRATIO_OFFSET))(arg, nullptr);
		}

		::System::Single get_SafeAreaScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_GET_SAFEAREASCALEFACTOR_OFFSET))(nullptr);
		}

		::System::Void ChangeMostNarrowAspectRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_CHANGEMOSTNARROWASPECTRATIO_OFFSET))(arg, nullptr);
		}

		::System::Single get_ClampedScreenAspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_GET_CLAMPEDSCREENASPECTRATIO_OFFSET))(nullptr);
		}

		::System::Single get_MostNarrowAspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_GET_MOSTNARROWASPECTRATIO_OFFSET))(nullptr);
		}

		::System::Single GetScaledFov(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSERVICE_GETSCALEDFOV_OFFSET))(arg, nullptr);
		}

	};

