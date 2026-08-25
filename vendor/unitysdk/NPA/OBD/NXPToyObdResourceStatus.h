#pragma once
#include "../../unitysdk.h"

namespace NPA::OBD { class NXPToyObdResourceStatus; }

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdResourceStatus_TypeDefinitionIndex = 27397;

	class NXPToyObdResourceStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::OBD::NXPToyObdResourceStatus* Error; // 0x0
		::NPA::OBD::NXPToyObdResourceStatus* Latest; // 0x0
		::NPA::OBD::NXPToyObdResourceStatus* UpdateNeeded; // 0x0
		::NPA::OBD::NXPToyObdResourceStatus* Downloading; // 0x0

	};
}

