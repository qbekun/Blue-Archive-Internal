#pragma once
#include "unitysdk.h"

#define UNLOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE690)
#define UNLOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE6A0)
#define UNLOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE6B0)
#define UNLOADDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE6E0)

	inline static constexpr unsigned int UnloadDelegate_TypeDefinitionIndex = 20415;

	class UnloadDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNLOADDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNLOADDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNLOADDELEGATE_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNLOADDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

