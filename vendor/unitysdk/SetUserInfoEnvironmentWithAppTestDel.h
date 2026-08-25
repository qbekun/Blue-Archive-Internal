#pragma once
#include "unitysdk.h"

#define SETUSERINFOENVIRONMENTWITHAPPTESTDEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C37F60)
#define SETUSERINFOENVIRONMENTWITHAPPTESTDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C38030)
#define SETUSERINFOENVIRONMENTWITHAPPTESTDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C38050)
#define SETUSERINFOENVIRONMENTWITHAPPTESTDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C380E0)

	inline static constexpr unsigned int SetUserInfoEnvironmentWithAppTestDel_TypeDefinitionIndex = 26779;

	class SetUserInfoEnvironmentWithAppTestDel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SETUSERINFOENVIRONMENTWITHAPPTESTDEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SETUSERINFOENVIRONMENTWITHAPPTESTDEL_INVOKE_OFFSET))(str, str, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SETUSERINFOENVIRONMENTWITHAPPTESTDEL_BEGININVOKE_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SETUSERINFOENVIRONMENTWITHAPPTESTDEL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

