#pragma once
#include "unitysdk.h"

class ColorFilter;

#define UICOLORSPINESCENARIOFILTERPRESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343C20)

	inline static constexpr unsigned int UIColorSpineScenarioFilterPreset_TypeDefinitionIndex = 4992;

	class UIColorSpineScenarioFilterPreset : public Il2CppObject
	{
	public:
		::System::String* FilterName; // 0x10
		ColorFilter* Filter; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLORSPINESCENARIOFILTERPRESET_.CTOR_OFFSET))(nullptr);
		}

	};

