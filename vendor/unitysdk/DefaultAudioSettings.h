#pragma once
#include "unitysdk.h"

#define DEFAULTAUDIOSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D29C30)

	inline static constexpr unsigned int DefaultAudioSettings_TypeDefinitionIndex = 20044;

	class DefaultAudioSettings : public Il2CppObject
	{
	public:
		::System::Single DefaultMasterVolume; // 0x10
		::System::Single DefaultBGMVolume; // 0x14
		::System::Single DefaultSFXVolume; // 0x18
		::System::Single DefaultVoiceVolume; // 0x1C
		::System::Boolean DefaultBackGroundSound; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTAUDIOSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};

