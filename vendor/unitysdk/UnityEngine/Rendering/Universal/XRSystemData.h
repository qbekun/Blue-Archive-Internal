#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02D160)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int XRSystemData_TypeDefinitionIndex = 32528;

	class XRSystemData : public Il2CppObject
	{
	public:
		ShaderResources* shaders; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRSYSTEMDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

