#pragma once
#include "unitysdk.h"

namespace UnityEngine::Windows::Speech { class PhraseRecognizedEventArgs; }

#define PHRASERECOGNIZEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA246A90)
#define PHRASERECOGNIZEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA246B60)

	inline static constexpr unsigned int PhraseRecognizedDelegate_TypeDefinitionIndex = 31250;

	class PhraseRecognizedDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PHRASERECOGNIZEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + PHRASERECOGNIZEDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

