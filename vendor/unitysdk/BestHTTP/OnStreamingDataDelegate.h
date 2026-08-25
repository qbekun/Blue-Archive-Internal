#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }

#define BESTHTTP_ONSTREAMINGDATADELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4DCE50)
#define BESTHTTP_ONSTREAMINGDATADELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4DCEF0)
#define BESTHTTP_ONSTREAMINGDATADELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4DCF20)
#define BESTHTTP_ONSTREAMINGDATADELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DCF50)

namespace BestHTTP
{
	inline static constexpr unsigned int OnStreamingDataDelegate_TypeDefinitionIndex = 21309;

	class OnStreamingDataDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONSTREAMINGDATADELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONSTREAMINGDATADELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Invoke(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONSTREAMINGDATADELEGATE_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONSTREAMINGDATADELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

