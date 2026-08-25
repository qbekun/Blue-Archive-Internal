#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class Fix64; }
namespace MX::Core::FixedMath { class FixedMatrix2; }
namespace MX::Core::FixedMath { class TSVector2; }

#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_.CTOR_OFFSET UNITYSDK_OFFSET(0x104BD50)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x104BD80)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_UP_OFFSET UNITYSDK_OFFSET(0x104BE00)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_UP_OFFSET UNITYSDK_OFFSET(0x104BE10)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x104BE20)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x104BF60)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x104C0B0)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x104C0C0)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x104C0D0)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x104C210)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x104C350)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x104C490)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_BACKWARD_OFFSET UNITYSDK_OFFSET(0x104C5E0)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_BACKWARD_OFFSET UNITYSDK_OFFSET(0x104C5F0)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x104C600)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x104C610)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATESCALE_OFFSET UNITYSDK_OFFSET(0x104C620)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATESCALE_OFFSET UNITYSDK_OFFSET(0x104C700)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATEROTATE_OFFSET UNITYSDK_OFFSET(0x104C780)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATEROTATE_OFFSET UNITYSDK_OFFSET(0x104C810)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATEROTATE_OFFSET UNITYSDK_OFFSET(0x1047690)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATETRANSLATE_OFFSET UNITYSDK_OFFSET(0x1047890)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATETRANSLATE_OFFSET UNITYSDK_OFFSET(0x104C8A0)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x104C990)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x10479F0)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x104D330)
#define MX_CORE_FIXEDMATH_FIXEDMATRIX2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x104D400)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int FixedMatrix2_TypeDefinitionIndex = 12864;

	class FixedMatrix2 : public Il2CppObject
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
		::MX::Core::FixedMath::FixedMatrix2* _Identity_k__BackingField; // 0x0

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5, ::MX::Core::FixedMath::Fix64* arg6, ::MX::Core::FixedMath::Fix64* arg7, ::MX::Core::FixedMath::Fix64* arg8, ::MX::Core::FixedMath::Fix64* arg9)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* get_Identity()
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_IDENTITY_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_Up()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_UP_OFFSET))(nullptr);
		}

		::System::Void set_Up(::MX::Core::FixedMath::TSVector2* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_UP_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_Down()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_DOWN_OFFSET))(nullptr);
		}

		::System::Void set_Down(::MX::Core::FixedMath::TSVector2* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_DOWN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_Right()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Right(::MX::Core::FixedMath::TSVector2* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_Left()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Void set_Left(::MX::Core::FixedMath::TSVector2* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_Forward()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::MX::Core::FixedMath::TSVector2* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_Backward()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_BACKWARD_OFFSET))(nullptr);
		}

		::System::Void set_Backward(::MX::Core::FixedMath::TSVector2* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_BACKWARD_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_Translation()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_GET_TRANSLATION_OFFSET))(nullptr);
		}

		::System::Void set_Translation(::MX::Core::FixedMath::TSVector2* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_SET_TRANSLATION_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* CreateScale(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATESCALE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* CreateScale(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATESCALE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* CreateRotate(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATEROTATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* CreateRotate(::System::Double arg)
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATEROTATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* CreateRotate(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATEROTATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* CreateTranslate(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATETRANSLATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* CreateTranslate(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_CREATETRANSLATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* Multiply(::MX::Core::FixedMath::FixedMatrix2* arg, ::MX::Core::FixedMath::FixedMatrix2* arg2)
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::MX::Core::FixedMath::FixedMatrix2*, ::MX::Core::FixedMath::FixedMatrix2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Transform(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_TRANSFORM_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::FixedMatrix2* op_Multiply(::MX::Core::FixedMath::FixedMatrix2* arg, ::MX::Core::FixedMath::FixedMatrix2* arg2)
		{
			return ((::MX::Core::FixedMath::FixedMatrix2*(*)(::MX::Core::FixedMath::FixedMatrix2*, ::MX::Core::FixedMath::FixedMatrix2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATRIX2_.CCTOR_OFFSET))(nullptr);
		}

	};
}

