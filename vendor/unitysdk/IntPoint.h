#pragma once
#include "unitysdk.h"

#define INTPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286D980)
#define INTPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286D990)
#define INTPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286D9B0)
#define INTPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x286D9C0)
#define INTPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x286D9E0)
#define INTPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x286DA00)
#define INTPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x286DA80)

	inline static constexpr unsigned int IntPoint_TypeDefinitionIndex = 34376;

	class IntPoint : public Il2CppObject
	{
	public:
		::System::Int64 X; // 0x10
		::System::Int64 Y; // 0x18

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + INTPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(IntPoint* arg)
		{
			((::System::Void(*)(IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + INTPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(IntPoint* arg, IntPoint* arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + INTPOINT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(IntPoint* arg, IntPoint* arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + INTPOINT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INTPOINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INTPOINT_GETHASHCODE_OFFSET))(nullptr);
		}

	};

