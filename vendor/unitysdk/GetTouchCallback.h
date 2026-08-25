#pragma once
#include "unitysdk.h"

class Touch;

#define GETTOUCHCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F8800)
#define GETTOUCHCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F88D0)
#define GETTOUCHCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F8940)
#define GETTOUCHCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F8950)

	inline static constexpr unsigned int GetTouchCallback_TypeDefinitionIndex = 219;

	class GetTouchCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHCALLBACK_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHCALLBACK_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Touch* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((Touch*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		Touch* Invoke(::System::Int32 arg)
		{
			return ((Touch*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

