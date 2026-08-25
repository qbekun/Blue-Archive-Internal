#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class PseudoStates; }

#define PSEUDOSTATEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41BE00)

	inline static constexpr unsigned int PseudoStateData_TypeDefinitionIndex = 30639;

	class PseudoStateData : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::PseudoStates* state; // 0x10
		::System::Boolean negate; // 0x14

		::System::Void .ctor(::UnityEngine::UIElements::PseudoStates* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PseudoStates*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PSEUDOSTATEDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

