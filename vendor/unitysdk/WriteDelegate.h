#pragma once
#include "unitysdk.h"

#define WRITEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9322E50)
#define WRITEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9324180)
#define WRITEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9322F20)
#define WRITEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9323120)

	inline static constexpr unsigned int WriteDelegate_TypeDefinitionIndex = 25295;

	class WriteDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WRITEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WRITEDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

