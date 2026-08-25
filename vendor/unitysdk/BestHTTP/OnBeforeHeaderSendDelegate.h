#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_ONBEFOREHEADERSENDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4DCD30)
#define BESTHTTP_ONBEFOREHEADERSENDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DCD40)
#define BESTHTTP_ONBEFOREHEADERSENDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4DCE10)
#define BESTHTTP_ONBEFOREHEADERSENDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4DCE20)

namespace BestHTTP
{
	inline static constexpr unsigned int OnBeforeHeaderSendDelegate_TypeDefinitionIndex = 21308;

	class OnBeforeHeaderSendDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONBEFOREHEADERSENDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONBEFOREHEADERSENDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONBEFOREHEADERSENDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::HTTPRequest* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::HTTPRequest*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONBEFOREHEADERSENDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

