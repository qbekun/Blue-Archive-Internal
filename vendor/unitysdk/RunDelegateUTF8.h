#pragma once
#include "unitysdk.h"

#define RUNDELEGATEUTF8_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C03B30)
#define RUNDELEGATEUTF8_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C03C00)
#define RUNDELEGATEUTF8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C03C20)
#define RUNDELEGATEUTF8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C03CB0)

	inline static constexpr unsigned int RunDelegateUTF8_TypeDefinitionIndex = 26529;

	class RunDelegateUTF8 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNDELEGATEUTF8_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNDELEGATEUTF8_INVOKE_OFFSET))(str, str, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNDELEGATEUTF8_BEGININVOKE_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RUNDELEGATEUTF8_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

