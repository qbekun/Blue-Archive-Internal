#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ANDROIDJAVARUNNABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B3A00)
#define UNITYENGINE_ANDROIDJAVARUNNABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1B3AC0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaRunnable_TypeDefinitionIndex = 37058;

	class AndroidJavaRunnable : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLE_INVOKE_OFFSET))(nullptr);
		}

	};
}

