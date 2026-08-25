#pragma once
#include "unitysdk.h"

#define ONSCREENRESIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F7A20)
#define ONSCREENRESIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F7AE0)
#define ONSCREENRESIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F7B10)
#define ONSCREENRESIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F7B20)

	inline static constexpr unsigned int OnScreenResize_TypeDefinitionIndex = 205;

	class OnScreenResize : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONSCREENRESIZE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONSCREENRESIZE_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONSCREENRESIZE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONSCREENRESIZE_INVOKE_OFFSET))(nullptr);
		}

	};

