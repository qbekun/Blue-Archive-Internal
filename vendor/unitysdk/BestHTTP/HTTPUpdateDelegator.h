#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPUpdateDelegator; }

#define BESTHTTP_HTTPUPDATEDELEGATOR_SET_ISTHREADED_OFFSET UNITYSDK_OFFSET(0x4E8090)
#define BESTHTTP_HTTPUPDATEDELEGATOR_SET_ISTHREADRUNNING_OFFSET UNITYSDK_OFFSET(0x4E80E0)
#define BESTHTTP_HTTPUPDATEDELEGATOR_RESETSETUP_OFFSET UNITYSDK_OFFSET(0x4E8130)
#define BESTHTTP_HTTPUPDATEDELEGATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x4E8260)
#define BESTHTTP_HTTPUPDATEDELEGATOR_GET_ISTHREADRUNNING_OFFSET UNITYSDK_OFFSET(0x4E86E0)
#define BESTHTTP_HTTPUPDATEDELEGATOR_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x4E8730)
#define BESTHTTP_HTTPUPDATEDELEGATOR_CHECKINSTANCE_OFFSET UNITYSDK_OFFSET(0x4DA380)
#define BESTHTTP_HTTPUPDATEDELEGATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4E87A0)
#define BESTHTTP_HTTPUPDATEDELEGATOR_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x4E87F0)
#define BESTHTTP_HTTPUPDATEDELEGATOR_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x4E89B0)
#define BESTHTTP_HTTPUPDATEDELEGATOR_SET_THREADFREQUENCYINMS_OFFSET UNITYSDK_OFFSET(0x4E8F10)
#define BESTHTTP_HTTPUPDATEDELEGATOR_SETUP_OFFSET UNITYSDK_OFFSET(0x4E83D0)
#define BESTHTTP_HTTPUPDATEDELEGATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x4E8F60)
#define BESTHTTP_HTTPUPDATEDELEGATOR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x4E9090)
#define BESTHTTP_HTTPUPDATEDELEGATOR_SET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x4E90E0)
#define BESTHTTP_HTTPUPDATEDELEGATOR_GET_THREADFREQUENCYINMS_OFFSET UNITYSDK_OFFSET(0x4E9130)
#define BESTHTTP_HTTPUPDATEDELEGATOR_GET_ISTHREADED_OFFSET UNITYSDK_OFFSET(0x4E9180)
#define BESTHTTP_HTTPUPDATEDELEGATOR_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x4E91D0)
#define BESTHTTP_HTTPUPDATEDELEGATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E9220)
#define BESTHTTP_HTTPUPDATEDELEGATOR_THREADFUNC_OFFSET UNITYSDK_OFFSET(0x4E9230)

namespace BestHTTP
{
	inline static constexpr unsigned int HTTPUpdateDelegator_TypeDefinitionIndex = 21315;

	class HTTPUpdateDelegator : public Il2CppObject
	{
	public:
		::BestHTTP::HTTPUpdateDelegator* _Instance_k__BackingField; // 0x0
		::System::Boolean _IsCreated_k__BackingField; // 0x8
		::System::Boolean _IsThreaded_k__BackingField; // 0x9
		::System::Boolean _IsThreadRunning_k__BackingField; // 0xA
		::System::Int32 _ThreadFrequencyInMS_k__BackingField; // 0xC
		Il2CppObject* OnBeforeApplicationQuit; // 0x10
		Il2CppObject* OnApplicationForegroundStateChanged; // 0x18
		::System::Boolean IsSetupCalled; // 0x20

		::System::Void set_IsThreaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_SET_ISTHREADED_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsThreadRunning(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_SET_ISTHREADRUNNING_OFFSET))(arg, nullptr);
		}

		::System::Void ResetSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_RESETSETUP_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsThreadRunning()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_GET_ISTHREADRUNNING_OFFSET))(nullptr);
		}

		::System::Void set_Instance(::BestHTTP::HTTPUpdateDelegator* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPUpdateDelegator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_SET_INSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckInstance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_CHECKINSTANCE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void set_ThreadFrequencyInMS(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_SET_THREADFREQUENCYINMS_OFFSET))(arg, nullptr);
		}

		::System::Void Setup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_SETUP_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_ONDISABLE_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPUpdateDelegator* get_Instance()
		{
			return (return (::BestHTTP::HTTPUpdateDelegator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void set_IsCreated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_SET_ISCREATED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ThreadFrequencyInMS()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_GET_THREADFREQUENCYINMS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsThreaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_GET_ISTHREADED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_GET_ISCREATED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ThreadFunc()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPUPDATEDELEGATOR_THREADFUNC_OFFSET))(nullptr);
		}

	};
}

