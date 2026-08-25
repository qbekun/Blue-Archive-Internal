#pragma once
#include "unitysdk.h"

namespace UnityEngine { class CullingGroupEvent; }

#define STATECHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EA950)
#define STATECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1EAA20)

	inline static constexpr unsigned int StateChanged_TypeDefinitionIndex = 30967;

	class StateChanged : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STATECHANGED_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::CullingGroupEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::CullingGroupEvent*, ::PVOID))((::PBYTE)hIl2Cpp + STATECHANGED_INVOKE_OFFSET))(arg, nullptr);
		}

	};

