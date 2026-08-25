#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COUNTLISTBULLETCONDITIONMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA540)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListBulletConditionModifierData_TypeDefinitionIndex = 13388;

	class CountListBulletConditionModifierData : public Il2CppObject
	{
	public:
		Il2CppObject* BulletTypeList; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTBULLETCONDITIONMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

