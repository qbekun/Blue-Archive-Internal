#pragma once
#include "unitysdk.h"

#define ONCAPTUREDTODISKCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2478D0)
#define ONCAPTUREDTODISKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2479A0)

	inline static constexpr unsigned int OnCapturedToDiskCallback_TypeDefinitionIndex = 31268;

	class OnCapturedToDiskCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCAPTUREDTODISKCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(PhotoCaptureResult* arg)
		{
			((::System::Void(*)(PhotoCaptureResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCAPTUREDTODISKCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

