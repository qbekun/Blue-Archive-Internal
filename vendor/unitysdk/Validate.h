#pragma once
#include "unitysdk.h"

#define VALIDATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA41990)
#define VALIDATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41A00)
#define VALIDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA41AD0)
#define VALIDATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA41AE0)

	inline static constexpr unsigned int Validate_TypeDefinitionIndex = 83;

	class Validate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::Boolean arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + VALIDATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALIDATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Invoke(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + VALIDATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + VALIDATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

