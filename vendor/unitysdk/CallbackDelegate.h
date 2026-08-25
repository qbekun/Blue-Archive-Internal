#pragma once
#include "unitysdk.h"

#define CALLBACKDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1C420)
#define CALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1C4F0)
#define CALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1C500)
#define CALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1C580)

	inline static constexpr unsigned int CallbackDelegate_TypeDefinitionIndex = 25967;

	class CallbackDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

