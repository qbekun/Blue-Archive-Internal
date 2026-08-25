#pragma once
#include "unitysdk.h"

class GroundNodeLocation;

#define GROUNDNODELOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x21583F0)
#define GROUNDNODELOCATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x215D040)
#define GROUNDNODELOCATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x215D0E0)
#define GROUNDNODELOCATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x215D0C0)
#define GROUNDNODELOCATION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x215D0F0)
#define GROUNDNODELOCATION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x215D110)

	inline static constexpr unsigned int GroundNodeLocation_TypeDefinitionIndex = 3986;

	class GroundNodeLocation : public Il2CppObject
	{
	public:
		::System::Int32 X; // 0x10
		::System::Int32 Y; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODELOCATION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODELOCATION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODELOCATION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(GroundNodeLocation* arg)
		{
			return ((::System::Boolean(*)(GroundNodeLocation*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODELOCATION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(GroundNodeLocation* arg, GroundNodeLocation* arg2)
		{
			return ((::System::Boolean(*)(GroundNodeLocation*, GroundNodeLocation*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODELOCATION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(GroundNodeLocation* arg, GroundNodeLocation* arg2)
		{
			return ((::System::Boolean(*)(GroundNodeLocation*, GroundNodeLocation*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDNODELOCATION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};

