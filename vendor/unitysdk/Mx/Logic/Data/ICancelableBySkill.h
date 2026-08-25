#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ICANCELABLEBYSKILL_ISREMOVEENTITYIFSKILLCANCEL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ICancelableBySkill_TypeDefinitionIndex = 13716;

	class ICancelableBySkill : public Il2CppObject
	{
	public:
		::System::Boolean IsRemoveEntityIfSkillCancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ICANCELABLEBYSKILL_ISREMOVEENTITYIFSKILLCANCEL_OFFSET))(nullptr);
		}

	};
}

