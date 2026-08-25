#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA570)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListLogicEffectGroupIdModifierData_TypeDefinitionIndex = 13391;

	class CountListLogicEffectGroupIdModifierData : public Il2CppObject
	{
	public:
		Il2CppObject* LogicEffectGroupIdList; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

