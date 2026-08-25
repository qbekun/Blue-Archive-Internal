#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_NATIVEWRITABLESELFATTRIBUTE_SET_WRITABLESELF_OFFSET UNITYSDK_OFFSET(0xA2A5B00)
#define UNITYENGINE_BINDINGS_NATIVEWRITABLESELFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5B10)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeWritableSelfAttribute_TypeDefinitionIndex = 37881;

	class NativeWritableSelfAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _WritableSelf_k__BackingField; // 0x10

		::System::Void set_WritableSelf(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEWRITABLESELFATTRIBUTE_SET_WRITABLESELF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEWRITABLESELFATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

