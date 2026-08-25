#pragma once
#include "unitysdk.h"

#define ONSCHEMECHANGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F7C40)
#define ONSCHEMECHANGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F7C70)
#define ONSCHEMECHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F7C80)
#define ONSCHEMECHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F7C90)

	inline static constexpr unsigned int OnSchemeChange_TypeDefinitionIndex = 208;

	class OnSchemeChange : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONSCHEMECHANGE_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONSCHEMECHANGE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONSCHEMECHANGE_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONSCHEMECHANGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

