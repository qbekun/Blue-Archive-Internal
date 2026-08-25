#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_DOCUMENTATIONUTILS_GETHELPURL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DocumentationUtils_TypeDefinitionIndex = 33987;

	class DocumentationUtils : public Il2CppObject
	{
	public:
		::System::String* GetHelpURL(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DOCUMENTATIONUTILS_GETHELPURL_OFFSET))(arg, nullptr);
		}

	};
}

