#pragma once
#include "unitysdk.h"

namespace UnityEngine::Windows::Speech { class SpeechError; }

#define ERRORDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2464F0)
#define ERRORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2465C0)

	inline static constexpr unsigned int ErrorDelegate_TypeDefinitionIndex = 31247;

	class ErrorDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ERRORDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::SpeechError* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::Speech::SpeechError*, ::PVOID))((::PBYTE)hIl2Cpp + ERRORDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

