#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELCIRCLEPROCEDUREAURAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBC70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelCircleProcedureAuraEntityData_TypeDefinitionIndex = 13689;

	class LevelCircleProcedureAuraEntityData : public Il2CppObject
	{
	public:
		Il2CppObject* ProcedureList; // 0x180

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELCIRCLEPROCEDUREAURAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

