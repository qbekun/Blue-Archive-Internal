#pragma once
#include "unitysdk.h"

class UIWorldRaidZone;

#define UIWORLDRAIDZONEBALLOONPHASEGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0E1B0)
#define UIWORLDRAIDZONEBALLOONPHASEGROUP_GETNEEDPLAYANIMATIONBALLOONS_OFFSET UNITYSDK_OFFSET(0xC0E1C0)

	inline static constexpr unsigned int UIWorldRaidZoneBalloonPhaseGroup_TypeDefinitionIndex = 8817;

	class UIWorldRaidZoneBalloonPhaseGroup : public Il2CppObject
	{
	public:
		UIWorldRaidZone* WorldRaidZone; // 0x18
		Il2CppObject* balloons; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOONPHASEGROUP_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNeedPlayAnimationBalloons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOONPHASEGROUP_GETNEEDPLAYANIMATIONBALLOONS_OFFSET))(nullptr);
		}

	};

