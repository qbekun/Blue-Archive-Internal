#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_AUTOINCREMENTVALUE_GET_AUTO_OFFSET UNITYSDK_OFFSET(0x970B090)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_SET_AUTO_OFFSET UNITYSDK_OFFSET(0x970B0A0)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_GET_SEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_SET_SEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_GET_STEP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_SET_STEP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_SETCURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_SETCURRENTANDINCREMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_MOVEAFTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x9709B60)
#define SYSTEM_DATA_AUTOINCREMENTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x970B0B0)

namespace System::Data
{
	inline static constexpr unsigned int AutoIncrementValue_TypeDefinitionIndex = 32164;

	class AutoIncrementValue : public Il2CppObject
	{
	public:
		::System::Boolean _Auto_k__BackingField; // 0x10

		::System::Boolean get_Auto()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_GET_AUTO_OFFSET))(nullptr);
		}

		::System::Void set_Auto(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_SET_AUTO_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_Current(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Seed()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void set_Seed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_SET_SEED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Step()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_GET_STEP_OFFSET))(nullptr);
		}

		::System::Void set_Step(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_SET_STEP_OFFSET))(arg, nullptr);
		}

		::System::Type* get_DataType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::Void SetCurrent(::System::Object* arg, ::System::IFormatProvider* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_SETCURRENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCurrentAndIncrement(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_SETCURRENTANDINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void MoveAfter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_MOVEAFTER_OFFSET))(nullptr);
		}

		::System::Data::AutoIncrementValue* Clone()
		{
			return (return (::System::Data::AutoIncrementValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTVALUE_.CTOR_OFFSET))(nullptr);
		}

	};
}

