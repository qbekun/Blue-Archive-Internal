#pragma once
#include "../../unitysdk.h"

namespace NPA::OBD { class NXPToyObdBuildVersionStatus; }

namespace NPA::OBD
{
	inline static constexpr unsigned int NXPToyObdBuildVersionStatus_TypeDefinitionIndex = 27395;

	class NXPToyObdBuildVersionStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::OBD::NXPToyObdBuildVersionStatus* Error; // 0x0
		::NPA::OBD::NXPToyObdBuildVersionStatus* Latest; // 0x0
		::NPA::OBD::NXPToyObdBuildVersionStatus* UpdateNeeded; // 0x0
		::NPA::OBD::NXPToyObdBuildVersionStatus* UpdateAvailable; // 0x0

	};
}

