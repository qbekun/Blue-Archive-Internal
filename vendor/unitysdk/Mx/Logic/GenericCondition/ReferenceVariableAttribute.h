#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x108F2B0)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int ReferenceVariableAttribute_TypeDefinitionIndex = 12966;

	class ReferenceVariableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* targetType; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

