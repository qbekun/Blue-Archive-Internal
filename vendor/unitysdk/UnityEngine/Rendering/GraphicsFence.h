#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class GraphicsFenceType; }
namespace UnityEngine::Rendering { class SynchronisationStageFlags; }
namespace UnityEngine::Rendering { class SynchronisationStage; }

#define UNITYENGINE_RENDERING_GRAPHICSFENCE_TRANSLATESYNCHRONIZATIONSTAGETOFLAGS_OFFSET UNITYSDK_OFFSET(0xA251420)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_INITPOSTALLOCATION_OFFSET UNITYSDK_OFFSET(0xA251440)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_ISFENCEPENDING_OFFSET UNITYSDK_OFFSET(0xA251570)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_VALIDATE_OFFSET UNITYSDK_OFFSET(0xA2515F0)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_GETPLATFORMNOTSUPPORTEDVERSION_OFFSET UNITYSDK_OFFSET(0xA251520)
#define UNITYENGINE_RENDERING_GRAPHICSFENCE_GETVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0xA251530)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsFence_TypeDefinitionIndex = 31526;

	class GraphicsFence : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::System::Int32 m_Version; // 0x18
		::UnityEngine::Rendering::GraphicsFenceType* m_FenceType; // 0x1C

		::UnityEngine::Rendering::SynchronisationStageFlags* TranslateSynchronizationStageToFlags(::UnityEngine::Rendering::SynchronisationStage* arg)
		{
			return (return (::UnityEngine::Rendering::SynchronisationStageFlags*(*)(::UnityEngine::Rendering::SynchronisationStage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_TRANSLATESYNCHRONIZATIONSTAGETOFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Void InitPostAllocation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_INITPOSTALLOCATION_OFFSET))(nullptr);
		}

		::System::Boolean IsFencePending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_ISFENCEPENDING_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_VALIDATE_OFFSET))(nullptr);
		}

		::System::Int32 GetPlatformNotSupportedVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_GETPLATFORMNOTSUPPORTEDVERSION_OFFSET))(nullptr);
		}

		::System::Int32 GetVersionNumber(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSFENCE_GETVERSIONNUMBER_OFFSET))(arg, nullptr);
		}

	};
}

