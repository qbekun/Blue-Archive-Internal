#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_FADEOUTACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEEBBE0)
#define MXFIELD_ACTIONS_FADEOUTACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEBC60)

namespace MXField::Actions
{
	inline static constexpr unsigned int FadeOutAction_TypeDefinitionIndex = 11052;

	class FadeOutAction : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FADEOUTACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FADEOUTACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

