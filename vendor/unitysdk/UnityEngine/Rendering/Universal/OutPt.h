#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class IntPoint; }
namespace UnityEngine::Rendering::Universal { class OutPt; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OUTPT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9BF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OutPt_TypeDefinitionIndex = 32450;

	class OutPt : public Il2CppObject
	{
	public:
		::System::Int32 Idx; // 0x10
		::UnityEngine::Rendering::Universal::IntPoint* Pt; // 0x18
		::UnityEngine::Rendering::Universal::OutPt* Next; // 0x48
		::UnityEngine::Rendering::Universal::OutPt* Prev; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OUTPT_.CTOR_OFFSET))(nullptr);
		}

	};
}

