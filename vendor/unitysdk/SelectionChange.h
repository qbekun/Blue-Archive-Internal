#pragma once
#include "unitysdk.h"

#define SELECTIONCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA15D0)
#define SELECTIONCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9DA16A0)
#define SELECTIONCHANGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9DA16B0)
#define SELECTIONCHANGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1720)

	inline static constexpr unsigned int SelectionChange_TypeDefinitionIndex = 26344;

	class SelectionChange : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCHANGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCHANGE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCHANGE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCHANGE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

