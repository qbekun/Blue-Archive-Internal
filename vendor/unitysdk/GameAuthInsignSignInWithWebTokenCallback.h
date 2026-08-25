#pragma once
#include "unitysdk.h"

#define GAMEAUTHINSIGNSIGNINWITHWEBTOKENCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9CA0)
#define GAMEAUTHINSIGNSIGNINWITHWEBTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9D70)
#define GAMEAUTHINSIGNSIGNINWITHWEBTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9D80)
#define GAMEAUTHINSIGNSIGNINWITHWEBTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9E00)

	inline static constexpr unsigned int GameAuthInsignSignInWithWebTokenCallback_TypeDefinitionIndex = 25809;

	class GameAuthInsignSignInWithWebTokenCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNSIGNINWITHWEBTOKENCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNSIGNINWITHWEBTOKENCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNSIGNINWITHWEBTOKENCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNSIGNINWITHWEBTOKENCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

