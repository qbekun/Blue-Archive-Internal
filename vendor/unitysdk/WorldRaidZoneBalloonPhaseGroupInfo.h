#pragma once
#include "unitysdk.h"

class UIWorldRaidZoneBalloonPhaseGroup;

#define WORLDRAIDZONEBALLOONPHASEGROUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF6080)

	inline static constexpr unsigned int WorldRaidZoneBalloonPhaseGroupInfo_TypeDefinitionIndex = 8759;

	class WorldRaidZoneBalloonPhaseGroupInfo : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		UIWorldRaidZoneBalloonPhaseGroup* phaseGroup; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONPHASEGROUPINFO_.CTOR_OFFSET))(nullptr);
		}

	};

