#pragma once
#include "unitysdk.h"

#define ONLOCALIZENOTIFICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x19950B0)
#define ONLOCALIZENOTIFICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x19950C0)
#define ONLOCALIZENOTIFICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1995180)
#define ONLOCALIZENOTIFICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19951B0)

	inline static constexpr unsigned int OnLocalizeNotification_TypeDefinitionIndex = 105;

	class OnLocalizeNotification : public Il2CppObject
	{
	public:
		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLOCALIZENOTIFICATION_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONLOCALIZENOTIFICATION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONLOCALIZENOTIFICATION_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONLOCALIZENOTIFICATION_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

