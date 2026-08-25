#pragma once
#include "unitysdk.h"

#define GETHOSTADDRESSESCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A6B620)
#define GETHOSTADDRESSESCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9A6C4F0)
#define GETHOSTADDRESSESCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9A6B6F0)
#define GETHOSTADDRESSESCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9A6B820)

	inline static constexpr unsigned int GetHostAddressesCallback_TypeDefinitionIndex = 29767;

	class GetHostAddressesCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETHOSTADDRESSESCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Invoke(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GETHOSTADDRESSESCALLBACK_INVOKE_OFFSET))(str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETHOSTADDRESSESCALLBACK_BEGININVOKE_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETHOSTADDRESSESCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

