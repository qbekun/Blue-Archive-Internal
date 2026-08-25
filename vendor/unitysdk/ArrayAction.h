#pragma once
#include "unitysdk.h"

#define ARRAYACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ARRAYACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ARRAYACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ARRAYACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ArrayAction_TypeDefinitionIndex = 21231;

	class ArrayAction : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYACTION_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYACTION_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYACTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYACTION_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

