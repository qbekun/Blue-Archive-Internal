#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_FUTURES_FUTURECALLBACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURECALLBACK`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURECALLBACK`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_FUTURES_FUTURECALLBACK`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Futures
{
	inline static constexpr unsigned int FutureCallback`1_TypeDefinitionIndex = 23336;

	class FutureCallback`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURECALLBACK`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURECALLBACK`1_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURECALLBACK`1_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FUTURES_FUTURECALLBACK`1_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

