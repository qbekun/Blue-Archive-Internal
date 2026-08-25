#pragma once
#include "unitysdk.h"

#define GETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9571A70)
#define GETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9571A80)
#define GETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9571A90)
#define GETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x956D930)

	inline static constexpr unsigned int Getter_TypeDefinitionIndex = 35657;

	class Getter : public Il2CppObject
	{
	public:
		::System::Object* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Object*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETTER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Object* Invoke()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GETTER_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETTER_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

