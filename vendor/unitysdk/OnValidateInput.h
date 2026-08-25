#pragma once
#include "unitysdk.h"

#define ONVALIDATEINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0xA463840)
#define ONVALIDATEINPUT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA463860)
#define ONVALIDATEINPUT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA463890)
#define ONVALIDATEINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA457320)

	inline static constexpr unsigned int OnValidateInput_TypeDefinitionIndex = 34787;

	class OnValidateInput : public Il2CppObject
	{
	public:
		::System::Char Invoke(::System::String* str, ::System::Int32 arg, ::System::Char arg)
		{
			return (return (::System::Char(*)(::System::String*, ::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + ONVALIDATEINPUT_INVOKE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Char EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Char(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONVALIDATEINPUT_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::Int32 arg, ::System::Char arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::Int32, ::System::Char, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONVALIDATEINPUT_BEGININVOKE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONVALIDATEINPUT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

