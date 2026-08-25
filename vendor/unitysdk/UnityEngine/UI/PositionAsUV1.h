#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_POSITIONASUV1_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48A9B0)
#define UNITYENGINE_UI_POSITIONASUV1_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xA48A9C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int PositionAsUV1_TypeDefinitionIndex = 34872;

	class PositionAsUV1 : public ::TriInspector::TableListAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_POSITIONASUV1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_POSITIONASUV1_MODIFYMESH_OFFSET))(arg, nullptr);
		}

	};
}

