#pragma once
#include "unitysdk.h"

#define SELECTORINITIALISATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D9B220)
#define SELECTORINITIALISATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D9B2E0)
#define SELECTORINITIALISATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D9B2F0)
#define SELECTORINITIALISATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D9B320)

	inline static constexpr unsigned int SelectorInitialisation_TypeDefinitionIndex = 26334;

	class SelectorInitialisation : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTORINITIALISATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTORINITIALISATION_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTORINITIALISATION_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTORINITIALISATION_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

