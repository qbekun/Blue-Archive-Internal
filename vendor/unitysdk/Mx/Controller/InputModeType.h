#pragma once
#include "../../unitysdk.h"

namespace MX::Controller { class InputModeType; }

namespace MX::Controller
{
	inline static constexpr unsigned int InputModeType_TypeDefinitionIndex = 11143;

	class InputModeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Controller::InputModeType* Keyboard; // 0x0
		::MX::Controller::InputModeType* Controller; // 0x0

	};
}

