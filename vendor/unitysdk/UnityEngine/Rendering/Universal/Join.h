#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class OutPt; }
namespace UnityEngine::Rendering::Universal { class IntPoint; }

#define UNITYENGINE_RENDERING_UNIVERSAL_JOIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9C00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Join_TypeDefinitionIndex = 32451;

	class Join : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::OutPt* OutPt1; // 0x10
		::UnityEngine::Rendering::Universal::OutPt* OutPt2; // 0x18
		::UnityEngine::Rendering::Universal::IntPoint* OffPt; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_JOIN_.CTOR_OFFSET))(nullptr);
		}

	};
}

