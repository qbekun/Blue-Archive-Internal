#pragma once
#include "../../unitysdk.h"

#define NGSM_INTERNAL_PLATFORMLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5490)
#define NGSM_INTERNAL_PLATFORMLOADER_GETTARGETPLATFORM_OFFSET UNITYSDK_OFFSET(0x1EA54A0)

namespace Ngsm::Internal
{
	inline static constexpr unsigned int PlatformLoader_TypeDefinitionIndex = 21250;

	class PlatformLoader : public Il2CppObject
	{
	public:
		::System::String* ngsm_namespace; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORMLOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* GetTargetPlatform()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGSM_INTERNAL_PLATFORMLOADER_GETTARGETPLATFORM_OFFSET))(nullptr);
		}

	};
}

