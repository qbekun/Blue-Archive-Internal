#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_ONDOWNLOADPROGRESSDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DC760)
#define BESTHTTP_ONDOWNLOADPROGRESSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4DC830)
#define BESTHTTP_ONDOWNLOADPROGRESSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4DC850)
#define BESTHTTP_ONDOWNLOADPROGRESSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4DC8F0)

namespace BestHTTP
{
	inline static constexpr unsigned int OnDownloadProgressDelegate_TypeDefinitionIndex = 21304;

	class OnDownloadProgressDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONDOWNLOADPROGRESSDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::BestHTTP::HTTPRequest* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONDOWNLOADPROGRESSDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::HTTPRequest* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::HTTPRequest*, ::System::Int64, ::System::Int64, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONDOWNLOADPROGRESSDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONDOWNLOADPROGRESSDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

