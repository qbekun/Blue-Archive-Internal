#pragma once
#include "unitysdk.h"

#define READMETHOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8A410)
#define READMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B8A4E0)
#define READMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B8A500)
#define READMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B8A5A0)

	inline static constexpr unsigned int ReadMethod_TypeDefinitionIndex = 29628;

	class ReadMethod : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READMETHOD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READMETHOD_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + READMETHOD_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + READMETHOD_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

