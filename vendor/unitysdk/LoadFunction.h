#pragma once
#include "unitysdk.h"

#define LOADFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1994F90)
#define LOADFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1994FA0)
#define LOADFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1994FB0)
#define LOADFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1994FE0)

	inline static constexpr unsigned int LoadFunction_TypeDefinitionIndex = 104;

	class LoadFunction : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + LOADFUNCTION_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Invoke(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOADFUNCTION_INVOKE_OFFSET))(str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LOADFUNCTION_BEGININVOKE_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOADFUNCTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

