#pragma once
#include "unitysdk.h"

#define GETTOUCHCOUNTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F86D0)
#define GETTOUCHCOUNTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F8700)
#define GETTOUCHCOUNTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F87C0)
#define GETTOUCHCOUNTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F87D0)

	inline static constexpr unsigned int GetTouchCountCallback_TypeDefinitionIndex = 218;

	class GetTouchCountCallback : public Il2CppObject
	{
	public:
		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHCOUNTCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHCOUNTCALLBACK_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHCOUNTCALLBACK_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETTOUCHCOUNTCALLBACK_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

