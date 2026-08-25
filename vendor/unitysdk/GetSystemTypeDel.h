#pragma once
#include "unitysdk.h"

#define GETSYSTEMTYPEDEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C37E30)
#define GETSYSTEMTYPEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C37EF0)
#define GETSYSTEMTYPEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C37F00)
#define GETSYSTEMTYPEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C37F30)

	inline static constexpr unsigned int GetSystemTypeDel_TypeDefinitionIndex = 26778;

	class GetSystemTypeDel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETSYSTEMTYPEDEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GETSYSTEMTYPEDEL_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETSYSTEMTYPEDEL_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETSYSTEMTYPEDEL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

