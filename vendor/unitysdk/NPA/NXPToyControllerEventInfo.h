#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyControllerType; }

namespace NPA
{
	inline static constexpr unsigned int NXPToyControllerEventInfo_TypeDefinitionIndex = 25505;

	class NXPToyControllerEventInfo : public Il2CppObject
	{
	public:
		::NPA::NXPToyControllerType* controllerType; // 0x10
		::System::Int32 controllerIndex; // 0x14

	};
}

