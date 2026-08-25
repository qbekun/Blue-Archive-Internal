#pragma once
#include "unitysdk.h"

#define NAMEGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9585980)
#define NAMEGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x95859B0)
#define NAMEGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95859C0)
#define NAMEGETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x956F220)

	inline static constexpr unsigned int NameGetter_TypeDefinitionIndex = 35711;

	class NameGetter : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NAMEGETTER_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Invoke(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NAMEGETTER_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::String* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::String*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NAMEGETTER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NAMEGETTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

