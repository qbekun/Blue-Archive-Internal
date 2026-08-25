#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_METHINKS_CALLBACKMODULEMESSAGEDEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2F200)
#define NPA_EDITOR_METHINKS_CALLBACKMODULEMESSAGEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C2F2D0)
#define NPA_EDITOR_METHINKS_CALLBACKMODULEMESSAGEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C2F2F0)
#define NPA_EDITOR_METHINKS_CALLBACKMODULEMESSAGEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C2F3A0)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int CallbackModuleMessageDel_TypeDefinitionIndex = 26755;

	class CallbackModuleMessageDel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_CALLBACKMODULEMESSAGEDEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::UInt64 arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_CALLBACKMODULEMESSAGEDEL_INVOKE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 arg, ::System::Int64 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::UInt64, ::System::Int64, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_CALLBACKMODULEMESSAGEDEL_BEGININVOKE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_CALLBACKMODULEMESSAGEDEL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

