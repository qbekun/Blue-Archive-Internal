#pragma once
#include "unitysdk.h"

#define ONDIMENSIONSCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x207C6D0)
#define ONDIMENSIONSCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x207C6E0)
#define ONDIMENSIONSCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x207C6F0)
#define ONDIMENSIONSCHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x207C720)

	inline static constexpr unsigned int OnDimensionsChanged_TypeDefinitionIndex = 148;

	class OnDimensionsChanged : public Il2CppObject
	{
	public:
		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDIMENSIONSCHANGED_INVOKE_OFFSET))(nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONDIMENSIONSCHANGED_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONDIMENSIONSCHANGED_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONDIMENSIONSCHANGED_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

