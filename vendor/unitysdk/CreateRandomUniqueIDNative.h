#pragma once
#include "unitysdk.h"

#define CREATERANDOMUNIQUEIDNATIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D01D90)
#define CREATERANDOMUNIQUEIDNATIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D01E60)
#define CREATERANDOMUNIQUEIDNATIVE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D01E80)
#define CREATERANDOMUNIQUEIDNATIVE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D01F40)

	inline static constexpr unsigned int CreateRandomUniqueIDNative_TypeDefinitionIndex = 25847;

	class CreateRandomUniqueIDNative : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATERANDOMUNIQUEIDNATIVE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATERANDOMUNIQUEIDNATIVE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CREATERANDOMUNIQUEIDNATIVE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CREATERANDOMUNIQUEIDNATIVE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

