#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class ControllerCursorSpeed; }

namespace MX::SaveData
{
	inline static constexpr unsigned int ControllerCursorSpeed_TypeDefinitionIndex = 20039;

	class ControllerCursorSpeed : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::ControllerCursorSpeed* Normal; // 0x0
		::MX::SaveData::ControllerCursorSpeed* Fast; // 0x0
		::MX::SaveData::ControllerCursorSpeed* Slow; // 0x0

	};
}

