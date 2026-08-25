#pragma once
#include "unitysdk.h"

#define DICTATIONERRORHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA246EC0)
#define DICTATIONERRORHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA246F90)

	inline static constexpr unsigned int DictationErrorHandler_TypeDefinitionIndex = 31255;

	class DictationErrorHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICTATIONERRORHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DICTATIONERRORHANDLER_INVOKE_OFFSET))(str, arg, nullptr);
		}

	};

