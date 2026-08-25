#pragma once
#include "unitysdk.h"

#define GAMEAUTHPLAYNOWCHECKCONFLICTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF8F90)
#define GAMEAUTHPLAYNOWCHECKCONFLICTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9060)
#define GAMEAUTHPLAYNOWCHECKCONFLICTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9070)
#define GAMEAUTHPLAYNOWCHECKCONFLICTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF90F0)

	inline static constexpr unsigned int GameAuthPlayNowCheckConflictCallback_TypeDefinitionIndex = 25800;

	class GameAuthPlayNowCheckConflictCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWCHECKCONFLICTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWCHECKCONFLICTCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWCHECKCONFLICTCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHPLAYNOWCHECKCONFLICTCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

