#pragma once
#include "unitysdk.h"

#define CALLBACKIDHANDLEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1C1E0)
#define CALLBACKIDHANDLEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1C340)
#define CALLBACKIDHANDLEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1C360)
#define CALLBACKIDHANDLEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1C410)

	inline static constexpr unsigned int CallbackIdHandledDelegate_TypeDefinitionIndex = 25966;

	class CallbackIdHandledDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKIDHANDLEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKIDHANDLEDDELEGATE_INVOKE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKIDHANDLEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKIDHANDLEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

