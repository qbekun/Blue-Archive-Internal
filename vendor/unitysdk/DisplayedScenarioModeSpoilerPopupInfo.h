#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }

#define DISPLAYEDSCENARIOMODESPOILERPOPUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D00220)

	inline static constexpr unsigned int DisplayedScenarioModeSpoilerPopupInfo_TypeDefinitionIndex = 19964;

	class DisplayedScenarioModeSpoilerPopupInfo : public Il2CppObject
	{
	public:
		::FlatData::ScenarioModeTypes* ModeType; // 0x10
		::System::Int64 VolumeId; // 0x18
		::System::Int64 ChapterId; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPLAYEDSCENARIOMODESPOILERPOPUPINFO_.CTOR_OFFSET))(nullptr);
		}

	};

