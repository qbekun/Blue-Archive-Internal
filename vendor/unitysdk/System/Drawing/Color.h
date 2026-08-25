#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DRAWING_COLOR_GET_R_OFFSET UNITYSDK_OFFSET(0x9809C00)
#define SYSTEM_DRAWING_COLOR_GET_G_OFFSET UNITYSDK_OFFSET(0x9809CE0)
#define SYSTEM_DRAWING_COLOR_GET_B_OFFSET UNITYSDK_OFFSET(0x9809D00)
#define SYSTEM_DRAWING_COLOR_GET_A_OFFSET UNITYSDK_OFFSET(0x9809D10)
#define SYSTEM_DRAWING_COLOR_GET_ISKNOWNCOLOR_OFFSET UNITYSDK_OFFSET(0x9809D30)
#define SYSTEM_DRAWING_COLOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9809D40)
#define SYSTEM_DRAWING_COLOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9809C20)
#define SYSTEM_DRAWING_COLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9809E40)
#define SYSTEM_DRAWING_COLOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x980A210)
#define SYSTEM_DRAWING_COLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x980A250)
#define SYSTEM_DRAWING_COLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x980A300)
#define SYSTEM_DRAWING_COLOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x980A350)

namespace System::Drawing
{
	inline static constexpr unsigned int Color_TypeDefinitionIndex = 37076;

	class Color : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Int64 value; // 0x18
		::System::Int16 knownColor; // 0x20
		::System::Int16 state; // 0x22

		::System::Byte get_R()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_GET_R_OFFSET))(nullptr);
		}

		::System::Byte get_G()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_GET_G_OFFSET))(nullptr);
		}

		::System::Byte get_B()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_GET_B_OFFSET))(nullptr);
		}

		::System::Byte get_A()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_GET_A_OFFSET))(nullptr);
		}

		::System::Boolean get_IsKnownColor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_GET_ISKNOWNCOLOR_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int64 get_Value()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Drawing::Color* arg, ::System::Drawing::Color* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::Color*, ::System::Drawing::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Drawing::Color* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_COLOR_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

