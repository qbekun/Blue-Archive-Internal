#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELOBBAURAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBF50)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelObbAuraEntityData_TypeDefinitionIndex = 13706;

	class LevelObbAuraEntityData : public Il2CppObject
	{
	public:
		::System::Int64 Width; // 0x170
		::System::Int64 Height; // 0x178
		::System::Int64 AngleOffset; // 0x180

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELOBBAURAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

