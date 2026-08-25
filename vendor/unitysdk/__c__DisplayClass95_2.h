#pragma once
#include "unitysdk.h"

class WorldRaidBossListNetworkTask;

#define <>C__DISPLAYCLASS95_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E09E0)
#define <>C__DISPLAYCLASS95_2__AUTOSYNCLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x26E09F0)

	inline static constexpr unsigned int <>c__DisplayClass95_2_TypeDefinitionIndex = 381;

	class <>c__DisplayClass95_2 : public Il2CppObject
	{
	public:
		WorldRaidBossListNetworkTask* task; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS95_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AutoSyncLobby_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS95_2__AUTOSYNCLOBBY_B__1_OFFSET))(nullptr);
		}

	};

