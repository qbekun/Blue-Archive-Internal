#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_IMMUNEEFFECTBASEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4200)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmuneEffectBaseData_TypeDefinitionIndex = 13607;

	class ImmuneEffectBaseData : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::System::Boolean Dispellable; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEEFFECTBASEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

