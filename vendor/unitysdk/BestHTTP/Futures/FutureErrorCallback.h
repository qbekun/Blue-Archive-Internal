#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_FUTURES_FUTUREERRORCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8B7030)
#define BESTHTTP_FUTURES_FUTUREERRORCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8B7060)
#define BESTHTTP_FUTURES_FUTUREERRORCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8B7070)
#define BESTHTTP_FUTURES_FUTUREERRORCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B7080)

namespace BestHTTP::Futures
{
	inline static constexpr unsigned int FutureErrorCallback_TypeDefinitionIndex = 23338;

	class FutureErrorCallback : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::Exception* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Exception*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTUREERRORCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTUREERRORCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTUREERRORCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTUREERRORCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

