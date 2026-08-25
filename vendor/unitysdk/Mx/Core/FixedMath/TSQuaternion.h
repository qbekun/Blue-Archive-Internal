#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class Fix64; }
namespace MX::Core::FixedMath { class TSQuaternion; }
namespace MX::Core::FixedMath { class TSVector3; }
namespace MX::Core::FixedMath { class TSMatrix; }

#define MX_CORE_FIXEDMATH_TSQUATERNION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x105C4E0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_.CTOR_OFFSET UNITYSDK_OFFSET(0x105C580)
#define MX_CORE_FIXEDMATH_TSQUATERNION_SET_OFFSET UNITYSDK_OFFSET(0x105C5A0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_SETFROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x105C5C0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x105C8A0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_ANGLE_OFFSET UNITYSDK_OFFSET(0x105CC80)
#define MX_CORE_FIXEDMATH_TSQUATERNION_ADD_OFFSET UNITYSDK_OFFSET(0x105D150)
#define MX_CORE_FIXEDMATH_TSQUATERNION_LOOKROTATION_OFFSET UNITYSDK_OFFSET(0x105D280)
#define MX_CORE_FIXEDMATH_TSQUATERNION_LOOKROTATION_OFFSET UNITYSDK_OFFSET(0x105D4D0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_SLERP_OFFSET UNITYSDK_OFFSET(0x105D670)
#define MX_CORE_FIXEDMATH_TSQUATERNION_ROTATETOWARDS_OFFSET UNITYSDK_OFFSET(0x105E060)
#define MX_CORE_FIXEDMATH_TSQUATERNION_EULER_OFFSET UNITYSDK_OFFSET(0x105E840)
#define MX_CORE_FIXEDMATH_TSQUATERNION_EULER_OFFSET UNITYSDK_OFFSET(0x105E950)
#define MX_CORE_FIXEDMATH_TSQUATERNION_ANGLEAXIS_OFFSET UNITYSDK_OFFSET(0x105E9C0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_CREATEFROMYAWPITCHROLL_OFFSET UNITYSDK_OFFSET(0x1052EC0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_ADD_OFFSET UNITYSDK_OFFSET(0x105D1D0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_CONJUGATE_OFFSET UNITYSDK_OFFSET(0x105EB30)
#define MX_CORE_FIXEDMATH_TSQUATERNION_DOT_OFFSET UNITYSDK_OFFSET(0x105DEA0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_INVERSE_OFFSET UNITYSDK_OFFSET(0x105CE30)
#define MX_CORE_FIXEDMATH_TSQUATERNION_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x105C660)
#define MX_CORE_FIXEDMATH_TSQUATERNION_LERP_OFFSET UNITYSDK_OFFSET(0x105EDE0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x105EF70)
#define MX_CORE_FIXEDMATH_TSQUATERNION_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x105F360)
#define MX_CORE_FIXEDMATH_TSQUATERNION_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x105F3E0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x105F490)
#define MX_CORE_FIXEDMATH_TSQUATERNION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x105F510)
#define MX_CORE_FIXEDMATH_TSQUATERNION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x105DF60)
#define MX_CORE_FIXEDMATH_TSQUATERNION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x105F770)
#define MX_CORE_FIXEDMATH_TSQUATERNION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x105ECB0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_CREATEFROMMATRIX_OFFSET UNITYSDK_OFFSET(0x105D450)
#define MX_CORE_FIXEDMATH_TSQUATERNION_CREATEFROMMATRIX_OFFSET UNITYSDK_OFFSET(0x105F810)
#define MX_CORE_FIXEDMATH_TSQUATERNION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x105D0D0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x105DFE0)
#define MX_CORE_FIXEDMATH_TSQUATERNION_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x105FD00)
#define MX_CORE_FIXEDMATH_TSQUATERNION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x105FD80)
#define MX_CORE_FIXEDMATH_TSQUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10600F0)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int TSQuaternion_TypeDefinitionIndex = 12869;

	class TSQuaternion : public Il2CppObject
	{
	public:
		::MX::Core::FixedMath::Fix64* x; // 0x10
		::MX::Core::FixedMath::Fix64* y; // 0x18
		::MX::Core::FixedMath::Fix64* z; // 0x20
		::MX::Core::FixedMath::Fix64* w; // 0x28
		::MX::Core::FixedMath::TSQuaternion* identity; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Set(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_SET_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetFromToRotation(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_SETFROMTOROTATION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* get_eulerAngles()
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_GET_EULERANGLES_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::Fix64* Angle(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_ANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Add(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* LookRotation(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_LOOKROTATION_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* LookRotation(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_LOOKROTATION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Slerp(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_SLERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* RotateTowards(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_ROTATETOWARDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Euler(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_EULER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Euler(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_EULER_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* AngleAxis(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_ANGLEAXIS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CreateFromYawPitchRoll(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::TSQuaternion&* arg4)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSQuaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_CREATEFROMYAWPITCHROLL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Add(::MX::Core::FixedMath::TSQuaternion&* arg, ::MX::Core::FixedMath::TSQuaternion&* arg2, ::MX::Core::FixedMath::TSQuaternion&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSQuaternion&*, ::MX::Core::FixedMath::TSQuaternion&*, ::MX::Core::FixedMath::TSQuaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Conjugate(::MX::Core::FixedMath::TSQuaternion* arg)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_CONJUGATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Dot(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_DOT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Inverse(::MX::Core::FixedMath::TSQuaternion* arg)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_INVERSE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* FromToRotation(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_FROMTOROTATION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Lerp(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* LerpUnclamped(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_LERPUNCLAMPED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Subtract(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_SUBTRACT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Subtract(::MX::Core::FixedMath::TSQuaternion&* arg, ::MX::Core::FixedMath::TSQuaternion&* arg2, ::MX::Core::FixedMath::TSQuaternion&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSQuaternion&*, ::MX::Core::FixedMath::TSQuaternion&*, ::MX::Core::FixedMath::TSQuaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_SUBTRACT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Multiply(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSQuaternion&* arg, ::MX::Core::FixedMath::TSQuaternion&* arg2, ::MX::Core::FixedMath::TSQuaternion&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSQuaternion&*, ::MX::Core::FixedMath::TSQuaternion&*, ::MX::Core::FixedMath::TSQuaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* Multiply(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSQuaternion&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSQuaternion&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSQuaternion&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSQuaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Normalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_NORMALIZE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* CreateFromMatrix(::MX::Core::FixedMath::TSMatrix* arg)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_CREATEFROMMATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void CreateFromMatrix(::MX::Core::FixedMath::TSMatrix&* arg, ::MX::Core::FixedMath::TSQuaternion&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSQuaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_CREATEFROMMATRIX_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* op_Multiply(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* op_Addition(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSQuaternion* op_Subtraction(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSQuaternion* arg2)
		{
			return ((::MX::Core::FixedMath::TSQuaternion*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSQuaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_Multiply(::MX::Core::FixedMath::TSQuaternion* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSQuaternion*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSQUATERNION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

