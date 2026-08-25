#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELOBBPROCEDUREAURAENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBF60)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelObbProcedureAuraEntityData_TypeDefinitionIndex = 13707;

	class LevelObbProcedureAuraEntityData : public Il2CppObject
	{
	public:
		Il2CppObject* ProcedureList; // 0x188

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELOBBPROCEDUREAURAENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

