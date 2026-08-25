#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DRAWING_RECTANGLEF_GET_X_OFFSET UNITYSDK_OFFSET(0x980B060)
#define SYSTEM_DRAWING_RECTANGLEF_GET_Y_OFFSET UNITYSDK_OFFSET(0x980B070)
#define SYSTEM_DRAWING_RECTANGLEF_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x980B080)
#define SYSTEM_DRAWING_RECTANGLEF_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x980B090)
#define SYSTEM_DRAWING_RECTANGLEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x980B0A0)
#define SYSTEM_DRAWING_RECTANGLEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x980B140)
#define SYSTEM_DRAWING_RECTANGLEF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x980B180)
#define SYSTEM_DRAWING_RECTANGLEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x980B1C0)
#define SYSTEM_DRAWING_RECTANGLEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x980B2A0)

namespace System::Drawing
{
	inline static constexpr unsigned int RectangleF_TypeDefinitionIndex = 37080;

	class RectangleF : public Il2CppObject
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single width; // 0x18
		::System::Single height; // 0x1C

		::System::Single get_X()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLEF_GET_X_OFFSET))(nullptr);
		}

		::System::Single get_Y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLEF_GET_Y_OFFSET))(nullptr);
		}

		::System::Single get_Width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLEF_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Single get_Height()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLEF_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLEF_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Drawing::RectangleF* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::RectangleF*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLEF_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Drawing::RectangleF* arg, ::System::Drawing::RectangleF* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::RectangleF*, ::System::Drawing::RectangleF*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLEF_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLEF_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLEF_TOSTRING_OFFSET))(nullptr);
		}

	};
}

