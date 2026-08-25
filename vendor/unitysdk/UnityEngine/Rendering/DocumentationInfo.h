#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_DOCUMENTATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB5BC0)
#define UNITYENGINE_RENDERING_DOCUMENTATIONINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9FB5BD0)
#define UNITYENGINE_RENDERING_DOCUMENTATIONINFO_GETPAGELINK_OFFSET UNITYSDK_OFFSET(0x9FB5B50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DocumentationInfo_TypeDefinitionIndex = 33986;

	class DocumentationInfo : public Il2CppObject
	{
	public:
		::System::String* fallbackVersion; // 0x0
		::System::String* url; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DOCUMENTATIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DOCUMENTATIONINFO_GET_VERSION_OFFSET))(nullptr);
		}

		::System::String* GetPageLink(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DOCUMENTATIONINFO_GETPAGELINK_OFFSET))(str, str, nullptr);
		}

	};
}

