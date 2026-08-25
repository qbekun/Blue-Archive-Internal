#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class Mute; }

#define AUDIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D29360)
#define AUDIO_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x1D29C20)

	inline static constexpr unsigned int Audio_TypeDefinitionIndex = 20046;

	class Audio : public Il2CppObject
	{
	public:
		::MX::SaveData::Mute* Mute; // 0x10
		::System::Single Volume; // 0x14

		::System::Void .ctor(::MX::SaveData::Mute* arg, ::System::Single arg)
		{
			((::System::Void(*)(::MX::SaveData::Mute*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUDIO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetVolume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIO_GETVOLUME_OFFSET))(nullptr);
		}

	};

