#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ADDCURRENTAMMOEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F43D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddCurrentAmmoEffectData_TypeDefinitionIndex = 13623;

	class AddCurrentAmmoEffectData : public Il2CppObject
	{
	public:
		::System::Int32 AmmoCountToAdd; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDCURRENTAMMOEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

