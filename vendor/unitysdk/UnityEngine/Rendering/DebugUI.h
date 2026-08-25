#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_DEBUGUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB0EC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_TypeDefinitionIndex = 33976;

	class DebugUI : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_.CTOR_OFFSET))(nullptr);
		}

	};
}

