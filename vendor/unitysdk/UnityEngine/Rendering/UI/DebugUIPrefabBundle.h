#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIPREFABBUNDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE77F0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIPrefabBundle_TypeDefinitionIndex = 34142;

	class DebugUIPrefabBundle : public Il2CppObject
	{
	public:
		::System::String* type; // 0x10
		::UnityEngine::RectTransform* prefab; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIPREFABBUNDLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

