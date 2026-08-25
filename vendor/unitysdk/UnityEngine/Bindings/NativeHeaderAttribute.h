#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_SET_HEADER_OFFSET UNITYSDK_OFFSET(0xA2A58C0)
#define UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A58D0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeHeaderAttribute_TypeDefinitionIndex = 37879;

	class NativeHeaderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Header_k__BackingField; // 0x10

		::System::Void set_Header(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_SET_HEADER_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

