#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }

#define BESTHTTP_ONREQUESTFINISHEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4DC630)
#define BESTHTTP_ONREQUESTFINISHEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4DC640)
#define BESTHTTP_ONREQUESTFINISHEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4DC650)
#define BESTHTTP_ONREQUESTFINISHEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DC690)

namespace BestHTTP
{
	inline static constexpr unsigned int OnRequestFinishedDelegate_TypeDefinitionIndex = 21303;

	class OnRequestFinishedDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONREQUESTFINISHEDDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONREQUESTFINISHEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONREQUESTFINISHEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONREQUESTFINISHEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

