#pragma once
#include "unitysdk.h"

#define INPAYWEBURLCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFA260)
#define INPAYWEBURLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA330)
#define INPAYWEBURLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA340)
#define INPAYWEBURLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA3C0)

	inline static constexpr unsigned int InpayWebURLCallback_TypeDefinitionIndex = 25813;

	class InpayWebURLCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INPAYWEBURLCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYWEBURLCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYWEBURLCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYWEBURLCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

