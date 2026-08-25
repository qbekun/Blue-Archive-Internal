#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDNODECONNECTINGLINE_OFFWHENANYBOSSCLEARED_OFFSET UNITYSDK_OFFSET(0x2606E20)
#define INTERACTIVEWORLDRAIDNODECONNECTINGLINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2606F80)

	inline static constexpr unsigned int InteractiveWorldRaidNodeConnectingLine_TypeDefinitionIndex = 6478;

	class InteractiveWorldRaidNodeConnectingLine : public Il2CppObject
	{
	public:
		::System::Int64 leftBossGroupId; // 0x18
		::System::Int64 rightBossGroupId; // 0x20

		::System::Void OffWhenAnyBossCleared()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDNODECONNECTINGLINE_OFFWHENANYBOSSCLEARED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDNODECONNECTINGLINE_.CTOR_OFFSET))(nullptr);
		}

	};

