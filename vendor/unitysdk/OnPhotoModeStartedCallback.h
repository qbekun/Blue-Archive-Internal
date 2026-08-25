#pragma once
#include "unitysdk.h"

#define ONPHOTOMODESTARTEDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2476D0)
#define ONPHOTOMODESTARTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2477A0)

	inline static constexpr unsigned int OnPhotoModeStartedCallback_TypeDefinitionIndex = 31266;

	class OnPhotoModeStartedCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONPHOTOMODESTARTEDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(PhotoCaptureResult* arg)
		{
			((::System::Void(*)(PhotoCaptureResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONPHOTOMODESTARTEDCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

