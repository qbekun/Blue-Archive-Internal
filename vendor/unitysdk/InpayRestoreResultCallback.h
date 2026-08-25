#pragma once
#include "unitysdk.h"

#define INPAYRESTORERESULTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFA820)
#define INPAYRESTORERESULTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA8F0)
#define INPAYRESTORERESULTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA900)
#define INPAYRESTORERESULTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA980)

	inline static constexpr unsigned int InpayRestoreResultCallback_TypeDefinitionIndex = 25817;

	class InpayRestoreResultCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INPAYRESTORERESULTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYRESTORERESULTCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYRESTORERESULTCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INPAYRESTORERESULTCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

