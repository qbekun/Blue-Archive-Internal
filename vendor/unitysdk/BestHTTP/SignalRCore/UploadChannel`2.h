#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_UPLOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_FINISH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_CANCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_GET_PARAMIDX_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_SET_PARAMIDX_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_GET_STREAMINGID_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int UploadChannel`2_TypeDefinitionIndex = 21454;

	class UploadChannel`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _Controller_k__BackingField; // 0x0
		::System::Int32 _ParamIdx_k__BackingField; // 0x0

		::System::Void Upload(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_UPLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_FINISH_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_CANCEL_OFFSET))(nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 get_ParamIdx()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_GET_PARAMIDX_OFFSET))(nullptr);
		}

		::System::Void set_ParamIdx(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_SET_PARAMIDX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Controller(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_SET_CONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::String* get_StreamingId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_GET_STREAMINGID_OFFSET))(nullptr);
		}

		::System::Void set_IsFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_SET_ISFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFinished()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_GET_ISFINISHED_OFFSET))(nullptr);
		}

		Il2CppObject* get_Controller()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_UPLOADCHANNEL`2_GET_CONTROLLER_OFFSET))(nullptr);
		}

	};
}

