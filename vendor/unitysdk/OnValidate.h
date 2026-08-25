#pragma once
#include "unitysdk.h"

#define ONVALIDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x2309740)
#define ONVALIDATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x2309760)
#define ONVALIDATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2309810)
#define ONVALIDATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2309840)

	inline static constexpr unsigned int OnValidate_TypeDefinitionIndex = 231;

	class OnValidate : public Il2CppObject
	{
	public:
		::System::Char Invoke(::System::String* str, ::System::Int32 arg, ::System::Char arg2)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + ONVALIDATE_INVOKE_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::Int32 arg, ::System::Char arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::System::String*, ::System::Int32, ::System::Char, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONVALIDATE_BEGININVOKE_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Char EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Char(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONVALIDATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONVALIDATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

