#pragma once
#include "unitysdk.h"

namespace UnityEngine::Windows::Speech { class DictationCompletionCause; }

#define DICTATIONCOMPLETEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA246DE0)
#define DICTATIONCOMPLETEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA246EB0)

	inline static constexpr unsigned int DictationCompletedDelegate_TypeDefinitionIndex = 31254;

	class DictationCompletedDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICTATIONCOMPLETEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::DictationCompletionCause* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::Speech::DictationCompletionCause*, ::PVOID))((::PBYTE)hIl2Cpp + DICTATIONCOMPLETEDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

