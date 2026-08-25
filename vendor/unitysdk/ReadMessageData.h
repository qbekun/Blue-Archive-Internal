#pragma once
#include "unitysdk.h"

#define READMESSAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB0F90)
#define READMESSAGEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1060)
#define READMESSAGEDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1080)
#define READMESSAGEDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1140)

	inline static constexpr unsigned int ReadMessageData_TypeDefinitionIndex = 25415;

	class ReadMessageData : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READMESSAGEDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READMESSAGEDATA_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + READMESSAGEDATA_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + READMESSAGEDATA_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

