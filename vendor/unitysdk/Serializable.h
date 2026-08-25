#pragma once
#include "unitysdk.h"

namespace UnityEngine::Events { class UnityEvent; }

#define SERIALIZABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x4972F0)
#define SERIALIZABLE_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x497580)
#define SERIALIZABLE_SETNORMALIZEDENDTIME_OFFSET UNITYSDK_OFFSET(0x497590)
#define SERIALIZABLE_GETINVOKER_OFFSET UNITYSDK_OFFSET(0x497650)
#define SERIALIZABLE_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x497740)
#define SERIALIZABLE_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x4977C0)
#define SERIALIZABLE_GET_NORMALIZEDTIMES_OFFSET UNITYSDK_OFFSET(0x4977D0)
#define SERIALIZABLE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4977E0)
#define SERIALIZABLE_GET_INITIALIZEDEVENTS_OFFSET UNITYSDK_OFFSET(0x4978B0)
#define SERIALIZABLE_HASPERSISTENTCALLS_OFFSET UNITYSDK_OFFSET(0x497710)
#define SERIALIZABLE_GETNORMALIZEDENDTIME_OFFSET UNITYSDK_OFFSET(0x4978C0)
#define SERIALIZABLE_GETEVENTSOPTIONAL_OFFSET UNITYSDK_OFFSET(0x497300)
#define SERIALIZABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x497950)
#define SERIALIZABLE_GET_CALLBACKS_OFFSET UNITYSDK_OFFSET(0x497960)

	inline static constexpr unsigned int Serializable_TypeDefinitionIndex = 35109;

	class Serializable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _NormalizedTimes; // 0x10
		::Il2CppArray<::System::Object*>* _Callbacks; // 0x18
		::Il2CppArray<::System::Object*>* _Names; // 0x20
		Sequence* _Events; // 0x28

		Sequence* op_Implicit(Serializable* arg)
		{
			return (return (Sequence*(*)(Serializable*, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Object[]&* get_Names()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_GET_NAMES_OFFSET))(nullptr);
		}

		::System::Void SetNormalizedEndTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_SETNORMALIZEDENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Action* GetInvoker(::UnityEngine::Events::UnityEvent* arg)
		{
			return (return (::System::Action*(*)(::UnityEngine::Events::UnityEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_GETINVOKER_OFFSET))(arg, nullptr);
		}

		Sequence* get_Events()
		{
			return (return (Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void set_Events(Sequence* arg)
		{
			((::System::Void(*)(Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_SET_EVENTS_OFFSET))(arg, nullptr);
		}

		::System::Object[]&* get_NormalizedTimes()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_GET_NORMALIZEDTIMES_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(Serializable* arg)
		{
			((::System::Void(*)(Serializable*, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_COPYFROM_OFFSET))(arg, nullptr);
		}

		Sequence* get_InitializedEvents()
		{
			return (return (Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_GET_INITIALIZEDEVENTS_OFFSET))(nullptr);
		}

		::System::Boolean HasPersistentCalls(::UnityEngine::Events::UnityEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Events::UnityEvent*, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_HASPERSISTENTCALLS_OFFSET))(arg, nullptr);
		}

		::System::Single GetNormalizedEndTime(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_GETNORMALIZEDENDTIME_OFFSET))(arg, nullptr);
		}

		Sequence* GetEventsOptional()
		{
			return (return (Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_GETEVENTSOPTIONAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Object[]&* get_Callbacks()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLE_GET_CALLBACKS_OFFSET))(nullptr);
		}

	};

