#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x970B620)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x970B670)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x970B6F0)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_GET_SEED_OFFSET UNITYSDK_OFFSET(0x970B750)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SET_SEED_OFFSET UNITYSDK_OFFSET(0x970B760)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_GET_STEP_OFFSET UNITYSDK_OFFSET(0x970B9D0)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SET_STEP_OFFSET UNITYSDK_OFFSET(0x970BA30)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_MOVEAFTER_OFFSET UNITYSDK_OFFSET(0x970BC30)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SETCURRENT_OFFSET UNITYSDK_OFFSET(0x970BCD0)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SETCURRENTANDINCREMENT_OFFSET UNITYSDK_OFFSET(0x970BD10)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_BOUNDARYCHECK_OFFSET UNITYSDK_OFFSET(0x970B860)
#define SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9703FB0)

namespace System::Data
{
	inline static constexpr unsigned int AutoIncrementBigInteger_TypeDefinitionIndex = 32166;

	class AutoIncrementBigInteger : public ::UnityEngine::VerticalWrapMode
	{
	public:
		::System::Numerics::BigInteger* _current; // 0x18
		::System::Int64 _seed; // 0x28
		::System::Numerics::BigInteger* _step; // 0x30

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_Current(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Type* get_DataType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Seed()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void set_Seed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SET_SEED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Step()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_GET_STEP_OFFSET))(nullptr);
		}

		::System::Void set_Step(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SET_STEP_OFFSET))(arg, nullptr);
		}

		::System::Void MoveAfter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_MOVEAFTER_OFFSET))(nullptr);
		}

		::System::Void SetCurrent(::System::Object* arg, ::System::IFormatProvider* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SETCURRENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCurrentAndIncrement(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_SETCURRENTANDINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean BoundaryCheck(::System::Numerics::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::System::Numerics::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_BOUNDARYCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTBIGINTEGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

