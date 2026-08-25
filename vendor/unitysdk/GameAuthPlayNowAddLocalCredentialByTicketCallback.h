#pragma once
#include "unitysdk.h"

#define GAMEAUTHPLAYNOWADDLOCALCREDENTIALBYTICKETCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9100)
#define GAMEAUTHPLAYNOWADDLOCALCREDENTIALBYTICKETCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF91D0)
#define GAMEAUTHPLAYNOWADDLOCALCREDENTIALBYTICKETCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF91E0)
#define GAMEAUTHPLAYNOWADDLOCALCREDENTIALBYTICKETCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9260)

	inline static constexpr unsigned int GameAuthPlayNowAddLocalCredentialByTicketCallback_TypeDefinitionIndex = 25801;

	class GameAuthPlayNowAddLocalCredentialByTicketCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWADDLOCALCREDENTIALBYTICKETCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWADDLOCALCREDENTIALBYTICKETCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWADDLOCALCREDENTIALBYTICKETCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWADDLOCALCREDENTIALBYTICKETCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

