#pragma once
#include "unitysdk.h"

#define GAMEAUTHPLAYNOWGETPLAYNOWCODECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF8E20)
#define GAMEAUTHPLAYNOWGETPLAYNOWCODECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF8EF0)
#define GAMEAUTHPLAYNOWGETPLAYNOWCODECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF8F00)
#define GAMEAUTHPLAYNOWGETPLAYNOWCODECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF8F80)

	inline static constexpr unsigned int GameAuthPlayNowGetPlayNowCodeCallback_TypeDefinitionIndex = 25799;

	class GameAuthPlayNowGetPlayNowCodeCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWGETPLAYNOWCODECALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWGETPLAYNOWCODECALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWGETPLAYNOWCODECALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWGETPLAYNOWCODECALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

