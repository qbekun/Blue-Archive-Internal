#pragma once
#include "unitysdk.h"

#define DICTATIONHYPOTHESISDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA246C20)
#define DICTATIONHYPOTHESISDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA246CF0)

	inline static constexpr unsigned int DictationHypothesisDelegate_TypeDefinitionIndex = 31252;

	class DictationHypothesisDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICTATIONHYPOTHESISDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DICTATIONHYPOTHESISDELEGATE_INVOKE_OFFSET))(str, nullptr);
		}

	};

