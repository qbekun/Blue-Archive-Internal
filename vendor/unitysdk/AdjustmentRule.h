#pragma once
#include "unitysdk.h"

#define ADJUSTMENTRULE_GET_DATESTART_OFFSET UNITYSDK_OFFSET(0x9273090)
#define ADJUSTMENTRULE_GET_DATEEND_OFFSET UNITYSDK_OFFSET(0x92730A0)
#define ADJUSTMENTRULE_GET_DAYLIGHTDELTA_OFFSET UNITYSDK_OFFSET(0x92730B0)
#define ADJUSTMENTRULE_GET_DAYLIGHTTRANSITIONSTART_OFFSET UNITYSDK_OFFSET(0x92730C0)
#define ADJUSTMENTRULE_GET_DAYLIGHTTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x92730E0)
#define ADJUSTMENTRULE_GET_BASEUTCOFFSETDELTA_OFFSET UNITYSDK_OFFSET(0x9273100)
#define ADJUSTMENTRULE_GET_NODAYLIGHTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x9273110)
#define ADJUSTMENTRULE_GET_HASDAYLIGHTSAVING_OFFSET UNITYSDK_OFFSET(0x9268D60)
#define ADJUSTMENTRULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x926FE90)
#define ADJUSTMENTRULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9273150)
#define ADJUSTMENTRULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92731A0)
#define ADJUSTMENTRULE_CREATEADJUSTMENTRULE_OFFSET UNITYSDK_OFFSET(0x9267440)
#define ADJUSTMENTRULE_ISSTARTDATEMARKERFORBEGINNINGOFYEAR_OFFSET UNITYSDK_OFFSET(0x9271670)
#define ADJUSTMENTRULE_ISENDDATEMARKERFORENDOFYEAR_OFFSET UNITYSDK_OFFSET(0x9271790)
#define ADJUSTMENTRULE_VALIDATEADJUSTMENTRULE_OFFSET UNITYSDK_OFFSET(0x9273280)
#define ADJUSTMENTRULE_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x92738A0)
#define ADJUSTMENTRULE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9273A00)
#define ADJUSTMENTRULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9273C00)
#define ADJUSTMENTRULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9273FE0)

	inline static constexpr unsigned int AdjustmentRule_TypeDefinitionIndex = 23671;

	class AdjustmentRule : public Il2CppObject
	{
	public:
		::System::DateTime* _dateStart; // 0x10
		::System::DateTime* _dateEnd; // 0x18
		::System::TimeSpan* _daylightDelta; // 0x20
		TransitionTime* _daylightTransitionStart; // 0x28
		TransitionTime* _daylightTransitionEnd; // 0x40
		::System::TimeSpan* _baseUtcOffsetDelta; // 0x58
		::System::Boolean _noDaylightTransitions; // 0x60

		::System::DateTime* get_DateStart()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_GET_DATESTART_OFFSET))(nullptr);
		}

		::System::DateTime* get_DateEnd()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_GET_DATEEND_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_DaylightDelta()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_GET_DAYLIGHTDELTA_OFFSET))(nullptr);
		}

		TransitionTime* get_DaylightTransitionStart()
		{
			return (return (TransitionTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_GET_DAYLIGHTTRANSITIONSTART_OFFSET))(nullptr);
		}

		TransitionTime* get_DaylightTransitionEnd()
		{
			return (return (TransitionTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_GET_DAYLIGHTTRANSITIONEND_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_BaseUtcOffsetDelta()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_GET_BASEUTCOFFSETDELTA_OFFSET))(nullptr);
		}

		::System::Boolean get_NoDaylightTransitions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_GET_NODAYLIGHTTRANSITIONS_OFFSET))(nullptr);
		}

		::System::Boolean get_HasDaylightSaving()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_GET_HASDAYLIGHTSAVING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(AdjustmentRule* arg)
		{
			return (return (::System::Boolean(*)(AdjustmentRule*, ::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::DateTime* arg, ::System::DateTime* arg, ::System::TimeSpan* arg, TransitionTime* arg, TransitionTime* arg, ::System::TimeSpan* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::DateTime*, ::System::TimeSpan*, TransitionTime*, TransitionTime*, ::System::TimeSpan*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		AdjustmentRule* CreateAdjustmentRule(::System::DateTime* arg, ::System::DateTime* arg, ::System::TimeSpan* arg, TransitionTime* arg, TransitionTime* arg, ::System::TimeSpan* arg, ::System::Boolean arg)
		{
			return (return (AdjustmentRule*(*)(::System::DateTime*, ::System::DateTime*, ::System::TimeSpan*, TransitionTime*, TransitionTime*, ::System::TimeSpan*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_CREATEADJUSTMENTRULE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsStartDateMarkerForBeginningOfYear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_ISSTARTDATEMARKERFORBEGINNINGOFYEAR_OFFSET))(nullptr);
		}

		::System::Boolean IsEndDateMarkerForEndOfYear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_ISENDDATEMARKERFORENDOFYEAR_OFFSET))(nullptr);
		}

		::System::Void ValidateAdjustmentRule(::System::DateTime* arg, ::System::DateTime* arg, ::System::TimeSpan* arg, TransitionTime* arg, TransitionTime* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::DateTime*, ::System::TimeSpan*, TransitionTime*, TransitionTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_VALIDATEADJUSTMENTRULE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJUSTMENTRULE_.CTOR_OFFSET))(nullptr);
		}

	};

