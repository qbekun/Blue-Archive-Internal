#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELFANAREAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FB200)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelFanAreaEntityData_TypeDefinitionIndex = 13692;

	class LevelFanAreaEntityData : public Il2CppObject
	{
	public:
		::System::Int64 Radius; // 0x188
		::System::Int32 Degree; // 0x190
		::System::Single AngleOffset; // 0x194

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELFANAREAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

