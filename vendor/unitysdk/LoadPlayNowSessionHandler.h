#pragma once
#include "unitysdk.h"

#define LOADPLAYNOWSESSIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C46A80)
#define LOADPLAYNOWSESSIONHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C46B40)
#define LOADPLAYNOWSESSIONHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C46B50)
#define LOADPLAYNOWSESSIONHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C46B80)

	inline static constexpr unsigned int LoadPlayNowSessionHandler_TypeDefinitionIndex = 26844;

	class LoadPlayNowSessionHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOADPLAYNOWSESSIONHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Invoke()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADPLAYNOWSESSIONHANDLER_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LOADPLAYNOWSESSIONHANDLER_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::String*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + LOADPLAYNOWSESSIONHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

