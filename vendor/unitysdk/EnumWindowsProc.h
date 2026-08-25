#pragma once
#include "unitysdk.h"

#define ENUMWINDOWSPROC_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF1010)
#define ENUMWINDOWSPROC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDF2A10)
#define ENUMWINDOWSPROC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDF2A40)
#define ENUMWINDOWSPROC_INVOKE_OFFSET UNITYSDK_OFFSET(0xDF2AD0)

	inline static constexpr unsigned int EnumWindowsProc_TypeDefinitionIndex = 10171;

	class EnumWindowsProc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENUMWINDOWSPROC_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMWINDOWSPROC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMWINDOWSPROC_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean Invoke(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENUMWINDOWSPROC_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

