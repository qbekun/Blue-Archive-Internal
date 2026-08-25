#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_CORERPHELPURLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB5AD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreRPHelpURLAttribute_TypeDefinitionIndex = 33985;

	class CoreRPHelpURLAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CORERPHELPURLATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

