#pragma once
#include "unitysdk.h"

#define ONREPOSITION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA3FBF0)
#define ONREPOSITION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA3FC20)
#define ONREPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3FC30)
#define ONREPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FC40)

	inline static constexpr unsigned int OnReposition_TypeDefinitionIndex = 79;

	class OnReposition : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONREPOSITION_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONREPOSITION_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONREPOSITION_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONREPOSITION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

