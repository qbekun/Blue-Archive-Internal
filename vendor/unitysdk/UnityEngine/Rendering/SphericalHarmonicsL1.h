#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine::Rendering { class SphericalHarmonicsL1; }

#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9FB5C00)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FB5CC0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_EQUALS_OFFSET UNITYSDK_OFFSET(0x9FB5DC0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FB5F70)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9FB6080)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x9FB60C0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9FB60F0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x9FB62D0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9FB6310)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SphericalHarmonicsL1_TypeDefinitionIndex = 33990;

	class SphericalHarmonicsL1 : public Il2CppObject
	{
	public:
		::UnityEngine::Vector4* shAr; // 0x10
		::UnityEngine::Vector4* shAg; // 0x20
		::UnityEngine::Vector4* shAb; // 0x30
		::UnityEngine::Rendering::SphericalHarmonicsL1* zero; // 0x0

		::System::Boolean op_Equality(::UnityEngine::Rendering::SphericalHarmonicsL1* arg, ::UnityEngine::Rendering::SphericalHarmonicsL1* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::SphericalHarmonicsL1*, ::UnityEngine::Rendering::SphericalHarmonicsL1*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_GETHASHCODE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::SphericalHarmonicsL1* op_Subtraction(::UnityEngine::Rendering::SphericalHarmonicsL1* arg, ::UnityEngine::Rendering::SphericalHarmonicsL1* arg)
		{
			return (return (::UnityEngine::Rendering::SphericalHarmonicsL1*(*)(::UnityEngine::Rendering::SphericalHarmonicsL1*, ::UnityEngine::Rendering::SphericalHarmonicsL1*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::SphericalHarmonicsL1* op_Division(::UnityEngine::Rendering::SphericalHarmonicsL1* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Rendering::SphericalHarmonicsL1*(*)(::UnityEngine::Rendering::SphericalHarmonicsL1*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::SphericalHarmonicsL1* arg, ::UnityEngine::Rendering::SphericalHarmonicsL1* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::SphericalHarmonicsL1*, ::UnityEngine::Rendering::SphericalHarmonicsL1*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::SphericalHarmonicsL1* op_Addition(::UnityEngine::Rendering::SphericalHarmonicsL1* arg, ::UnityEngine::Rendering::SphericalHarmonicsL1* arg)
		{
			return (return (::UnityEngine::Rendering::SphericalHarmonicsL1*(*)(::UnityEngine::Rendering::SphericalHarmonicsL1*, ::UnityEngine::Rendering::SphericalHarmonicsL1*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::SphericalHarmonicsL1* op_Multiply(::UnityEngine::Rendering::SphericalHarmonicsL1* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Rendering::SphericalHarmonicsL1*(*)(::UnityEngine::Rendering::SphericalHarmonicsL1*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL1_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

	};
}

