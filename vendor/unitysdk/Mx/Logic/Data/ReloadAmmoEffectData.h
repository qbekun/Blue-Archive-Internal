#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_RELOADAMMOEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F43C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ReloadAmmoEffectData_TypeDefinitionIndex = 13622;

	class ReloadAmmoEffectData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RELOADAMMOEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

