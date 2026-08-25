#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyControllerEventInfo; }

#define NPA_INXPTOYCONTROLLEREVENTHANDLER_ONCONTROLLERCONNECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPTOYCONTROLLEREVENTHANDLER_ONCONTROLLERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INXPToyControllerEventHandler_TypeDefinitionIndex = 25597;

	class INXPToyControllerEventHandler : public Il2CppObject
	{
	public:
		::System::Void OnControllerConnected(::NPA::NXPToyControllerEventInfo* arg)
		{
			((::System::Void(*)(::NPA::NXPToyControllerEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPTOYCONTROLLEREVENTHANDLER_ONCONTROLLERCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnControllerDisconnected(::NPA::NXPToyControllerEventInfo* arg)
		{
			((::System::Void(*)(::NPA::NXPToyControllerEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPTOYCONTROLLEREVENTHANDLER_ONCONTROLLERDISCONNECTED_OFFSET))(arg, nullptr);
		}

	};
}

