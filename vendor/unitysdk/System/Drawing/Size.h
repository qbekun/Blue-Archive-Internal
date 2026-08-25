#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DRAWING_SIZE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x980B610)
#define SYSTEM_DRAWING_SIZE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x980B630)
#define SYSTEM_DRAWING_SIZE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x980B640)
#define SYSTEM_DRAWING_SIZE_EQUALS_OFFSET UNITYSDK_OFFSET(0x980B650)
#define SYSTEM_DRAWING_SIZE_EQUALS_OFFSET UNITYSDK_OFFSET(0x980B6D0)
#define SYSTEM_DRAWING_SIZE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x980B6F0)
#define SYSTEM_DRAWING_SIZE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x980B750)

namespace System::Drawing
{
	inline static constexpr unsigned int Size_TypeDefinitionIndex = 37081;

	class Size : public Il2CppObject
	{
	public:
		::System::Int32 width; // 0x10
		::System::Int32 height; // 0x14

		::System::Boolean op_Equality(::System::Drawing::Size* arg, ::System::Drawing::Size* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::Size*, ::System::Drawing::Size*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZE_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_Height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZE_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Drawing::Size* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::Size*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

