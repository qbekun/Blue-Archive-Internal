#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELDONUTAREAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBC80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelDonutAreaEntityData_TypeDefinitionIndex = 13690;

	class LevelDonutAreaEntityData : public Il2CppObject
	{
	public:
		::System::Int64 ExcludeRadius; // 0x198

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELDONUTAREAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

