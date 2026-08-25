#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class PseudoStates; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_MATCHRESULTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA370540)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int MatchResultInfo_TypeDefinitionIndex = 30806;

	class MatchResultInfo : public Il2CppObject
	{
	public:
		::System::Boolean success; // 0x10
		::UnityEngine::UIElements::PseudoStates* triggerPseudoMask; // 0x14
		::UnityEngine::UIElements::PseudoStates* dependencyPseudoMask; // 0x18

		::System::Void .ctor(::System::Boolean arg, ::UnityEngine::UIElements::PseudoStates* arg, ::UnityEngine::UIElements::PseudoStates* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::UIElements::PseudoStates*, ::UnityEngine::UIElements::PseudoStates*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_MATCHRESULTINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

