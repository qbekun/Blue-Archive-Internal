#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_REFERENCEABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x108E3A0)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int ReferenceableAttribute_TypeDefinitionIndex = 12952;

	class ReferenceableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCEABLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

