#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeSubTypes; }

#define SERIESDISPLAYEDSCENARIOMODESPOILERPOPUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D00590)

	inline static constexpr unsigned int SeriesDisplayedScenarioModeSpoilerPopupInfo_TypeDefinitionIndex = 19963;

	class SeriesDisplayedScenarioModeSpoilerPopupInfo : public Il2CppObject
	{
	public:
		::FlatData::ScenarioModeSubTypes* SubType; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIESDISPLAYEDSCENARIOMODESPOILERPOPUPINFO_.CTOR_OFFSET))(nullptr);
		}

	};

