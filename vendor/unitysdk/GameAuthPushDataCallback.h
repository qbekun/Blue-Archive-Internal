#pragma once
#include "unitysdk.h"

#define GAMEAUTHPUSHDATACALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9400)
#define GAMEAUTHPUSHDATACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF94D0)
#define GAMEAUTHPUSHDATACALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF94E0)
#define GAMEAUTHPUSHDATACALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9560)

	inline static constexpr unsigned int GameAuthPushDataCallback_TypeDefinitionIndex = 25803;

	class GameAuthPushDataCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPUSHDATACALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPUSHDATACALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPUSHDATACALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPUSHDATACALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

