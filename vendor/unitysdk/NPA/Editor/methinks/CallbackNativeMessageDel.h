#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_METHINKS_CALLBACKNATIVEMESSAGEDEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C36360)
#define NPA_EDITOR_METHINKS_CALLBACKNATIVEMESSAGEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C36430)
#define NPA_EDITOR_METHINKS_CALLBACKNATIVEMESSAGEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C36450)
#define NPA_EDITOR_METHINKS_CALLBACKNATIVEMESSAGEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C36520)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int CallbackNativeMessageDel_TypeDefinitionIndex = 26773;

	class CallbackNativeMessageDel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_CALLBACKNATIVEMESSAGEDEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::UInt64 arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_CALLBACKNATIVEMESSAGEDEL_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::UInt64, ::System::Int64, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_CALLBACKNATIVEMESSAGEDEL_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_CALLBACKNATIVEMESSAGEDEL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

