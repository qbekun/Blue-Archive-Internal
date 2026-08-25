#pragma once
#include "../unitysdk.h"

#define SYSTEM_SEQUENCEPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93857D0)
#define SYSTEM_SEQUENCEPOSITION_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x93857F0)
#define SYSTEM_SEQUENCEPOSITION_GETINTEGER_OFFSET UNITYSDK_OFFSET(0x9385800)
#define SYSTEM_SEQUENCEPOSITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9385810)
#define SYSTEM_SEQUENCEPOSITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9385830)
#define SYSTEM_SEQUENCEPOSITION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93858B0)

namespace System
{
	inline static constexpr unsigned int SequencePosition_TypeDefinitionIndex = 23891;

	class SequencePosition : public Il2CppObject
	{
	public:
		::System::Object* _object; // 0x10
		::System::Int32 _integer; // 0x18

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_GETOBJECT_OFFSET))(nullptr);
		}

		::System::Int32 GetInteger()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_GETINTEGER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::SequencePosition* arg)
		{
			return (return (::System::Boolean(*)(::System::SequencePosition*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

