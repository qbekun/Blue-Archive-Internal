#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_FADEINACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEB5D0)
#define MXFIELD_ACTIONS_FADEINACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEB5E0)
#define MXFIELD_ACTIONS_FADEINACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEEB610)
#define MXFIELD_ACTIONS_FADEINACTION_COFADEIN_OFFSET UNITYSDK_OFFSET(0xEEB6A0)

namespace MXField::Actions
{
	inline static constexpr unsigned int FadeInAction_TypeDefinitionIndex = 11050;

	class FadeInAction : public Il2CppObject
	{
	public:
		::System::Single outDuration; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FADEINACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FADEINACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FADEINACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFadeIn()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FADEINACTION_COFADEIN_OFFSET))(nullptr);
		}

	};
}

