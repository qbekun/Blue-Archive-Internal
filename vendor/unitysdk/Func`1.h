#pragma once
#include "unitysdk.h"

#define FUNC`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FUNC`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define FUNC`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FUNC`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Func`1_TypeDefinitionIndex = 12883;

	class Func`1 : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FUNC`1_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FUNC`1_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((Il2CppObject*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + FUNC`1_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Invoke()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNC`1_INVOKE_OFFSET))(nullptr);
		}

	};

