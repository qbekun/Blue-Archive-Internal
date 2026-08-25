#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_HASLOGICEFFECTCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108E270)
#define MX_LOGIC_GENERICCONDITION_HASLOGICEFFECTCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108E280)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int HasLogicEffectCondition_TypeDefinitionIndex = 12948;

	class HasLogicEffectCondition : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_HASLOGICEFFECTCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_HASLOGICEFFECTCONDITION_CHECK_OFFSET))(nullptr);
		}

	};
}

