#pragma once
#include "unitysdk.h"

#define GAMEAUTHAUTHCLOSEDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9270)
#define GAMEAUTHAUTHCLOSEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9340)
#define GAMEAUTHAUTHCLOSEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9350)
#define GAMEAUTHAUTHCLOSEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF93F0)

	inline static constexpr unsigned int GameAuthAuthClosedCallback_TypeDefinitionIndex = 25802;

	class GameAuthAuthClosedCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHAUTHCLOSEDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHAUTHCLOSEDCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::UInt32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHAUTHCLOSEDCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHAUTHCLOSEDCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

