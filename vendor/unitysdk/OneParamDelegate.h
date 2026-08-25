#pragma once
#include "unitysdk.h"

#define ONEPARAMDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D12100)
#define ONEPARAMDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D132F0)
#define ONEPARAMDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D13300)
#define ONEPARAMDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D13330)

	inline static constexpr unsigned int OneParamDelegate_TypeDefinitionIndex = 25890;

	class OneParamDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONEPARAMDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ONEPARAMDELEGATE_INVOKE_OFFSET))(str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONEPARAMDELEGATE_BEGININVOKE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONEPARAMDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

