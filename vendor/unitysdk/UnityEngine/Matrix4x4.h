#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class FrustumPlanes; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Quaternion&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class FrustumPlanes&; }

#define UNITYENGINE_MATRIX4X4_GETROTATION_OFFSET UNITYSDK_OFFSET(0xA220C40)
#define UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_OFFSET UNITYSDK_OFFSET(0xA220CD0)
#define UNITYENGINE_MATRIX4X4_DECOMPOSEPROJECTION_OFFSET UNITYSDK_OFFSET(0xA220D70)
#define UNITYENGINE_MATRIX4X4_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA220E20)
#define UNITYENGINE_MATRIX4X4_GET_LOSSYSCALE_OFFSET UNITYSDK_OFFSET(0xA220E80)
#define UNITYENGINE_MATRIX4X4_GET_DECOMPOSEPROJECTION_OFFSET UNITYSDK_OFFSET(0xA220EF0)
#define UNITYENGINE_MATRIX4X4_TRS_OFFSET UNITYSDK_OFFSET(0xA220F60)
#define UNITYENGINE_MATRIX4X4_SETTRS_OFFSET UNITYSDK_OFFSET(0xA221040)
#define UNITYENGINE_MATRIX4X4_INVERSE3DAFFINE_OFFSET UNITYSDK_OFFSET(0xA221120)
#define UNITYENGINE_MATRIX4X4_INVERSE_OFFSET UNITYSDK_OFFSET(0xA2211A0)
#define UNITYENGINE_MATRIX4X4_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0xA221260)
#define UNITYENGINE_MATRIX4X4_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0xA221330)
#define UNITYENGINE_MATRIX4X4_GET_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0xA2213F0)
#define UNITYENGINE_MATRIX4X4_ORTHO_OFFSET UNITYSDK_OFFSET(0xA2214C0)
#define UNITYENGINE_MATRIX4X4_PERSPECTIVE_OFFSET UNITYSDK_OFFSET(0xA221670)
#define UNITYENGINE_MATRIX4X4_LOOKAT_OFFSET UNITYSDK_OFFSET(0xA2217D0)
#define UNITYENGINE_MATRIX4X4_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2218B0)
#define UNITYENGINE_MATRIX4X4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA221960)
#define UNITYENGINE_MATRIX4X4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA221970)
#define UNITYENGINE_MATRIX4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA221A40)
#define UNITYENGINE_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0xA221CA0)
#define UNITYENGINE_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0xA221D80)
#define UNITYENGINE_MATRIX4X4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA221E00)
#define UNITYENGINE_MATRIX4X4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA223A20)
#define UNITYENGINE_MATRIX4X4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA223A90)
#define UNITYENGINE_MATRIX4X4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA223B90)
#define UNITYENGINE_MATRIX4X4_GETCOLUMN_OFFSET UNITYSDK_OFFSET(0xA221BD0)
#define UNITYENGINE_MATRIX4X4_GETROW_OFFSET UNITYSDK_OFFSET(0xA223CA0)
#define UNITYENGINE_MATRIX4X4_SETCOLUMN_OFFSET UNITYSDK_OFFSET(0xA223D90)
#define UNITYENGINE_MATRIX4X4_MULTIPLYPOINT_OFFSET UNITYSDK_OFFSET(0xA223E00)
#define UNITYENGINE_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET UNITYSDK_OFFSET(0xA223EE0)
#define UNITYENGINE_MATRIX4X4_MULTIPLYVECTOR_OFFSET UNITYSDK_OFFSET(0xA223F70)
#define UNITYENGINE_MATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0xA223FF0)
#define UNITYENGINE_MATRIX4X4_TRANSLATE_OFFSET UNITYSDK_OFFSET(0xA224030)
#define UNITYENGINE_MATRIX4X4_ROTATE_OFFSET UNITYSDK_OFFSET(0xA224080)
#define UNITYENGINE_MATRIX4X4_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA2241E0)
#define UNITYENGINE_MATRIX4X4_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0xA224240)
#define UNITYENGINE_MATRIX4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2242A0)
#define UNITYENGINE_MATRIX4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2242B0)
#define UNITYENGINE_MATRIX4X4_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA224890)
#define UNITYENGINE_MATRIX4X4_GETROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA220C90)
#define UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA220D30)
#define UNITYENGINE_MATRIX4X4_DECOMPOSEPROJECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA220DE0)
#define UNITYENGINE_MATRIX4X4_TRS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA220FF0)
#define UNITYENGINE_MATRIX4X4_INVERSE3DAFFINE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA221160)
#define UNITYENGINE_MATRIX4X4_INVERSE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA221220)
#define UNITYENGINE_MATRIX4X4_TRANSPOSE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2213B0)
#define UNITYENGINE_MATRIX4X4_ORTHO_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2215F0)
#define UNITYENGINE_MATRIX4X4_PERSPECTIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA221750)
#define UNITYENGINE_MATRIX4X4_LOOKAT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA221860)

namespace UnityEngine
{
	inline static constexpr unsigned int Matrix4x4_TypeDefinitionIndex = 31098;

	class Matrix4x4 : public Il2CppObject
	{
	public:
		::System::Single m00; // 0x10
		::System::Single m10; // 0x14
		::System::Single m20; // 0x18
		::System::Single m30; // 0x1C
		::System::Single m01; // 0x20
		::System::Single m11; // 0x24
		::System::Single m21; // 0x28
		::System::Single m31; // 0x2C
		::System::Single m02; // 0x30
		::System::Single m12; // 0x34
		::System::Single m22; // 0x38
		::System::Single m32; // 0x3C
		::System::Single m03; // 0x40
		::System::Single m13; // 0x44
		::System::Single m23; // 0x48
		::System::Single m33; // 0x4C
		::UnityEngine::Matrix4x4* zeroMatrix; // 0x0
		::UnityEngine::Matrix4x4* identityMatrix; // 0x40

		::UnityEngine::Quaternion* GetRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetLossyScale()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::FrustumPlanes* DecomposeProjection()
		{
			return (return (::UnityEngine::FrustumPlanes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_DECOMPOSEPROJECTION_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_rotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_lossyScale()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_LOSSYSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::FrustumPlanes* get_decomposeProjection()
		{
			return (return (::UnityEngine::FrustumPlanes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_DECOMPOSEPROJECTION_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* TRS(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetTRS(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SETTRS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Inverse3DAffine(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_INVERSE3DAFFINE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* Inverse(::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_INVERSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* get_inverse()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_INVERSE_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* Transpose(::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRANSPOSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* get_transpose()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_TRANSPOSE_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* Ortho(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ORTHO_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* Perspective(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_PERSPECTIVE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* LookAt(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_LOOKAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SET_ITEM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Matrix4x4* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_EQUALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* op_Multiply(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* op_Multiply(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* GetColumn(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETCOLUMN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* GetRow(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETROW_OFFSET))(arg, nullptr);
		}

		::System::Void SetColumn(::System::Int32 arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SETCOLUMN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* MultiplyPoint(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_MULTIPLYPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* MultiplyPoint3x4(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* MultiplyVector(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_MULTIPLYVECTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* Scale(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SCALE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* Translate(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRANSLATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* Rotate(::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ROTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* get_zero()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ZERO_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* get_identity()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_IDENTITY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetRotation_Injected(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETROTATION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetLossyScale_Injected(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DecomposeProjection_Injected(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::FrustumPlanes&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::FrustumPlanes&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_DECOMPOSEPROJECTION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TRS_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRS_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Inverse3DAffine_Injected(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_INVERSE3DAFFINE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Inverse_Injected(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_INVERSE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Transpose_Injected(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRANSPOSE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Ortho_Injected(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ORTHO_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Perspective_Injected(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_PERSPECTIVE_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void LookAt_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_LOOKAT_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

