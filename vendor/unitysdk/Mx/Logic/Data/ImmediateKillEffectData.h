#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_IMMEDIATEKILLEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F41E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmediateKillEffectData_TypeDefinitionIndex = 13605;

	class ImmediateKillEffectData : public Il2CppObject
	{
	public:
		::System::Boolean IgnoreImmortal; // 0x58
		::System::Boolean IgnoreAppliedCheat; // 0x59

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMEDIATEKILLEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

