#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class Scanbeam; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCANBEAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9BC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Scanbeam_TypeDefinitionIndex = 32447;

	class Scanbeam : public Il2CppObject
	{
	public:
		::System::Int64 Y; // 0x10
		::UnityEngine::Rendering::Universal::Scanbeam* Next; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCANBEAM_.CTOR_OFFSET))(nullptr);
		}

	};
}

