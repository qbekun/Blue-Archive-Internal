#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DRAWING_POINT_GET_X_OFFSET UNITYSDK_OFFSET(0x980A430)
#define SYSTEM_DRAWING_POINT_GET_Y_OFFSET UNITYSDK_OFFSET(0x980A440)
#define SYSTEM_DRAWING_POINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x980A450)
#define SYSTEM_DRAWING_POINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x980A470)
#define SYSTEM_DRAWING_POINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x980A4F0)
#define SYSTEM_DRAWING_POINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x980A510)
#define SYSTEM_DRAWING_POINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x980A570)

namespace System::Drawing
{
	inline static constexpr unsigned int Point_TypeDefinitionIndex = 37077;

	class Point : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14

		::System::Int32 get_X()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINT_GET_X_OFFSET))(nullptr);
		}

		::System::Int32 get_Y()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINT_GET_Y_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Drawing::Point* arg, ::System::Drawing::Point* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::Point*, ::System::Drawing::Point*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Drawing::Point* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::Point*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

