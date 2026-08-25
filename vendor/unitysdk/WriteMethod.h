#pragma once
#include "unitysdk.h"

#define WRITEMETHOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8A5D0)
#define WRITEMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B8A6A0)
#define WRITEMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9B8A6C0)
#define WRITEMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9B8A760)

	inline static constexpr unsigned int WriteMethod_TypeDefinitionIndex = 29629;

	class WriteMethod : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WRITEMETHOD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WRITEMETHOD_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEMETHOD_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEMETHOD_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

