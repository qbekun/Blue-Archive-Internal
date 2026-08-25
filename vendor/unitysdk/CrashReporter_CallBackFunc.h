#pragma once
#include "unitysdk.h"

#define CRASHREPORTER_CALLBACKFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDE0070)
#define CRASHREPORTER_CALLBACKFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDE0080)
#define CRASHREPORTER_CALLBACKFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE00B0)
#define CRASHREPORTER_CALLBACKFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0xDE0170)

	inline static constexpr unsigned int CrashReporter_CallBackFunc_TypeDefinitionIndex = 10125;

	class CrashReporter_CallBackFunc : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTER_CALLBACKFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTER_CALLBACKFUNC_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTER_CALLBACKFUNC_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTER_CALLBACKFUNC_INVOKE_OFFSET))(nullptr);
		}

	};

