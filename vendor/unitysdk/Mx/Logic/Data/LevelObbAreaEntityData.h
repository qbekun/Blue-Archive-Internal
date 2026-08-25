#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELOBBAREAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBF40)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelObbAreaEntityData_TypeDefinitionIndex = 13705;

	class LevelObbAreaEntityData : public Il2CppObject
	{
	public:
		::System::Int64 Width; // 0x188
		::System::Int64 Height; // 0x190
		::System::Single AngleOffset; // 0x198

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELOBBAREAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

