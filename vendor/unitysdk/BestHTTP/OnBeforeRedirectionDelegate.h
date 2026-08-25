#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }

#define BESTHTTP_ONBEFOREREDIRECTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4DCAA0)
#define BESTHTTP_ONBEFOREREDIRECTIONDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DCAD0)
#define BESTHTTP_ONBEFOREREDIRECTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4DCBA0)
#define BESTHTTP_ONBEFOREREDIRECTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4DCBE0)

namespace BestHTTP
{
	inline static constexpr unsigned int OnBeforeRedirectionDelegate_TypeDefinitionIndex = 21306;

	class OnBeforeRedirectionDelegate : public Il2CppObject
	{
	public:
		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONBEFOREREDIRECTIONDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONBEFOREREDIRECTIONDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg, ::System::Uri* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::System::Uri*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONBEFOREREDIRECTIONDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Invoke(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg, ::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONBEFOREREDIRECTIONDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

