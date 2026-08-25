#pragma once
#include "unitysdk.h"

#define SENDNXLOGHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C46D40)
#define SENDNXLOGHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C46E10)
#define SENDNXLOGHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C46E20)
#define SENDNXLOGHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C46E60)

	inline static constexpr unsigned int SendNXLogHandler_TypeDefinitionIndex = 26847;

	class SendNXLogHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SENDNXLOGHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SENDNXLOGHANDLER_INVOKE_OFFSET))(str, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SENDNXLOGHANDLER_BEGININVOKE_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SENDNXLOGHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

