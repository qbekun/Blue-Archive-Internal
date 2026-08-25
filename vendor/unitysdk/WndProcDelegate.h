#pragma once
#include "unitysdk.h"

#define WNDPROCDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC8A7A0)
#define WNDPROCDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC8A230)
#define WNDPROCDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xC8A880)
#define WNDPROCDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC8A8B0)

	inline static constexpr unsigned int WndProcDelegate_TypeDefinitionIndex = 9083;

	class WndProcDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::UInt32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::AsyncCallback* arg5, ::System::Object* arg6)
		{
			return ((::System::IAsyncResult*(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WNDPROCDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WNDPROCDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::UInt32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WNDPROCDELEGATE_INVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + WNDPROCDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

