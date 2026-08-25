#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class Int128; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF94E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF94F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9500)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x9FF9510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9FF9520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9FF95B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_EQUALS_OFFSET UNITYSDK_OFFSET(0x9FF9650)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FF96D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x9FF9700)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x9FF9720)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x9FF9740)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9FF9780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x9FF97C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9FF97F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INT128_INT128MUL_OFFSET UNITYSDK_OFFSET(0x9FF9890)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Int128_TypeDefinitionIndex = 32433;

	class Int128 : public Il2CppObject
	{
	public:
		::System::Int64 hi; // 0x10
		::System::UInt64 lo; // 0x18

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::Int128* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Int128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNegative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_ISNEGATIVE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::Universal::Int128* arg, ::UnityEngine::Rendering::Universal::Int128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::Int128*, ::UnityEngine::Rendering::Universal::Int128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::Universal::Int128* arg, ::UnityEngine::Rendering::Universal::Int128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::Int128*, ::UnityEngine::Rendering::Universal::Int128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_GreaterThan(::UnityEngine::Rendering::Universal::Int128* arg, ::UnityEngine::Rendering::Universal::Int128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::Int128*, ::UnityEngine::Rendering::Universal::Int128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThan(::UnityEngine::Rendering::Universal::Int128* arg, ::UnityEngine::Rendering::Universal::Int128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::Int128*, ::UnityEngine::Rendering::Universal::Int128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Int128* op_Addition(::UnityEngine::Rendering::Universal::Int128* arg, ::UnityEngine::Rendering::Universal::Int128* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::Int128*(*)(::UnityEngine::Rendering::Universal::Int128*, ::UnityEngine::Rendering::Universal::Int128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Int128* op_Subtraction(::UnityEngine::Rendering::Universal::Int128* arg, ::UnityEngine::Rendering::Universal::Int128* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::Int128*(*)(::UnityEngine::Rendering::Universal::Int128*, ::UnityEngine::Rendering::Universal::Int128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Int128* op_UnaryNegation(::UnityEngine::Rendering::Universal::Int128* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::Int128*(*)(::UnityEngine::Rendering::Universal::Int128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Double op_Explicit(::UnityEngine::Rendering::Universal::Int128* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Rendering::Universal::Int128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Int128* Int128Mul(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::UnityEngine::Rendering::Universal::Int128*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INT128_INT128MUL_OFFSET))(arg, arg, nullptr);
		}

	};
}

