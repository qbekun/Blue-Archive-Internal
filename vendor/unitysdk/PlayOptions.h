#pragma once
#include "unitysdk.h"

#define PLAYOPTIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x28A02A0)

	inline static constexpr unsigned int PlayOptions_TypeDefinitionIndex = 37984;

	class PlayOptions : public Il2CppObject
	{
	public:
		PlayOptions* defaultOptions; // 0x0
		::System::Single volume; // 0x10
		::System::Single pan; // 0x14
		::System::Single offsetSeconds; // 0x18
		::System::Boolean sourceLoop; // 0x1C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYOPTIONS_.CCTOR_OFFSET))(nullptr);
		}

	};

