#pragma once
#include "../unitysdk.h"

#define SYSTEM_ASYNCCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278A80)
#define SYSTEM_ASYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9278B90)
#define SYSTEM_ASYNCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9278BA0)
#define SYSTEM_ASYNCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9278BD0)

namespace System
{
	inline static constexpr unsigned int AsyncCallback_TypeDefinitionIndex = 23711;

	class AsyncCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::IAsyncResult* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::IAsyncResult*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

