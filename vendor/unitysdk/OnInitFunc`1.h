#pragma once
#include "unitysdk.h"

#define ONINITFUNC`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ONINITFUNC`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ONINITFUNC`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ONINITFUNC`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int OnInitFunc`1_TypeDefinitionIndex = 115;

	class OnInitFunc`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONINITFUNC`1_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONINITFUNC`1_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONINITFUNC`1_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ONINITFUNC`1_INVOKE_OFFSET))(arg, nullptr);
		}

	};

