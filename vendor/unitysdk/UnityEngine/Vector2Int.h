#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_VECTOR2INT_GET_X_OFFSET UNITYSDK_OFFSET(0xA22A610)
#define UNITYENGINE_VECTOR2INT_SET_X_OFFSET UNITYSDK_OFFSET(0xA22A620)
#define UNITYENGINE_VECTOR2INT_GET_Y_OFFSET UNITYSDK_OFFSET(0xA22A630)
#define UNITYENGINE_VECTOR2INT_SET_Y_OFFSET UNITYSDK_OFFSET(0xA22A640)
#define UNITYENGINE_VECTOR2INT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22A650)
#define UNITYENGINE_VECTOR2INT_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA22A660)
#define UNITYENGINE_VECTOR2INT_MAX_OFFSET UNITYSDK_OFFSET(0xA22A690)
#define UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA22A6C0)
#define UNITYENGINE_VECTOR2INT_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0xA22A6E0)
#define UNITYENGINE_VECTOR2INT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0xA22A7A0)
#define UNITYENGINE_VECTOR2INT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA22A7C0)
#define UNITYENGINE_VECTOR2INT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA22A7E0)
#define UNITYENGINE_VECTOR2INT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22A800)
#define UNITYENGINE_VECTOR2INT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22A880)
#define UNITYENGINE_VECTOR2INT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA22A8A0)
#define UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA22A8E0)
#define UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA22A8F0)
#define UNITYENGINE_VECTOR2INT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA22AA80)
#define UNITYENGINE_VECTOR2INT_GET_ONE_OFFSET UNITYSDK_OFFSET(0xA22AAC0)
#define UNITYENGINE_VECTOR2INT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA22AB00)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2Int_TypeDefinitionIndex = 31103;

	class Vector2Int : public Il2CppObject
	{
	public:
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14
		::UnityEngine::Vector2Int* s_Zero; // 0x0
		::UnityEngine::Vector2Int* s_One; // 0x8
		::UnityEngine::Vector2Int* s_Up; // 0x10
		::UnityEngine::Vector2Int* s_Down; // 0x18
		::UnityEngine::Vector2Int* s_Left; // 0x20
		::UnityEngine::Vector2Int* s_Right; // 0x28

		::System::Int32 get_x()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_x(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_y()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_y(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_magnitude()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_MAGNITUDE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* Max(::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2Int* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2Int*, ::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_MAX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* op_Implicit(::UnityEngine::Vector2Int* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* FloorToInt(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_FLOORTOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* op_Division(::UnityEngine::Vector2Int* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2Int*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2Int* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2Int*, ::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2Int* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2Int*, ::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Vector2Int* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Vector2Int* get_zero()
		{
			return (return (::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_ZERO_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* get_one()
		{
			return (return (::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_ONE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

