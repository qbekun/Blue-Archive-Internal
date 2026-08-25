#pragma once
#include "../../unitysdk.h"

#define NPA_EX_EXTERNALPLATFORMMOCKFORUNITY_SIGNUPPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D1EBE0)

namespace NPA::Ex
{
	inline static constexpr unsigned int ExternalPlatformMockForUnity_TypeDefinitionIndex = 25989;

	class ExternalPlatformMockForUnity : public Il2CppObject
	{
	public:
		::System::Void SignUpPlatform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMMOCKFORUNITY_SIGNUPPLATFORM_OFFSET))(nullptr);
		}

	};
}

