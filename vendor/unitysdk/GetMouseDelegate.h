#pragma once
#include "unitysdk.h"

class MouseOrTouch;

#define GETMOUSEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F75D0)
#define GETMOUSEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F75E0)
#define GETMOUSEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F75F0)
#define GETMOUSEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F76C0)

	inline static constexpr unsigned int GetMouseDelegate_TypeDefinitionIndex = 202;

	class GetMouseDelegate : public Il2CppObject
	{
	public:
		MouseOrTouch* Invoke(::System::Int32 arg)
		{
			return ((MouseOrTouch*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETMOUSEDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		MouseOrTouch* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((MouseOrTouch*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETMOUSEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETMOUSEDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETMOUSEDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

