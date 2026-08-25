#pragma once
#include "unitysdk.h"

#define TWOPARAMSDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D11F10)
#define TWOPARAMSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D13340)
#define TWOPARAMSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D13350)
#define TWOPARAMSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D13390)

	inline static constexpr unsigned int TwoParamsDelegate_TypeDefinitionIndex = 25891;

	class TwoParamsDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWOPARAMSDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TWOPARAMSDELEGATE_INVOKE_OFFSET))(str, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TWOPARAMSDELEGATE_BEGININVOKE_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + TWOPARAMSDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

