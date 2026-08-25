#pragma once
#include "unitysdk.h"

#define UIINTERACTIVEWORLDRAIDWORLDMAPNODES_.CTOR_OFFSET UNITYSDK_OFFSET(0x2630120)

	inline static constexpr unsigned int UIInteractiveWorldRaidWorldMapNodes_TypeDefinitionIndex = 6566;

	class UIInteractiveWorldRaidWorldMapNodes : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* BossNodes; // 0x18
		::Il2CppArray<::System::Object*>* ConnectLines; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDWORLDMAPNODES_.CTOR_OFFSET))(nullptr);
		}

	};

