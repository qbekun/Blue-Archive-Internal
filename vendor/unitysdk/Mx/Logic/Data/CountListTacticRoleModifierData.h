#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COUNTLISTTACTICROLEMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA5C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListTacticRoleModifierData_TypeDefinitionIndex = 13397;

	class CountListTacticRoleModifierData : public Il2CppObject
	{
	public:
		Il2CppObject* TacticRoleList; // 0x28
		Il2CppObject* TacticEntityTypeList; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTTACTICROLEMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

