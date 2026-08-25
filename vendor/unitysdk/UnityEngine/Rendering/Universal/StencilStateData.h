#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class CompareFunction; }
namespace UnityEngine::Rendering { class StencilOp; }

#define UNITYENGINE_RENDERING_UNIVERSAL_STENCILSTATEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02ABC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int StencilStateData_TypeDefinitionIndex = 32507;

	class StencilStateData : public Il2CppObject
	{
	public:
		::System::Boolean overrideStencilState; // 0x10
		::System::Int32 stencilReference; // 0x14
		::UnityEngine::Rendering::CompareFunction* stencilCompareFunction; // 0x18
		::UnityEngine::Rendering::StencilOp* passOperation; // 0x1C
		::UnityEngine::Rendering::StencilOp* failOperation; // 0x20
		::UnityEngine::Rendering::StencilOp* zFailOperation; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_STENCILSTATEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

