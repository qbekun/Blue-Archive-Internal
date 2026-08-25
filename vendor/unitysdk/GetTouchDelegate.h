#pragma once
#include "unitysdk.h"

class MouseOrTouch;

#define GETTOUCHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F7730)
#define GETTOUCHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F7740)
#define GETTOUCHDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F77E0)
#define GETTOUCHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F78B0)

	inline static constexpr unsigned int GetTouchDelegate_TypeDefinitionIndex = 203;

	class GetTouchDelegate : public Il2CppObject
	{
	public:
		MouseOrTouch* Invoke(::System::Int32 arg, ::System::Boolean arg2)
		{
			return ((MouseOrTouch*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHDELEGATE_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Boolean arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		MouseOrTouch* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((MouseOrTouch*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

