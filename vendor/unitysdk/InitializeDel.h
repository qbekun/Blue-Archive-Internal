#pragma once
#include "unitysdk.h"

namespace NPA::Editor::methinks { class CallbackNativeMessageDel; }

#define INITIALIZEDEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C375F0)
#define INITIALIZEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C376C0)
#define INITIALIZEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C37770)
#define INITIALIZEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C37970)

	inline static constexpr unsigned int InitializeDel_TypeDefinitionIndex = 26774;

	class InitializeDel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INITIALIZEDEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::NPA::Editor::methinks::CallbackNativeMessageDel* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::NPA::Editor::methinks::CallbackNativeMessageDel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INITIALIZEDEL_INVOKE_OFFSET))(arg, arg, arg, arg, arg, str, str, str, arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::NPA::Editor::methinks::CallbackNativeMessageDel* arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::NPA::Editor::methinks::CallbackNativeMessageDel*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INITIALIZEDEL_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, str, str, str, arg, arg, arg, arg, arg, str, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INITIALIZEDEL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

