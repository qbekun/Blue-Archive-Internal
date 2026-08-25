#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class VertexHelper; }

#define RUNTIMEINSPECTORNAMESPACE_NONDRAWINGGRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x9581B20)
#define RUNTIMEINSPECTORNAMESPACE_NONDRAWINGGRAPHIC_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x9581B40)
#define RUNTIMEINSPECTORNAMESPACE_NONDRAWINGGRAPHIC_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x9581B50)
#define RUNTIMEINSPECTORNAMESPACE_NONDRAWINGGRAPHIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581B60)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int NonDrawingGraphic_TypeDefinitionIndex = 35694;

	class NonDrawingGraphic : public Il2CppObject
	{
	public:
		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NONDRAWINGGRAPHIC_ONPOPULATEMESH_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaterialDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NONDRAWINGGRAPHIC_SETMATERIALDIRTY_OFFSET))(nullptr);
		}

		::System::Void SetVerticesDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NONDRAWINGGRAPHIC_SETVERTICESDIRTY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NONDRAWINGGRAPHIC_.CTOR_OFFSET))(nullptr);
		}

	};
}

