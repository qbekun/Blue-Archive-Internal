#pragma once
#include "unitysdk.h"

namespace UnityEngine::Windows::Speech { class ConfidenceLevel; }

#define DICTATIONRESULTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA246D00)
#define DICTATIONRESULTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA246DD0)

	inline static constexpr unsigned int DictationResultDelegate_TypeDefinitionIndex = 31253;

	class DictationResultDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICTATIONRESULTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, ::UnityEngine::Windows::Speech::ConfidenceLevel* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + DICTATIONRESULTDELEGATE_INVOKE_OFFSET))(str, arg, nullptr);
		}

	};

