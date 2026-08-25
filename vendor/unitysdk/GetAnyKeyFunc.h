#pragma once
#include "unitysdk.h"

#define GETANYKEYFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F74A0)
#define GETANYKEYFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F74B0)
#define GETANYKEYFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F74E0)
#define GETANYKEYFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F75A0)

	inline static constexpr unsigned int GetAnyKeyFunc_TypeDefinitionIndex = 201;

	class GetAnyKeyFunc : public Il2CppObject
	{
	public:
		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GETANYKEYFUNC_INVOKE_OFFSET))(nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETANYKEYFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETANYKEYFUNC_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETANYKEYFUNC_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

