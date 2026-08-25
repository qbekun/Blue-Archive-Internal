#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ANDROIDJAVAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B3AD0)
#define UNITYENGINE_ANDROIDJAVAEXCEPTION_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0xA1B3B40)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaException_TypeDefinitionIndex = 37059;

	class AndroidJavaException : public Il2CppObject
	{
	public:
		::System::String* mJavaStackTrace; // 0x90

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_StackTrace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAEXCEPTION_GET_STACKTRACE_OFFSET))(nullptr);
		}

	};
}

