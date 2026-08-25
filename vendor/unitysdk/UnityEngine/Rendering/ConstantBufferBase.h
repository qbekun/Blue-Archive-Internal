#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_CONSTANTBUFFERBASE_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CONSTANTBUFFERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA7730)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ConstantBufferBase_TypeDefinitionIndex = 33888;

	class ConstantBufferBase : public Il2CppObject
	{
	public:
		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFERBASE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CONSTANTBUFFERBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

