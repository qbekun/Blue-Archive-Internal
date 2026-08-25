#pragma once
#include "unitysdk.h"

#define LOGOUTDEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C379A0)
#define LOGOUTDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C37A70)
#define LOGOUTDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C37A80)
#define LOGOUTDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C37AF0)

	inline static constexpr unsigned int LogoutDel_TypeDefinitionIndex = 26775;

	class LogoutDel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOGOUTDEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOGOUTDEL_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LOGOUTDEL_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + LOGOUTDEL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

