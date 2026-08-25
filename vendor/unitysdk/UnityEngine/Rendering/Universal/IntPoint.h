#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class IntPoint; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF99A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9FF99E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9FF9A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9FF9A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FF9AA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int IntPoint_TypeDefinitionIndex = 32434;

	class IntPoint : public Il2CppObject
	{
	public:
		::System::Int64 N; // 0x10
		::System::Int64 X; // 0x18
		::System::Int64 Y; // 0x20
		::System::Int64 D; // 0x28
		::System::Double NX; // 0x30
		::System::Double NY; // 0x38

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTPOINT_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

