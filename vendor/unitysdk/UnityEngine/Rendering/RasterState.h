#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RasterState; }
namespace UnityEngine::Rendering { class CullMode; }

#define UNITYENGINE_RENDERING_RASTERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA25E3C0)
#define UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25E450)
#define UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25E4B0)
#define UNITYENGINE_RENDERING_RASTERSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA25E580)
#define UNITYENGINE_RENDERING_RASTERSTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA25E5E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RasterState_TypeDefinitionIndex = 31558;

	class RasterState : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RasterState* defaultValue; // 0x0
		::UnityEngine::Rendering::CullMode* m_CullingMode; // 0x10
		::System::Int32 m_OffsetUnits; // 0x14
		::System::Single m_OffsetFactor; // 0x18
		::System::Byte m_DepthClip; // 0x1C
		::System::Byte m_Conservative; // 0x1D
		::System::Byte m_Padding1; // 0x1E
		::System::Byte m_Padding2; // 0x1F

		::System::Void .ctor(::UnityEngine::Rendering::CullMode* arg, ::System::Int32 arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CullMode*, ::System::Int32, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RasterState* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::RasterState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

