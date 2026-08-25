#pragma once
#include "unitysdk.h"

#define ONCUSTOMWRITE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x20728E0)
#define ONCUSTOMWRITE_INVOKE_OFFSET UNITYSDK_OFFSET(0x2072940)
#define ONCUSTOMWRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2072980)
#define ONCUSTOMWRITE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2072A90)

	inline static constexpr unsigned int OnCustomWrite_TypeDefinitionIndex = 141;

	class OnCustomWrite : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, ::System::AsyncCallback* arg7, ::System::Object* arg8)
		{
			return ((::System::IAsyncResult*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCUSTOMWRITE_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ONCUSTOMWRITE_INVOKE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCUSTOMWRITE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCUSTOMWRITE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

