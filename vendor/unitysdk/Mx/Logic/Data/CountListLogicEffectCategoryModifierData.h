#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA560)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListLogicEffectCategoryModifierData_TypeDefinitionIndex = 13390;

	class CountListLogicEffectCategoryModifierData : public Il2CppObject
	{
	public:
		Il2CppObject* LogicEffectCategoryList; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

