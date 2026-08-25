#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DOCUMENTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA059680)
#define UNITYENGINE_RENDERING_UNIVERSAL_DOCUMENTATION_GETPAGELINK_OFFSET UNITYSDK_OFFSET(0xA059690)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Documentation_TypeDefinitionIndex = 32641;

	class Documentation : public Il2CppObject
	{
	public:
		::System::String* packageName; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DOCUMENTATION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetPageLink(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DOCUMENTATION_GETPAGELINK_OFFSET))(str, nullptr);
		}

	};
}

