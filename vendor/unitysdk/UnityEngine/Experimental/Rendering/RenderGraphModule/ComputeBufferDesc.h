#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class ComputeBufferType; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9E750)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9E770)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERDESC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F9E790)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int ComputeBufferDesc_TypeDefinitionIndex = 33858;

	class ComputeBufferDesc : public Il2CppObject
	{
	public:
		::System::Int32 count; // 0x10
		::System::Int32 stride; // 0x14
		::UnityEngine::ComputeBufferType* type; // 0x18
		::System::String* name; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERDESC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::ComputeBufferType* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERDESC_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERDESC_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

