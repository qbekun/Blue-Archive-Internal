#pragma once
#include "unitysdk.h"

namespace UnityEngine::Windows::Speech { class SpeechSystemStatus; }

#define STATUSDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2465D0)
#define STATUSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2466A0)

	inline static constexpr unsigned int StatusDelegate_TypeDefinitionIndex = 31248;

	class StatusDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STATUSDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::SpeechSystemStatus* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::Speech::SpeechSystemStatus*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

