#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderTagId; }

#define UNITYENGINE_RENDERING_SHADERTAGID_.CTOR_OFFSET UNITYSDK_OFFSET(0xA263A80)
#define UNITYENGINE_RENDERING_SHADERTAGID_GET_ID_OFFSET UNITYSDK_OFFSET(0xA25D820)
#define UNITYENGINE_RENDERING_SHADERTAGID_SET_ID_OFFSET UNITYSDK_OFFSET(0xA25DA80)
#define UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_OFFSET UNITYSDK_OFFSET(0xA263AA0)
#define UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25DD10)
#define UNITYENGINE_RENDERING_SHADERTAGID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA263B10)
#define UNITYENGINE_RENDERING_SHADERTAGID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA263B30)
#define UNITYENGINE_RENDERING_SHADERTAGID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA263B40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderTagId_TypeDefinitionIndex = 31569;

	class ShaderTagId : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ShaderTagId* none; // 0x0
		::System::Int32 m_Id; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::ShaderTagId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::ShaderTagId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::ShaderTagId* arg, ::UnityEngine::Rendering::ShaderTagId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::ShaderTagId*, ::UnityEngine::Rendering::ShaderTagId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::ShaderTagId* arg, ::UnityEngine::Rendering::ShaderTagId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::ShaderTagId*, ::UnityEngine::Rendering::ShaderTagId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

