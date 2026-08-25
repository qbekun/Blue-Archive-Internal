#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_URPHELPURLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA059630)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int URPHelpURLAttribute_TypeDefinitionIndex = 32640;

	class URPHelpURLAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_URPHELPURLATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

