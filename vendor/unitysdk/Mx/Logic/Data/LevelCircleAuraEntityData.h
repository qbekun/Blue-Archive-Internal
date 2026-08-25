#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELCIRCLEAURAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBBE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelCircleAuraEntityData_TypeDefinitionIndex = 13688;

	class LevelCircleAuraEntityData : public Il2CppObject
	{
	public:
		Il2CppObject* BarrierTransferAbilities; // 0x170
		::System::Int64 Radius; // 0x178

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELCIRCLEAURAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

