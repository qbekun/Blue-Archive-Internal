#pragma once
#include "unitysdk.h"

#define SELECTIONCANCEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA19F0)
#define SELECTIONCANCEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1AC0)
#define SELECTIONCANCEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1AD0)
#define SELECTIONCANCEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1B40)

	inline static constexpr unsigned int SelectionCancel_TypeDefinitionIndex = 26347;

	class SelectionCancel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCANCEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCANCEL_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCANCEL_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCANCEL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

