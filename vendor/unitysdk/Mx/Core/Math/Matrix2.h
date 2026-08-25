#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class Matrix2; }
namespace UnityEngine { class Vector2; }

#define MX_CORE_MATH_MATRIX2_.CTOR_OFFSET UNITYSDK_OFFSET(0x102C860)
#define MX_CORE_MATH_MATRIX2_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x102C8E0)
#define MX_CORE_MATH_MATRIX2_GET_UP_OFFSET UNITYSDK_OFFSET(0x102C950)
#define MX_CORE_MATH_MATRIX2_SET_UP_OFFSET UNITYSDK_OFFSET(0x102C960)
#define MX_CORE_MATH_MATRIX2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x102C970)
#define MX_CORE_MATH_MATRIX2_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x102C990)
#define MX_CORE_MATH_MATRIX2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x102C9B0)
#define MX_CORE_MATH_MATRIX2_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x102C9C0)
#define MX_CORE_MATH_MATRIX2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x102C9D0)
#define MX_CORE_MATH_MATRIX2_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x102C9F0)
#define MX_CORE_MATH_MATRIX2_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x102CA10)
#define MX_CORE_MATH_MATRIX2_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x102CA30)
#define MX_CORE_MATH_MATRIX2_GET_BACKWARD_OFFSET UNITYSDK_OFFSET(0x102CA50)
#define MX_CORE_MATH_MATRIX2_SET_BACKWARD_OFFSET UNITYSDK_OFFSET(0x102CA60)
#define MX_CORE_MATH_MATRIX2_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x102CA70)
#define MX_CORE_MATH_MATRIX2_SET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x102CA80)
#define MX_CORE_MATH_MATRIX2_CREATESCALE_OFFSET UNITYSDK_OFFSET(0x102CA90)
#define MX_CORE_MATH_MATRIX2_CREATESCALE_OFFSET UNITYSDK_OFFSET(0x102CB10)
#define MX_CORE_MATH_MATRIX2_CREATEROTATE_OFFSET UNITYSDK_OFFSET(0x102CB40)
#define MX_CORE_MATH_MATRIX2_CREATEROTATE_OFFSET UNITYSDK_OFFSET(0x102CDA0)
#define MX_CORE_MATH_MATRIX2_CREATEROTATE_OFFSET UNITYSDK_OFFSET(0x1028FB0)
#define MX_CORE_MATH_MATRIX2_CREATETRANSLATE_OFFSET UNITYSDK_OFFSET(0x1029130)
#define MX_CORE_MATH_MATRIX2_CREATETRANSLATE_OFFSET UNITYSDK_OFFSET(0x102CF80)
#define MX_CORE_MATH_MATRIX2_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x102D080)
#define MX_CORE_MATH_MATRIX2_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1029280)
#define MX_CORE_MATH_MATRIX2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x102D5C0)
#define MX_CORE_MATH_MATRIX2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x102D660)

namespace MX::Core::Math
{
	inline static constexpr unsigned int Matrix2_TypeDefinitionIndex = 12816;

	class Matrix2 : public Il2CppObject
	{
	public:
		::System::Single M11; // 0x10
		::System::Single M12; // 0x14
		::System::Single M13; // 0x18
		::System::Single M21; // 0x1C
		::System::Single M22; // 0x20
		::System::Single M23; // 0x24
		::System::Single M31; // 0x28
		::System::Single M32; // 0x2C
		::System::Single M33; // 0x30
		::MX::Core::Math::Matrix2* _Identity_k__BackingField; // 0x0

		::System::Void .ctor(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6, ::System::Single arg7, ::System::Single arg8, ::System::Single arg9)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Core::Math::Matrix2* get_Identity()
		{
			return ((::MX::Core::Math::Matrix2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_GET_IDENTITY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Up()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_GET_UP_OFFSET))(nullptr);
		}

		::System::Void set_Up(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_SET_UP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Down()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_GET_DOWN_OFFSET))(nullptr);
		}

		::System::Void set_Down(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_SET_DOWN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Right()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Right(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Left()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Void set_Left(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Backward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_GET_BACKWARD_OFFSET))(nullptr);
		}

		::System::Void set_Backward(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_SET_BACKWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Translation()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_GET_TRANSLATION_OFFSET))(nullptr);
		}

		::System::Void set_Translation(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_SET_TRANSLATION_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::Matrix2* CreateScale(::System::Single arg)
		{
			return ((::MX::Core::Math::Matrix2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_CREATESCALE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::Matrix2* CreateScale(::System::Single arg, ::System::Single arg2)
		{
			return ((::MX::Core::Math::Matrix2*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_CREATESCALE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::Matrix2* CreateRotate(::UnityEngine::Vector2* arg)
		{
			return ((::MX::Core::Math::Matrix2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_CREATEROTATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::Matrix2* CreateRotate(::System::Double arg)
		{
			return ((::MX::Core::Math::Matrix2*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_CREATEROTATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::Matrix2* CreateRotate(::System::Single arg)
		{
			return ((::MX::Core::Math::Matrix2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_CREATEROTATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::Matrix2* CreateTranslate(::UnityEngine::Vector2* arg)
		{
			return ((::MX::Core::Math::Matrix2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_CREATETRANSLATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::Matrix2* CreateTranslate(::System::Single arg, ::System::Single arg2)
		{
			return ((::MX::Core::Math::Matrix2*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_CREATETRANSLATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::Matrix2* Multiply(::MX::Core::Math::Matrix2* arg, ::MX::Core::Math::Matrix2* arg2)
		{
			return ((::MX::Core::Math::Matrix2*(*)(::MX::Core::Math::Matrix2*, ::MX::Core::Math::Matrix2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Transform(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_TRANSFORM_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::Matrix2* op_Multiply(::MX::Core::Math::Matrix2* arg, ::MX::Core::Math::Matrix2* arg2)
		{
			return ((::MX::Core::Math::Matrix2*(*)(::MX::Core::Math::Matrix2*, ::MX::Core::Math::Matrix2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATRIX2_.CCTOR_OFFSET))(nullptr);
		}

	};
}

