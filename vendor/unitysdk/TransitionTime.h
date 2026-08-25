#pragma once
#include "unitysdk.h"

#define TRANSITIONTIME_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x9275680)
#define TRANSITIONTIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x9275690)
#define TRANSITIONTIME_GET_WEEK_OFFSET UNITYSDK_OFFSET(0x92756A0)
#define TRANSITIONTIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x92756B0)
#define TRANSITIONTIME_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x92756C0)
#define TRANSITIONTIME_GET_ISFIXEDDATERULE_OFFSET UNITYSDK_OFFSET(0x92756D0)
#define TRANSITIONTIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x92756E0)
#define TRANSITIONTIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9273120)
#define TRANSITIONTIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x92677C0)
#define TRANSITIONTIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9275770)
#define TRANSITIONTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9275780)
#define TRANSITIONTIME_CREATEFIXEDDATERULE_OFFSET UNITYSDK_OFFSET(0x92673E0)
#define TRANSITIONTIME_CREATEFLOATINGDATERULE_OFFSET UNITYSDK_OFFSET(0x92699C0)
#define TRANSITIONTIME_VALIDATETRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x92757F0)
#define TRANSITIONTIME_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x9275AE0)
#define TRANSITIONTIME_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9275C00)
#define TRANSITIONTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9275D70)

	inline static constexpr unsigned int TransitionTime_TypeDefinitionIndex = 23674;

	class TransitionTime : public Il2CppObject
	{
	public:
		::System::DateTime* _timeOfDay; // 0x10
		::System::Byte _month; // 0x18
		::System::Byte _week; // 0x19
		::System::Byte _day; // 0x1A
		::System::DayOfWeek* _dayOfWeek; // 0x1C
		::System::Boolean _isFixedDateRule; // 0x20

		::System::DateTime* get_TimeOfDay()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_GET_TIMEOFDAY_OFFSET))(nullptr);
		}

		::System::Int32 get_Month()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_GET_MONTH_OFFSET))(nullptr);
		}

		::System::Int32 get_Week()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_GET_WEEK_OFFSET))(nullptr);
		}

		::System::Int32 get_Day()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_GET_DAY_OFFSET))(nullptr);
		}

		::System::DayOfWeek* get_DayOfWeek()
		{
			return (return (::System::DayOfWeek*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_GET_DAYOFWEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedDateRule()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_GET_ISFIXEDDATERULE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Inequality(TransitionTime* arg, TransitionTime* arg)
		{
			return (return (::System::Boolean(*)(TransitionTime*, TransitionTime*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(TransitionTime* arg)
		{
			return (return (::System::Boolean(*)(TransitionTime*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::DateTime* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::DayOfWeek* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DayOfWeek*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		TransitionTime* CreateFixedDateRule(::System::DateTime* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (TransitionTime*(*)(::System::DateTime*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_CREATEFIXEDDATERULE_OFFSET))(arg, arg, arg, nullptr);
		}

		TransitionTime* CreateFloatingDateRule(::System::DateTime* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::DayOfWeek* arg)
		{
			return (return (TransitionTime*(*)(::System::DateTime*, ::System::Int32, ::System::Int32, ::System::DayOfWeek*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_CREATEFLOATINGDATERULE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ValidateTransitionTime(::System::DateTime* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::DayOfWeek* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DayOfWeek*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_VALIDATETRANSITIONTIME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONTIME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

