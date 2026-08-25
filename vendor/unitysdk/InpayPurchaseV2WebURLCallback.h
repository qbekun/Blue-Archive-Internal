#pragma once
#include "unitysdk.h"

#define INPAYPURCHASEV2WEBURLCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFA540)
#define INPAYPURCHASEV2WEBURLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA610)
#define INPAYPURCHASEV2WEBURLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA620)
#define INPAYPURCHASEV2WEBURLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA6A0)

	inline static constexpr unsigned int InpayPurchaseV2WebURLCallback_TypeDefinitionIndex = 25815;

	class InpayPurchaseV2WebURLCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INPAYPURCHASEV2WEBURLCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYPURCHASEV2WEBURLCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYPURCHASEV2WEBURLCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYPURCHASEV2WEBURLCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

