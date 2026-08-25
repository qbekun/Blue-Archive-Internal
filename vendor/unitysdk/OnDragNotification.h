#pragma once
#include "unitysdk.h"

#define ONDRAGNOTIFICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA3CD70)
#define ONDRAGNOTIFICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA3CDA0)
#define ONDRAGNOTIFICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3CDB0)
#define ONDRAGNOTIFICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3CDC0)

	inline static constexpr unsigned int OnDragNotification_TypeDefinitionIndex = 71;

	class OnDragNotification : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGNOTIFICATION_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGNOTIFICATION_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDRAGNOTIFICATION_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGNOTIFICATION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

