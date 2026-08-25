#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ADDCURRENTATGEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3D70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddCurrentATGEffectData_TypeDefinitionIndex = 13544;

	class AddCurrentATGEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDCURRENTATGEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

