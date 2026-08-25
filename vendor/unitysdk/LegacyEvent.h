#pragma once
#include "unitysdk.h"

#define LEGACYEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA31810)
#define LEGACYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0xA31820)
#define LEGACYEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31830)
#define LEGACYEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA31900)

	inline static constexpr unsigned int LegacyEvent_TypeDefinitionIndex = 58;

	class LegacyEvent : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + LEGACYEVENT_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LEGACYEVENT_INVOKE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEGACYEVENT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LEGACYEVENT_BEGININVOKE_OFFSET))(str, arg, arg2, nullptr);
		}

	};

