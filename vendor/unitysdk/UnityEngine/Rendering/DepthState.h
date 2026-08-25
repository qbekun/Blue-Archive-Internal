#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DepthState; }
namespace UnityEngine::Rendering { class CompareFunction; }

#define UNITYENGINE_RENDERING_DEPTHSTATE_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xA25D590)
#define UNITYENGINE_RENDERING_DEPTHSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA25D5E0)
#define UNITYENGINE_RENDERING_DEPTHSTATE_GET_COMPAREFUNCTION_OFFSET UNITYSDK_OFFSET(0xA25D640)
#define UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25D650)
#define UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25D680)
#define UNITYENGINE_RENDERING_DEPTHSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA25D710)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DepthState_TypeDefinitionIndex = 31550;

	class DepthState : public Il2CppObject
	{
	public:
		::System::Byte m_WriteEnabled; // 0x10
		::System::SByte m_CompareFunction; // 0x11

		::UnityEngine::Rendering::DepthState* get_defaultValue()
		{
			return (return (::UnityEngine::Rendering::DepthState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::UnityEngine::Rendering::CompareFunction* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Rendering::CompareFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::CompareFunction* get_compareFunction()
		{
			return (return (::UnityEngine::Rendering::CompareFunction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_GET_COMPAREFUNCTION_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::DepthState* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::DepthState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

