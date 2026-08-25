#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_Offset; }

#define TMPRO_TMP_OFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xA1201B0)
#define TMPRO_TMP_OFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0xA1201C0)
#define TMPRO_TMP_OFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA1201D0)
#define TMPRO_TMP_OFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA1201E0)
#define TMPRO_TMP_OFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0xA1201F0)
#define TMPRO_TMP_OFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0xA120200)
#define TMPRO_TMP_OFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xA120210)
#define TMPRO_TMP_OFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xA120220)
#define TMPRO_TMP_OFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA120230)
#define TMPRO_TMP_OFFSET_SET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA120240)
#define TMPRO_TMP_OFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0xA120250)
#define TMPRO_TMP_OFFSET_SET_VERTICAL_OFFSET UNITYSDK_OFFSET(0xA120260)
#define TMPRO_TMP_OFFSET_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA120270)
#define TMPRO_TMP_OFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1202D0)
#define TMPRO_TMP_OFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1202F0)
#define TMPRO_TMP_OFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA120310)
#define TMPRO_TMP_OFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA120350)
#define TMPRO_TMP_OFFSET_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA1203C0)
#define TMPRO_TMP_OFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA1203E0)
#define TMPRO_TMP_OFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0xA120430)
#define TMPRO_TMP_OFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0xA120490)
#define TMPRO_TMP_OFFSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA120510)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Offset_TypeDefinitionIndex = 33632;

	class TMP_Offset : public Il2CppObject
	{
	public:
		::System::Single m_Left; // 0x10
		::System::Single m_Right; // 0x14
		::System::Single m_Top; // 0x18
		::System::Single m_Bottom; // 0x1C
		::TMPro::TMP_Offset* k_ZeroOffset; // 0x0

		::System::Single get_left()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Void set_left(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Single get_right()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_right(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_top()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_TOP_OFFSET))(nullptr);
		}

		::System::Void set_top(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_TOP_OFFSET))(arg, nullptr);
		}

		::System::Single get_bottom()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_BOTTOM_OFFSET))(nullptr);
		}

		::System::Void set_bottom(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_BOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Single get_horizontal()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_HORIZONTAL_OFFSET))(nullptr);
		}

		::System::Void set_horizontal(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_HORIZONTAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_vertical()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_VERTICAL_OFFSET))(nullptr);
		}

		::System::Void set_vertical(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_SET_VERTICAL_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_Offset* get_zero()
		{
			return (return (::TMPro::TMP_Offset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GET_ZERO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::TMPro::TMP_Offset* arg, ::TMPro::TMP_Offset* arg)
		{
			return (return (::System::Boolean(*)(::TMPro::TMP_Offset*, ::TMPro::TMP_Offset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::TMPro::TMP_Offset* arg, ::TMPro::TMP_Offset* arg)
		{
			return (return (::System::Boolean(*)(::TMPro::TMP_Offset*, ::TMPro::TMP_Offset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::TMPro::TMP_Offset* op_Multiply(::TMPro::TMP_Offset* arg, ::System::Single arg)
		{
			return (return (::TMPro::TMP_Offset*(*)(::TMPro::TMP_Offset*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::TMPro::TMP_Offset* arg)
		{
			return (return (::System::Boolean(*)(::TMPro::TMP_Offset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_OFFSET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

