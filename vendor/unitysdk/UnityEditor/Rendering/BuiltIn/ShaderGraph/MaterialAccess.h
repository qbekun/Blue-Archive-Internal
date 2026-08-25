#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Material; }

#define UNITYEDITOR_RENDERING_BUILTIN_SHADERGRAPH_MATERIALACCESS_READMATERIALRAWRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xA49ECA0)

namespace UnityEditor::Rendering::BuiltIn::ShaderGraph
{
	inline static constexpr unsigned int MaterialAccess_TypeDefinitionIndex = 34941;

	class MaterialAccess : public Il2CppObject
	{
	public:
		::System::Int32 ReadMaterialRawRenderQueue(::UnityEngine::Material* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_BUILTIN_SHADERGRAPH_MATERIALACCESS_READMATERIALRAWRENDERQUEUE_OFFSET))(arg, nullptr);
		}

	};
}

