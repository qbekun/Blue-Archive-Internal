#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DRAWING_RECTANGLE_GET_X_OFFSET UNITYSDK_OFFSET(0x980AB30)
#define SYSTEM_DRAWING_RECTANGLE_GET_Y_OFFSET UNITYSDK_OFFSET(0x980AB40)
#define SYSTEM_DRAWING_RECTANGLE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x980AB50)
#define SYSTEM_DRAWING_RECTANGLE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x980AB60)
#define SYSTEM_DRAWING_RECTANGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x980AB70)
#define SYSTEM_DRAWING_RECTANGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x980AC10)
#define SYSTEM_DRAWING_RECTANGLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x980AC50)
#define SYSTEM_DRAWING_RECTANGLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x980AC80)
#define SYSTEM_DRAWING_RECTANGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x980AD00)

namespace System::Drawing
{
	inline static constexpr unsigned int Rectangle_TypeDefinitionIndex = 37079;

	class Rectangle : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C

		::System::Int32 get_X()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLE_GET_X_OFFSET))(nullptr);
		}

		::System::Int32 get_Y()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLE_GET_Y_OFFSET))(nullptr);
		}

		::System::Int32 get_Width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLE_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_Height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLE_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Drawing::Rectangle* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::Rectangle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Drawing::Rectangle* arg, ::System::Drawing::Rectangle* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::Rectangle*, ::System::Drawing::Rectangle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_RECTANGLE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

