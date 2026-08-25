#pragma once
#include "unitysdk.h"

#define COMPAREFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPAREFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPAREFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPAREFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CompareFunc_TypeDefinitionIndex = 91;

	class CompareFunc : public Il2CppObject
	{
	public:
		::System::Int32 Invoke(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMPAREFUNC_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, Il2CppObject* arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(Il2CppObject*, Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + COMPAREFUNC_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMPAREFUNC_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + COMPAREFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

