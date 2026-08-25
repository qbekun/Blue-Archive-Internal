#pragma once
#include "unitysdk.h"

class UIWidget;

#define ONPOSTFILLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x207C7E0)
#define ONPOSTFILLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x207C890)
#define ONPOSTFILLCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x207C8C0)
#define ONPOSTFILLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x207C9D0)

	inline static constexpr unsigned int OnPostFillCallback_TypeDefinitionIndex = 149;

	class OnPostFillCallback : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(UIWidget* arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::System::AsyncCallback* arg6, ::System::Object* arg7)
		{
			return ((::System::IAsyncResult*(*)(UIWidget*, ::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONPOSTFILLCALLBACK_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void Invoke(UIWidget* arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(UIWidget*, ::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ONPOSTFILLCALLBACK_INVOKE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONPOSTFILLCALLBACK_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONPOSTFILLCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

