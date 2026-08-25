#pragma once
#include "unitysdk.h"

#define SELECTIONSUBMIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA1890)
#define SELECTIONSUBMIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1960)
#define SELECTIONSUBMIT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1970)
#define SELECTIONSUBMIT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9DA19E0)

	inline static constexpr unsigned int SelectionSubmit_TypeDefinitionIndex = 26346;

	class SelectionSubmit : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONSUBMIT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONSUBMIT_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONSUBMIT_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONSUBMIT_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

