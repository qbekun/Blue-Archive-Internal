#pragma once
#include "unitysdk.h"

#define LOADOPTIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x289F6E0)

	inline static constexpr unsigned int LoadOptions_TypeDefinitionIndex = 37977;

	class LoadOptions : public Il2CppObject
	{
	public:
		LoadOptions* defaultOptions; // 0x0
		ResamplingQuality* resamplingQuality; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADOPTIONS_.CCTOR_OFFSET))(nullptr);
		}

	};

