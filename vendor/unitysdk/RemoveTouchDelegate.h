#pragma once
#include "unitysdk.h"

#define REMOVETOUCHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F78C0)
#define REMOVETOUCHDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F78D0)
#define REMOVETOUCHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F79A0)
#define REMOVETOUCHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F79B0)

	inline static constexpr unsigned int RemoveTouchDelegate_TypeDefinitionIndex = 204;

	class RemoveTouchDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REMOVETOUCHDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REMOVETOUCHDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + REMOVETOUCHDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REMOVETOUCHDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

