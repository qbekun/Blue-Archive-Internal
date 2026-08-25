#pragma once
#include "unitysdk.h"

#define INPAYPURCHASEV2RESULTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFA6B0)
#define INPAYPURCHASEV2RESULTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA780)
#define INPAYPURCHASEV2RESULTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA790)
#define INPAYPURCHASEV2RESULTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA810)

	inline static constexpr unsigned int InpayPurchaseV2ResultCallback_TypeDefinitionIndex = 25816;

	class InpayPurchaseV2ResultCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INPAYPURCHASEV2RESULTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYPURCHASEV2RESULTCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYPURCHASEV2RESULTCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYPURCHASEV2RESULTCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

