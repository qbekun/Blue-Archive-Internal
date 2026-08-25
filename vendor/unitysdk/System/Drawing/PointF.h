#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DRAWING_POINTF_GET_X_OFFSET UNITYSDK_OFFSET(0x980A780)
#define SYSTEM_DRAWING_POINTF_GET_Y_OFFSET UNITYSDK_OFFSET(0x980A790)
#define SYSTEM_DRAWING_POINTF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x980A7A0)
#define SYSTEM_DRAWING_POINTF_EQUALS_OFFSET UNITYSDK_OFFSET(0x980A7D0)
#define SYSTEM_DRAWING_POINTF_EQUALS_OFFSET UNITYSDK_OFFSET(0x980A870)
#define SYSTEM_DRAWING_POINTF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x980A8A0)
#define SYSTEM_DRAWING_POINTF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x980A930)

namespace System::Drawing
{
	inline static constexpr unsigned int PointF_TypeDefinitionIndex = 37078;

	class PointF : public Il2CppObject
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		::System::Single get_X()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINTF_GET_X_OFFSET))(nullptr);
		}

		::System::Single get_Y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINTF_GET_Y_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Drawing::PointF* arg, ::System::Drawing::PointF* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::PointF*, ::System::Drawing::PointF*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINTF_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINTF_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Drawing::PointF* arg)
		{
			return (return (::System::Boolean(*)(::System::Drawing::PointF*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINTF_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINTF_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DRAWING_POINTF_TOSTRING_OFFSET))(nullptr);
		}

	};
}

