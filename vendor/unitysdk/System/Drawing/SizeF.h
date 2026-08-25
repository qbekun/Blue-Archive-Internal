#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DRAWING_SIZEF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x980B950)
#define SYSTEM_DRAWING_SIZEF_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x980B980)
#define SYSTEM_DRAWING_SIZEF_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x980B990)
#define SYSTEM_DRAWING_SIZEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x980B9A0)
#define SYSTEM_DRAWING_SIZEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x980BA40)
#define SYSTEM_DRAWING_SIZEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x980BA70)
#define SYSTEM_DRAWING_SIZEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x980BB00)

namespace System::Drawing
{
	inline static constexpr unsigned int SizeF_TypeDefinitionIndex = 37082;

	class SizeF : public Il2CppObject
	{
	public:
		::System::Single width; // 0x10
		::System::Single height; // 0x14

		::System::Boolean op_Equality(::System::Drawing::SizeF* arg, ::System::Drawing::SizeF* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::SizeF*, ::System::Drawing::SizeF*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZEF_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_Width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZEF_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Single get_Height()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZEF_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZEF_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Drawing::SizeF* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::SizeF*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZEF_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZEF_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_SIZEF_TOSTRING_OFFSET))(nullptr);
		}

	};
}

