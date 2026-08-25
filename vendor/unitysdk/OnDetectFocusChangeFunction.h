#pragma once
#include "unitysdk.h"

#define ONDETECTFOCUSCHANGEFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C0BC0)
#define ONDETECTFOCUSCHANGEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3C0C80)

	inline static constexpr unsigned int OnDetectFocusChangeFunction_TypeDefinitionIndex = 30386;

	class OnDetectFocusChangeFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONDETECTFOCUSCHANGEFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDETECTFOCUSCHANGEFUNCTION_INVOKE_OFFSET))(nullptr);
		}

	};

