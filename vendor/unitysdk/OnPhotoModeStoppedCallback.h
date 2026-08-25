#pragma once
#include "unitysdk.h"

#define ONPHOTOMODESTOPPEDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2477D0)
#define ONPHOTOMODESTOPPEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2478A0)

	inline static constexpr unsigned int OnPhotoModeStoppedCallback_TypeDefinitionIndex = 31267;

	class OnPhotoModeStoppedCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONPHOTOMODESTOPPEDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(PhotoCaptureResult* arg)
		{
			((::System::Void(*)(PhotoCaptureResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONPHOTOMODESTOPPEDCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

