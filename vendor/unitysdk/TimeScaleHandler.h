#pragma once
#include "unitysdk.h"

class TimeScaleHandler;

#define TIMESCALEHANDLER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDEE70)
#define TIMESCALEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FDEE90)
#define TIMESCALEHANDLER_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1FDEEA0)
#define TIMESCALEHANDLER_NEW_OFFSET UNITYSDK_OFFSET(0x1FDEEB0)
#define TIMESCALEHANDLER_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1FDEEC0)
#define TIMESCALEHANDLER_RESPAWN_OFFSET UNITYSDK_OFFSET(0x1FDEED0)

	inline static constexpr unsigned int TimeScaleHandler_TypeDefinitionIndex = 3056;

	class TimeScaleHandler : public Il2CppObject
	{
	public:
		::System::Int32 _InstanceId_k__BackingField; // 0x10

		::System::Boolean Equals(TimeScaleHandler* arg)
		{
			return ((::System::Boolean(*)(TimeScaleHandler*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESCALEHANDLER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESCALEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_InstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESCALEHANDLER_GET_INSTANCEID_OFFSET))(nullptr);
		}

		::System::Void New()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESCALEHANDLER_NEW_OFFSET))(nullptr);
		}

		::System::Void set_InstanceId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMESCALEHANDLER_SET_INSTANCEID_OFFSET))(arg, nullptr);
		}

		::System::Void Respawn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESCALEHANDLER_RESPAWN_OFFSET))(nullptr);
		}

	};

