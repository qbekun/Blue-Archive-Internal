#pragma once
#include "unitysdk.h"

class UISlider;
class UIWidget;

#define GROGGYGAUGE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x25EB2B0)
#define GROGGYGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EB2D0)
#define GROGGYGAUGE_SETGAUGESTATE_OFFSET UNITYSDK_OFFSET(0x25EB2E0)

	inline static constexpr unsigned int GroggyGauge_TypeDefinitionIndex = 6415;

	class GroggyGauge : public Il2CppObject
	{
	public:
		UISlider* groggyBarSlider; // 0x18
		UIWidget* activeGauge; // 0x20
		UIWidget* disableGauge; // 0x28

		::System::Void SetValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROGGYGAUGE_SETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROGGYGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetGaugeState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROGGYGAUGE_SETGAUGESTATE_OFFSET))(arg, nullptr);
		}

	};

