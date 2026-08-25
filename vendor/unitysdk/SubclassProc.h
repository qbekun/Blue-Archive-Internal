#pragma once
#include "unitysdk.h"

#define SUBCLASSPROC_INVOKE_OFFSET UNITYSDK_OFFSET(0xDF2890)
#define SUBCLASSPROC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDF28D0)
#define SUBCLASSPROC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDF2900)
#define SUBCLASSPROC_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE81A0)

	inline static constexpr unsigned int SubclassProc_TypeDefinitionIndex = 10164;

	class SubclassProc : public Il2CppObject
	{
	public:
		::System::Int32 Invoke(::System::Int32 arg, ::System::UInt32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUBCLASSPROC_INVOKE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SUBCLASSPROC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::UInt32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::AsyncCallback* arg7, ::System::Object* arg8)
		{
			return ((::System::IAsyncResult*(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SUBCLASSPROC_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUBCLASSPROC_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

