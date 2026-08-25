#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UI_BASEVERTEXEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA489240)
#define UNITYENGINE_UI_BASEVERTEXEFFECT_MODIFYVERTICES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int BaseVertexEffect_TypeDefinitionIndex = 34867;

	class BaseVertexEffect : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEVERTEXEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ModifyVertices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEVERTEXEFFECT_MODIFYVERTICES_OFFSET))(arg, nullptr);
		}

	};
}

