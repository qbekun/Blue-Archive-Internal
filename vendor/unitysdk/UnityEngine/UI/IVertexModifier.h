#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UI_IVERTEXMODIFIER_MODIFYVERTICES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int IVertexModifier_TypeDefinitionIndex = 34869;

	class IVertexModifier : public Il2CppObject
	{
	public:
		::System::Void ModifyVertices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IVERTEXMODIFIER_MODIFYVERTICES_OFFSET))(arg, nullptr);
		}

	};
}

