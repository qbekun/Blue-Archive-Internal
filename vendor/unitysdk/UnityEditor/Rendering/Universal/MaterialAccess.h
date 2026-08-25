#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Material; }

#define UNITYEDITOR_RENDERING_UNIVERSAL_MATERIALACCESS_READMATERIALRAWRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xA49EC80)

namespace UnityEditor::Rendering::Universal
{
	inline static constexpr unsigned int MaterialAccess_TypeDefinitionIndex = 34940;

	class MaterialAccess : public Il2CppObject
	{
	public:
		::System::Int32 ReadMaterialRawRenderQueue(::UnityEngine::Material* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_MATERIALACCESS_READMATERIALRAWRENDERQUEUE_OFFSET))(arg, nullptr);
		}

	};
}

