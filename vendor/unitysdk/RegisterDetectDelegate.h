#pragma once
#include "unitysdk.h"

#define REGISTERDETECTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C03CC0)
#define REGISTERDETECTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C03D90)
#define REGISTERDETECTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C03DA0)
#define REGISTERDETECTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C03E10)

	inline static constexpr unsigned int RegisterDetectDelegate_TypeDefinitionIndex = 26530;

	class RegisterDetectDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REGISTERDETECTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REGISTERDETECTDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REGISTERDETECTDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + REGISTERDETECTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

