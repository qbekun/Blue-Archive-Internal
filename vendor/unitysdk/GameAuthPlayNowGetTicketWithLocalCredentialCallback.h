#pragma once
#include "unitysdk.h"

#define GAMEAUTHPLAYNOWGETTICKETWITHLOCALCREDENTIALCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF8CB0)
#define GAMEAUTHPLAYNOWGETTICKETWITHLOCALCREDENTIALCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF8D80)
#define GAMEAUTHPLAYNOWGETTICKETWITHLOCALCREDENTIALCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF8D90)
#define GAMEAUTHPLAYNOWGETTICKETWITHLOCALCREDENTIALCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF8E10)

	inline static constexpr unsigned int GameAuthPlayNowGetTicketWithLocalCredentialCallback_TypeDefinitionIndex = 25798;

	class GameAuthPlayNowGetTicketWithLocalCredentialCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWGETTICKETWITHLOCALCREDENTIALCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWGETTICKETWITHLOCALCREDENTIALCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWGETTICKETWITHLOCALCREDENTIALCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWGETTICKETWITHLOCALCREDENTIALCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

