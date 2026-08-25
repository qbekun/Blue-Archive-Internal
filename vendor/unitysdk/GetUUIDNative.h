#pragma once
#include "unitysdk.h"

#define GETUUIDNATIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D01BB0)
#define GETUUIDNATIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D01C80)
#define GETUUIDNATIVE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D01CB0)
#define GETUUIDNATIVE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D01D80)

	inline static constexpr unsigned int GetUUIDNative_TypeDefinitionIndex = 25846;

	class GetUUIDNative : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETUUIDNATIVE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETUUIDNATIVE_INVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETUUIDNATIVE_BEGININVOKE_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETUUIDNATIVE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

