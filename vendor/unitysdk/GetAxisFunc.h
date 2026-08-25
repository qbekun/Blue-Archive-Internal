#pragma once
#include "unitysdk.h"

#define GETAXISFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F7360)
#define GETAXISFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F7390)
#define GETAXISFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F73C0)
#define GETAXISFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F73D0)

	inline static constexpr unsigned int GetAxisFunc_TypeDefinitionIndex = 200;

	class GetAxisFunc : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETAXISFUNC_BEGININVOKE_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Single EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Single(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETAXISFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Single Invoke(::System::String* str)
		{
			return ((::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GETAXISFUNC_INVOKE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETAXISFUNC_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

