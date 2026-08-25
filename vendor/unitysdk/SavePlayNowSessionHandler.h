#pragma once
#include "unitysdk.h"

#define SAVEPLAYNOWSESSIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C46B90)
#define SAVEPLAYNOWSESSIONHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C46C60)
#define SAVEPLAYNOWSESSIONHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C46C70)
#define SAVEPLAYNOWSESSIONHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C46CA0)

	inline static constexpr unsigned int SavePlayNowSessionHandler_TypeDefinitionIndex = 26845;

	class SavePlayNowSessionHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SAVEPLAYNOWSESSIONHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEPLAYNOWSESSIONHANDLER_INVOKE_OFFSET))(str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEPLAYNOWSESSIONHANDLER_BEGININVOKE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEPLAYNOWSESSIONHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

