#pragma once
#include "unitysdk.h"

class UISlider;

#define SLIDERMODIFIER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1AAE0)
#define SLIDERMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC1AB90)
#define SLIDERMODIFIER_SAMPLE_OFFSET UNITYSDK_OFFSET(0xC1AC10)
#define SLIDERMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1AC90)
#define SLIDERMODIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1ACA0)

	inline static constexpr unsigned int SliderModifier_TypeDefinitionIndex = 8855;

	class SliderModifier : public Il2CppObject
	{
	public:
		::System::Single value; // 0x18
		UISlider* slider; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SLIDERMODIFIER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SLIDERMODIFIER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Sample()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SLIDERMODIFIER_SAMPLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SLIDERMODIFIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SLIDERMODIFIER_ONDISABLE_OFFSET))(nullptr);
		}

	};

