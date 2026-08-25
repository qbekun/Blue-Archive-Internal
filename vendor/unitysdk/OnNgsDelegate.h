#pragma once
#include "unitysdk.h"

#define ONNGSDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C017F0)
#define ONNGSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C04060)
#define ONNGSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C04070)
#define ONNGSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C04100)

	inline static constexpr unsigned int OnNgsDelegate_TypeDefinitionIndex = 26533;

	class OnNgsDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONNGSDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONNGSDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONNGSDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONNGSDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

