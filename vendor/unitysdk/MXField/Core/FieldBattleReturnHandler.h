#pragma once
#include "../../unitysdk.h"

#define MXFIELD_CORE_FIELDBATTLERETURNHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED3870)
#define MXFIELD_CORE_FIELDBATTLERETURNHANDLER_START_OFFSET UNITYSDK_OFFSET(0xED3880)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldBattleReturnHandler_TypeDefinitionIndex = 10934;

	class FieldBattleReturnHandler : public Il2CppObject
	{
	public:
		::System::Boolean isVictory; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDBATTLERETURNHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDBATTLERETURNHANDLER_START_OFFSET))(nullptr);
		}

	};
}

