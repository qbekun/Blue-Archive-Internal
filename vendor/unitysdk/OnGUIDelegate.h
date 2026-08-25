#pragma once
#include "unitysdk.h"

#define ONGUIDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2883D20)
#define ONGUIDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2883DE0)
#define ONGUIDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x2883DF0)
#define ONGUIDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x2883E00)

	inline static constexpr unsigned int OnGUIDelegate_TypeDefinitionIndex = 34404;

	class OnGUIDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONGUIDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONGUIDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGUIDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONGUIDELEGATE_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

