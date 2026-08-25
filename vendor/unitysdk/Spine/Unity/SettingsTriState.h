#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SettingsTriState; }

namespace Spine::Unity
{
	inline static constexpr unsigned int SettingsTriState_TypeDefinitionIndex = 35377;

	class SettingsTriState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::Unity::SettingsTriState* Disable; // 0x0
		::Spine::Unity::SettingsTriState* Enable; // 0x0
		::Spine::Unity::SettingsTriState* UseGlobalSetting; // 0x0

	};
}

