#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA010A90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ClipperException_TypeDefinitionIndex = 32456;

	class ClipperException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

