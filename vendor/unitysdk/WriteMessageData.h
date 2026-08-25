#pragma once
#include "unitysdk.h"

#define WRITEMESSAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB1170)
#define WRITEMESSAGEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1240)
#define WRITEMESSAGEDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1260)
#define WRITEMESSAGEDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1320)

	inline static constexpr unsigned int WriteMessageData_TypeDefinitionIndex = 25416;

	class WriteMessageData : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WRITEMESSAGEDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WRITEMESSAGEDATA_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEMESSAGEDATA_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEMESSAGEDATA_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

