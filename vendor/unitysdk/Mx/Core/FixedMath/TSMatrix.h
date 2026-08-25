#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class Fix64; }
namespace MX::Core::FixedMath { class TSMatrix; }
namespace MX::Core::FixedMath { class TSVector3; }
namespace MX::Core::FixedMath { class TSQuaternion; }

#define MX_CORE_FIXEDMATH_TSMATRIX_.CCTOR_OFFSET UNITYSDK_OFFSET(0x10528C0)
#define MX_CORE_FIXEDMATH_TSMATRIX_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x10529F0)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMYAWPITCHROLL_OFFSET UNITYSDK_OFFSET(0x1052DC0)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONX_OFFSET UNITYSDK_OFFSET(0x1053440)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONX_OFFSET UNITYSDK_OFFSET(0x10534F0)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONY_OFFSET UNITYSDK_OFFSET(0x10535C0)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONY_OFFSET UNITYSDK_OFFSET(0x1053680)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONZ_OFFSET UNITYSDK_OFFSET(0x1053760)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONZ_OFFSET UNITYSDK_OFFSET(0x1053820)
#define MX_CORE_FIXEDMATH_TSMATRIX_.CTOR_OFFSET UNITYSDK_OFFSET(0x10538F0)
#define MX_CORE_FIXEDMATH_TSMATRIX_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1053920)
#define MX_CORE_FIXEDMATH_TSMATRIX_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x10539D0)
#define MX_CORE_FIXEDMATH_TSMATRIX_ADD_OFFSET UNITYSDK_OFFSET(0x1053D70)
#define MX_CORE_FIXEDMATH_TSMATRIX_ADD_OFFSET UNITYSDK_OFFSET(0x1053E20)
#define MX_CORE_FIXEDMATH_TSMATRIX_INVERSE_OFFSET UNITYSDK_OFFSET(0x1053F30)
#define MX_CORE_FIXEDMATH_TSMATRIX_DETERMINANT_OFFSET UNITYSDK_OFFSET(0x1054700)
#define MX_CORE_FIXEDMATH_TSMATRIX_INVERT_OFFSET UNITYSDK_OFFSET(0x1054860)
#define MX_CORE_FIXEDMATH_TSMATRIX_INVERSE_OFFSET UNITYSDK_OFFSET(0x1053FD0)
#define MX_CORE_FIXEDMATH_TSMATRIX_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1054B90)
#define MX_CORE_FIXEDMATH_TSMATRIX_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1054C40)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMLOOKAT_OFFSET UNITYSDK_OFFSET(0x1054D40)
#define MX_CORE_FIXEDMATH_TSMATRIX_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1055140)
#define MX_CORE_FIXEDMATH_TSMATRIX_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1054F90)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMQUATERNION_OFFSET UNITYSDK_OFFSET(0x10553A0)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMQUATERNION_OFFSET UNITYSDK_OFFSET(0x1053100)
#define MX_CORE_FIXEDMATH_TSMATRIX_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1055440)
#define MX_CORE_FIXEDMATH_TSMATRIX_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x10554D0)
#define MX_CORE_FIXEDMATH_TSMATRIX_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1055520)
#define MX_CORE_FIXEDMATH_TSMATRIX_TRACE_OFFSET UNITYSDK_OFFSET(0x10555D0)
#define MX_CORE_FIXEDMATH_TSMATRIX_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1055640)
#define MX_CORE_FIXEDMATH_TSMATRIX_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x10556F0)
#define MX_CORE_FIXEDMATH_TSMATRIX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x10557F0)
#define MX_CORE_FIXEDMATH_TSMATRIX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x10559F0)
#define MX_CORE_FIXEDMATH_TSMATRIX_EQUALS_OFFSET UNITYSDK_OFFSET(0x1055BF0)
#define MX_CORE_FIXEDMATH_TSMATRIX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1055E60)
#define MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMAXISANGLE_OFFSET UNITYSDK_OFFSET(0x1055F50)
#define MX_CORE_FIXEDMATH_TSMATRIX_ANGLEAXIS_OFFSET UNITYSDK_OFFSET(0x1056290)
#define MX_CORE_FIXEDMATH_TSMATRIX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1056340)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int TSMatrix_TypeDefinitionIndex = 12867;

	class TSMatrix : public Il2CppObject
	{
	public:
		::MX::Core::FixedMath::Fix64* M11; // 0x10
		::MX::Core::FixedMath::Fix64* M12; // 0x18
		::MX::Core::FixedMath::Fix64* M13; // 0x20
		::MX::Core::FixedMath::Fix64* M21; // 0x28
		::MX::Core::FixedMath::Fix64* M22; // 0x30
		::MX::Core::FixedMath::Fix64* M23; // 0x38
		::MX::Core::FixedMath::Fix64* M31; // 0x40
		::MX::Core::FixedMath::Fix64* M32; // 0x48
		::MX::Core::FixedMath::Fix64* M33; // 0x50
		::MX::Core::FixedMath::TSMatrix* InternalIdentity; // 0x0
		::MX::Core::FixedMath::TSMatrix* Identity; // 0x48
		::MX::Core::FixedMath::TSMatrix* Zero; // 0x90

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector3* get_eulerAngles()
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_GET_EULERANGLES_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* CreateFromYawPitchRoll(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMYAWPITCHROLL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* CreateRotationX(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONX_OFFSET))(arg, nullptr);
		}

		::System::Void CreateRotationX(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSMatrix&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONX_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* CreateRotationY(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONY_OFFSET))(arg, nullptr);
		}

		::System::Void CreateRotationY(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSMatrix&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* CreateRotationZ(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONZ_OFFSET))(arg, nullptr);
		}

		::System::Void CreateRotationZ(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSMatrix&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEROTATIONZ_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5, ::MX::Core::FixedMath::Fix64* arg6, ::MX::Core::FixedMath::Fix64* arg7, ::MX::Core::FixedMath::Fix64* arg8, ::MX::Core::FixedMath::Fix64* arg9)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* Multiply(::MX::Core::FixedMath::TSMatrix* arg, ::MX::Core::FixedMath::TSMatrix* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSMatrix*, ::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSMatrix&* arg, ::MX::Core::FixedMath::TSMatrix&* arg2, ::MX::Core::FixedMath::TSMatrix&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* Add(::MX::Core::FixedMath::TSMatrix* arg, ::MX::Core::FixedMath::TSMatrix* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSMatrix*, ::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::Core::FixedMath::TSMatrix&* arg, ::MX::Core::FixedMath::TSMatrix&* arg2, ::MX::Core::FixedMath::TSMatrix&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* Inverse(::MX::Core::FixedMath::TSMatrix* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_INVERSE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Determinant()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_DETERMINANT_OFFSET))(nullptr);
		}

		::System::Void Invert(::MX::Core::FixedMath::TSMatrix&* arg, ::MX::Core::FixedMath::TSMatrix&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_INVERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Inverse(::MX::Core::FixedMath::TSMatrix&* arg, ::MX::Core::FixedMath::TSMatrix&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_INVERSE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* Multiply(::MX::Core::FixedMath::TSMatrix* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSMatrix*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSMatrix&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSMatrix&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* CreateFromLookAt(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMLOOKAT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* LookAt(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_LOOKAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LookAt(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2, ::MX::Core::FixedMath::TSMatrix&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_LOOKAT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* CreateFromQuaternion(::MX::Core::FixedMath::TSQuaternion* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMQUATERNION_OFFSET))(arg, nullptr);
		}

		::System::Void CreateFromQuaternion(::MX::Core::FixedMath::TSQuaternion&* arg, ::MX::Core::FixedMath::TSMatrix&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSQuaternion&*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMQUATERNION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* Transpose(::MX::Core::FixedMath::TSMatrix* arg)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_TRANSPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Transpose(::MX::Core::FixedMath::TSMatrix&* arg, ::MX::Core::FixedMath::TSMatrix&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_TRANSPOSE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* op_Multiply(::MX::Core::FixedMath::TSMatrix* arg, ::MX::Core::FixedMath::TSMatrix* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSMatrix*, ::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Trace()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_TRACE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* op_Addition(::MX::Core::FixedMath::TSMatrix* arg, ::MX::Core::FixedMath::TSMatrix* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSMatrix*, ::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* op_Subtraction(::MX::Core::FixedMath::TSMatrix* arg, ::MX::Core::FixedMath::TSMatrix* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::TSMatrix*, ::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::FixedMath::TSMatrix* arg, ::MX::Core::FixedMath::TSMatrix* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSMatrix*, ::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::FixedMath::TSMatrix* arg, ::MX::Core::FixedMath::TSMatrix* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSMatrix*, ::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void CreateFromAxisAngle(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSMatrix&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_CREATEFROMAXISANGLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSMatrix* AngleAxis(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSMatrix*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_ANGLEAXIS_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATRIX_TOSTRING_OFFSET))(nullptr);
		}

	};
}

