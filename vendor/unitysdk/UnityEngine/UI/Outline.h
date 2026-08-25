#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_OUTLINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA489660)
#define UNITYENGINE_UI_OUTLINE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xA489670)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Outline_TypeDefinitionIndex = 34871;

	class Outline : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINE_MODIFYMESH_OFFSET))(arg, nullptr);
		}

	};
}

