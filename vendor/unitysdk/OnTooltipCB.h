#pragma once
#include "unitysdk.h"

#define ONTOOLTIPCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x243F250)
#define ONTOOLTIPCB_.CTOR_OFFSET UNITYSDK_OFFSET(0x243F260)
#define ONTOOLTIPCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x243F370)
#define ONTOOLTIPCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x243F3F0)

	inline static constexpr unsigned int OnTooltipCB_TypeDefinitionIndex = 259;

	class OnTooltipCB : public Il2CppObject
	{
	public:
		::System::Void Invoke(::System::Object* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ONTOOLTIPCB_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONTOOLTIPCB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::Boolean arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONTOOLTIPCB_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONTOOLTIPCB_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

