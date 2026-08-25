#pragma once
#include "../../unitysdk.h"

namespace UnityEngineInternal::Input { class NativeInputUpdateType; }

#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA292EB0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA292F80)

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeUpdateCallback_TypeDefinitionIndex = 38003;

	class NativeUpdateCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngineInternal::Input::NativeInputUpdateType* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngineInternal::Input::NativeInputUpdateType*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

