#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELCIRCLEAREAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBBD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelCircleAreaEntityData_TypeDefinitionIndex = 13687;

	class LevelCircleAreaEntityData : public Il2CppObject
	{
	public:
		::System::Int64 Radius; // 0x188

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELCIRCLEAREAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

