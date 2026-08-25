#pragma once
#include "unitysdk.h"

#define AXISINPUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x285A680)
#define AXISINPUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x285A690)
#define AXISINPUTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x285A0D0)
#define AXISINPUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x285A6C0)

	inline static constexpr unsigned int AxisInputDelegate_TypeDefinitionIndex = 34290;

	class AxisInputDelegate : public Il2CppObject
	{
	public:
		::System::Single Invoke(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + AXISINPUTDELEGATE_INVOKE_OFFSET))(str, nullptr);
		}

		::System::Single EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Single(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + AXISINPUTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AXISINPUTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + AXISINPUTDELEGATE_BEGININVOKE_OFFSET))(str, arg, arg, nullptr);
		}

	};

