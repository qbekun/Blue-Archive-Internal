#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE_SET_THROWSEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA2A60B0)
#define UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A60C0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeThrowsAttribute_TypeDefinitionIndex = 37894;

	class NativeThrowsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _ThrowsException_k__BackingField; // 0x10

		::System::Void set_ThrowsException(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE_SET_THROWSEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

