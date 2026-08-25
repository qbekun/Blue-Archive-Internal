#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_IMESHMODIFIER_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_IMESHMODIFIER_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int IMeshModifier_TypeDefinitionIndex = 34870;

	class IMeshModifier : public Il2CppObject
	{
	public:
		::System::Void ModifyMesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMESHMODIFIER_MODIFYMESH_OFFSET))(arg, nullptr);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMESHMODIFIER_MODIFYMESH_OFFSET))(arg, nullptr);
		}

	};
}

