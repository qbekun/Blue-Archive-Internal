#pragma once
#include "unitysdk.h"

#define CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1990690)
#define CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19906A0)
#define CALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x19906B0)
#define CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1990770)

	inline static constexpr unsigned int Callback_TypeDefinitionIndex = 102;

	class Callback : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALLBACK_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACK_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACK_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

