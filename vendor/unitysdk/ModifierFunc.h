#pragma once
#include "unitysdk.h"

#define MODIFIERFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x242D6B0)
#define MODIFIERFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x242D6C0)
#define MODIFIERFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x242D6D0)
#define MODIFIERFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x242D700)

	inline static constexpr unsigned int ModifierFunc_TypeDefinitionIndex = 239;

	class ModifierFunc : public Il2CppObject
	{
	public:
		::System::String* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::String*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MODIFIERFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::String* Invoke(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MODIFIERFUNC_INVOKE_OFFSET))(str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MODIFIERFUNC_BEGININVOKE_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MODIFIERFUNC_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

