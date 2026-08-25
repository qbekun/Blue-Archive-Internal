#pragma once
#include "unitysdk.h"

#define STRINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F90BD0)

	inline static constexpr unsigned int Strings_TypeDefinitionIndex = 33833;

	class Strings : public Il2CppObject
	{
	public:
		NameAndTooltip* ClearRenderTargetsAtCreation; // 0x0
		NameAndTooltip* DisablePassCulling; // 0x10
		NameAndTooltip* ImmediateMode; // 0x20
		NameAndTooltip* EnableLogging; // 0x30
		NameAndTooltip* LogFrameInformation; // 0x40
		NameAndTooltip* LogResources; // 0x50

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGS_.CCTOR_OFFSET))(nullptr);
		}

	};

