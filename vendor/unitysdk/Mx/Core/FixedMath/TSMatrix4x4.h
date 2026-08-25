#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class Fix64; }
namespace MX::Core::FixedMath { class TSMatrix4x4; }
namespace MX::Core::FixedMath { class TSQuaternion; }
namespace MX::Core::FixedMath { class TSVector3; }

#define MX_CORE_FIXEDMATH_TSMATRIX4X4_.CCTOR_OFFSET UNITYSDK_OFFSET(0x10566F0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_.CTOR_OFFSET UNITYSDK_OFFSET(0x1056890)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x10568E0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x10569C0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ADD_OFFSET UNITYSDK_OFFSET(0x1057180)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ADD_OFFSET UNITYSDK_OFFSET(0x1057260)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_INVERSE_OFFSET UNITYSDK_OFFSET(0x1057400)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_GET_DETERMINANT_OFFSET UNITYSDK_OFFSET(0x1058340)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_INVERSE_OFFSET UNITYSDK_OFFSET(0x10574E0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1058720)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1058800)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATE_OFFSET UNITYSDK_OFFSET(0x1058980)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATE_OFFSET UNITYSDK_OFFSET(0x1058A60)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1058D60)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1058E50)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1058ED0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_TRACE_OFFSET UNITYSDK_OFFSET(0x1058FB0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1059030)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1059110)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x10592D0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1059400)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1059760)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1059AC0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1059EC0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x105A040)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x105A0F0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0x105A200)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0x105A2A0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0x105A3F0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0x105A4F0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0x105A580)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0x105A690)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEX_OFFSET UNITYSDK_OFFSET(0x105A710)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEX_OFFSET UNITYSDK_OFFSET(0x105A8C0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEY_OFFSET UNITYSDK_OFFSET(0x105AB20)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEY_OFFSET UNITYSDK_OFFSET(0x105ACD0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEZ_OFFSET UNITYSDK_OFFSET(0x105AF30)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEZ_OFFSET UNITYSDK_OFFSET(0x105B0E0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_AXISANGLE_OFFSET UNITYSDK_OFFSET(0x105B330)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_ANGLEAXIS_OFFSET UNITYSDK_OFFSET(0x105B7A0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x105B880)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_TRS_OFFSET UNITYSDK_OFFSET(0x105BEA0)
#define MX_CORE_FIXEDMATH_TSMATRIX4X4_TRS_OFFSET UNITYSDK_OFFSET(0x105C390)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int TSMatrix4x4_TypeDefinitionIndex = 12868;

	class TSMatrix4x4 : public Il2CppObject
	{
	public:
		::MX::Core::FixedMath::Fix64* M11; // 0x10
		::MX::Core::FixedMath::Fix64* M12; // 0x18
		::MX::Core::FixedMath::Fix64* M13; // 0x20
		::MX::Core::FixedMath::Fix64* M14; // 0x28
		::MX::Core::FixedMath::Fix64* M21; // 0x30
		::MX::Core::FixedMath::Fix64* M22; // 0x38
		::MX::Core::FixedMath::Fix64* M23; // 0x40
		::MX::Core::FixedMath::Fix64* M24; // 0x48
		::MX::Core::FixedMath::Fix64* M31; // 0x50
		::MX::Core::FixedMath::Fix64* M32; // 0x58
		::MX::Core::FixedMath::Fix64* M33; // 0x60
		::MX::Core::FixedMath::Fix64* M34; // 0x68
		::MX::Core::FixedMath::Fix64* M41; // 0x70
		::MX::Core::FixedMath::Fix64* M42; // 0x78
		::MX::Core::FixedMath::Fix64* M43; // 0x80
		::MX::Core::FixedMath::Fix64* M44; // 0x88
		::MX::Core::FixedMath::TSMatrix4x4* InternalIdentity; // 0x0
		::MX::Core::FixedMath::TSMatrix4x4* Identity; // 0x80
		::MX::Core::FixedMath::TSMatrix4x4* Zero; // 0x100

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5, ::MX::Core::FixedMath::Fix64* arg6, ::MX::Core::FixedMath::Fix64* arg7, ::MX::Core::FixedMath::Fix64* arg8, ::MX::Core::FixedMath::Fix64* arg9, ::MX::Core::FixedMath::Fix64* arg10, ::MX::Core::FixedMath::Fix64* arg11, ::MX::Core::FixedMath::Fix64* arg12, ::MX::Core::FixedMath::Fix64* arg13, ::MX::Core::FixedMath::Fix64* arg14, ::MX::Core::FixedMath::Fix64* arg15, ::MX::Core::FixedMath::Fix64* arg16)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Multiply(::MX::Core::FixedMath::TSMatrix4x4* arg, ::MX::Core::FixedMath::TSMatrix4x4* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSMatrix4x4&* arg, ::MX::Core::FixedMath::TSMatrix4x4&* arg2, ::MX::Core::FixedMath::TSMatrix4x4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix4x4&*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Add(::MX::Core::FixedMath::TSMatrix4x4* arg, ::MX::Core::FixedMath::TSMatrix4x4* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::Core::FixedMath::TSMatrix4x4&* arg, ::MX::Core::FixedMath::TSMatrix4x4&* arg2, ::MX::Core::FixedMath::TSMatrix4x4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix4x4&*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Inverse(::MX::Core::FixedMath::TSMatrix4x4* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_INVERSE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* get_determinant()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_GET_DETERMINANT_OFFSET))(nullptr);
		}

		::System::Void Inverse(::MX::Core::FixedMath::TSMatrix4x4&* arg, ::MX::Core::FixedMath::TSMatrix4x4&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix4x4&*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_INVERSE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Multiply(::MX::Core::FixedMath::TSMatrix4x4* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSMatrix4x4&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSMatrix4x4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix4x4&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Rotate(::MX::Core::FixedMath::TSQuaternion* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Rotate(::MX::Core::FixedMath::TSQuaternion&* arg, ::MX::Core::FixedMath::TSMatrix4x4&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSQuaternion&*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Transpose(::MX::Core::FixedMath::TSMatrix4x4* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_TRANSPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Transpose(::MX::Core::FixedMath::TSMatrix4x4&* arg, ::MX::Core::FixedMath::TSMatrix4x4&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix4x4&*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_TRANSPOSE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* op_Multiply(::MX::Core::FixedMath::TSMatrix4x4* arg, ::MX::Core::FixedMath::TSMatrix4x4* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Trace()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_TRACE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* op_Addition(::MX::Core::FixedMath::TSMatrix4x4* arg, ::MX::Core::FixedMath::TSMatrix4x4* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* op_UnaryNegation(::MX::Core::FixedMath::TSMatrix4x4* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* op_Subtraction(::MX::Core::FixedMath::TSMatrix4x4* arg, ::MX::Core::FixedMath::TSMatrix4x4* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::FixedMath::TSMatrix4x4* arg, ::MX::Core::FixedMath::TSMatrix4x4* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::FixedMath::TSMatrix4x4* arg, ::MX::Core::FixedMath::TSMatrix4x4* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSMatrix4x4*, ::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_GETHASHCODE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Translate(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_TRANSLATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Translate(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_TRANSLATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Scale(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Scale(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::TSVector3* arg4)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Scale(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Scale(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Scale(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* Scale(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_SCALE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* RotateX(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEX_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* RotateX(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEX_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* RotateY(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEY_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* RotateY(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* RotateZ(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEZ_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* RotateZ(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ROTATEZ_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AxisAngle(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSMatrix4x4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_AXISANGLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* AngleAxis(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_ANGLEAXIS_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void TRS(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSQuaternion* arg2, ::MX::Core::FixedMath::TSVector3* arg3, ::MX::Core::FixedMath::TSMatrix4x4&* arg4)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_TRS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix4x4* TRS(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSQuaternion* arg2, ::MX::Core::FixedMath::TSVector3* arg3)
		{
			return ((::MX::Core::FixedMath::TSMatrix4x4*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX4X4_TRS_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

