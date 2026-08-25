#pragma once
#include "unitysdk.h"

class ControllerIconTypeProvider;
namespace NPA { class NXPToyControllerEventInfo; }

#define TOYCONTROLLEREVENTHANDLER_ONCONTROLLERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xC86300)
#define TOYCONTROLLEREVENTHANDLER_ONCONTROLLERCONNECTED_OFFSET UNITYSDK_OFFSET(0xC86340)
#define TOYCONTROLLEREVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC796A0)

	inline static constexpr unsigned int ToyControllerEventHandler_TypeDefinitionIndex = 9074;

	class ToyControllerEventHandler : public Il2CppObject
	{
	public:
		ControllerIconTypeProvider* _owner; // 0x10

		::System::Void OnControllerDisconnected(::NPA::NXPToyControllerEventInfo* arg)
		{
			((::System::Void(*)(::NPA::NXPToyControllerEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TOYCONTROLLEREVENTHANDLER_ONCONTROLLERDISCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnControllerConnected(::NPA::NXPToyControllerEventInfo* arg)
		{
			((::System::Void(*)(::NPA::NXPToyControllerEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TOYCONTROLLEREVENTHANDLER_ONCONTROLLERCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(ControllerIconTypeProvider* arg)
		{
			((::System::Void(*)(ControllerIconTypeProvider*, ::PVOID))((::PBYTE)hIl2Cpp + TOYCONTROLLEREVENTHANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

