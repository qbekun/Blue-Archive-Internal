#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COSTREGENBANEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3F20)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CostRegenBanEffectData_TypeDefinitionIndex = 13571;

	class CostRegenBanEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::System::Boolean Dispellable; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTREGENBANEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

