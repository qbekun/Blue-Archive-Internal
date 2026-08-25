#pragma once
#include "unitysdk.h"

#define ONCLICKCB_.CTOR_OFFSET UNITYSDK_OFFSET(0x243EF40)
#define ONCLICKCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x243F050)
#define ONCLICKCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x243F080)
#define ONCLICKCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x243F090)

	inline static constexpr unsigned int OnClickCB_TypeDefinitionIndex = 257;

	class OnClickCB : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCLICKCB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLICKCB_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLICKCB_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLICKCB_INVOKE_OFFSET))(arg, nullptr);
		}

	};

