#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDINPUTRECEIVER_ONINPUT_OFFSET UNITYSDK_OFFSET(0x25A4EB0)
#define INTERACTIVEWORLDRAIDINPUTRECEIVER_GET_ONINPUTRECEIVE_OFFSET UNITYSDK_OFFSET(0x25A4F00)
#define INTERACTIVEWORLDRAIDINPUTRECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A4F10)

	inline static constexpr unsigned int InteractiveWorldRaidInputReceiver_TypeDefinitionIndex = 334;

	class InteractiveWorldRaidInputReceiver : public Il2CppObject
	{
	public:
		Il2CppObject* _onInputReceive; // 0x18

		::System::Void OnInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDINPUTRECEIVER_ONINPUT_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnInputReceive()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDINPUTRECEIVER_GET_ONINPUTRECEIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDINPUTRECEIVER_.CTOR_OFFSET))(nullptr);
		}

	};

