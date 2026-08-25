#pragma once
#include "unitysdk.h"

namespace BestHTTP::JSON::LitJson { class FsmContext; }

#define STATEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8B5760)
#define STATEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x8B5790)
#define STATEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8B57A0)
#define STATEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B47A0)

	inline static constexpr unsigned int StateHandler_TypeDefinitionIndex = 23326;

	class StateHandler : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::JSON::LitJson::FsmContext* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + STATEHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Invoke(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + STATEHANDLER_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + STATEHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STATEHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

