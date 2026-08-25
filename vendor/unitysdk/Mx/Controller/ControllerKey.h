#pragma once
#include "../../unitysdk.h"

namespace MX::Controller { class ControllerKey; }

namespace MX::Controller
{
	inline static constexpr unsigned int ControllerKey_TypeDefinitionIndex = 11144;

	class ControllerKey : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Controller::ControllerKey* none; // 0x0
		::MX::Controller::ControllerKey* leftStick; // 0x0
		::MX::Controller::ControllerKey* leftStickPress; // 0x0
		::MX::Controller::ControllerKey* rightStick; // 0x0
		::MX::Controller::ControllerKey* rightStickPress; // 0x0
		::MX::Controller::ControllerKey* dpad; // 0x0
		::MX::Controller::ControllerKey* start; // 0x0
		::MX::Controller::ControllerKey* select; // 0x0
		::MX::Controller::ControllerKey* buttonNorth; // 0x0
		::MX::Controller::ControllerKey* buttonSouth; // 0x0
		::MX::Controller::ControllerKey* buttonWest; // 0x0
		::MX::Controller::ControllerKey* buttonEast; // 0x0
		::MX::Controller::ControllerKey* leftShoulder; // 0x0
		::MX::Controller::ControllerKey* rightShoulder; // 0x0
		::MX::Controller::ControllerKey* leftTrigger; // 0x0
		::MX::Controller::ControllerKey* rightTrigger; // 0x0

	};
}

