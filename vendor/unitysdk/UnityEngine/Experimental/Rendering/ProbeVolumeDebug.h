#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class DebugProbeShadingMode; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEDEBUG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F879B0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeVolumeDebug_TypeDefinitionIndex = 33808;

	class ProbeVolumeDebug : public Il2CppObject
	{
	public:
		::System::Boolean drawProbes; // 0x10
		::System::Boolean drawBricks; // 0x11
		::System::Boolean drawCells; // 0x12
		::System::Boolean realtimeSubdivision; // 0x13
		::System::Int32 subdivisionCellUpdatePerFrame; // 0x14
		::System::Single subdivisionDelayInSeconds; // 0x18
		::UnityEngine::Experimental::Rendering::DebugProbeShadingMode* probeShading; // 0x1C
		::System::Single probeSize; // 0x20
		::System::Single subdivisionViewCullingDistance; // 0x24
		::System::Single probeCullingDistance; // 0x28
		::System::Int32 maxSubdivToVisualize; // 0x2C
		::System::Single exposureCompensation; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMEDEBUG_.CTOR_OFFSET))(nullptr);
		}

	};
}

