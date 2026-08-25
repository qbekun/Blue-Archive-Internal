#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA271AD0)
#define UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xA2724A0)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int AssertionException_TypeDefinitionIndex = 31657;

	class AssertionException : public Il2CppObject
	{
	public:
		::System::String* m_UserMessage; // 0x90

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

