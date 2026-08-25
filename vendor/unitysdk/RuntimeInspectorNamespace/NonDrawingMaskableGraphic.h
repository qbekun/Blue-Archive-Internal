#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class VertexHelper; }

#define RUNTIMEINSPECTORNAMESPACE_NONDRAWINGMASKABLEGRAPHIC_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x9581BB0)
#define RUNTIMEINSPECTORNAMESPACE_NONDRAWINGMASKABLEGRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x9581BC0)
#define RUNTIMEINSPECTORNAMESPACE_NONDRAWINGMASKABLEGRAPHIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581BE0)
#define RUNTIMEINSPECTORNAMESPACE_NONDRAWINGMASKABLEGRAPHIC_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x9581BF0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int NonDrawingMaskableGraphic_TypeDefinitionIndex = 35695;

	class NonDrawingMaskableGraphic : public Il2CppObject
	{
	public:
		::System::Void SetVerticesDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NONDRAWINGMASKABLEGRAPHIC_SETVERTICESDIRTY_OFFSET))(nullptr);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NONDRAWINGMASKABLEGRAPHIC_ONPOPULATEMESH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NONDRAWINGMASKABLEGRAPHIC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMaterialDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NONDRAWINGMASKABLEGRAPHIC_SETMATERIALDIRTY_OFFSET))(nullptr);
		}

	};
}

