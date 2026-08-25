#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_AUTOINCREMENTINT64_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x970B0C0)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x970B110)
#define SYSTEM_DATA_AUTOINCREMENTINT64_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x970B180)
#define SYSTEM_DATA_AUTOINCREMENTINT64_GET_SEED_OFFSET UNITYSDK_OFFSET(0x970B1E0)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SET_SEED_OFFSET UNITYSDK_OFFSET(0x970B1F0)
#define SYSTEM_DATA_AUTOINCREMENTINT64_GET_STEP_OFFSET UNITYSDK_OFFSET(0x970B350)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SET_STEP_OFFSET UNITYSDK_OFFSET(0x970B360)
#define SYSTEM_DATA_AUTOINCREMENTINT64_MOVEAFTER_OFFSET UNITYSDK_OFFSET(0x970B470)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SETCURRENT_OFFSET UNITYSDK_OFFSET(0x970B480)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SETCURRENTANDINCREMENT_OFFSET UNITYSDK_OFFSET(0x970B4E0)
#define SYSTEM_DATA_AUTOINCREMENTINT64_BOUNDARYCHECK_OFFSET UNITYSDK_OFFSET(0x970B280)
#define SYSTEM_DATA_AUTOINCREMENTINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9703FA0)

namespace System::Data
{
	inline static constexpr unsigned int AutoIncrementInt64_TypeDefinitionIndex = 32165;

	class AutoIncrementInt64 : public ::UnityEngine::VerticalWrapMode
	{
	public:
		::System::Int64 _current; // 0x18
		::System::Int64 _seed; // 0x20
		::System::Int64 _step; // 0x28

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_Current(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Type* get_DataType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Seed()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void set_Seed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SET_SEED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Step()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_GET_STEP_OFFSET))(nullptr);
		}

		::System::Void set_Step(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SET_STEP_OFFSET))(arg, nullptr);
		}

		::System::Void MoveAfter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_MOVEAFTER_OFFSET))(nullptr);
		}

		::System::Void SetCurrent(::System::Object* arg, ::System::IFormatProvider* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SETCURRENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCurrentAndIncrement(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SETCURRENTANDINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean BoundaryCheck(::System::Numerics::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::System::Numerics::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_BOUNDARYCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_.CTOR_OFFSET))(nullptr);
		}

	};
}

