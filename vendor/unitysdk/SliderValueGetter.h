#pragma once
#include "unitysdk.h"

#define SLIDERVALUEGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x25F22B0)
#define SLIDERVALUEGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x25F22C0)
#define SLIDERVALUEGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x25F22F0)
#define SLIDERVALUEGETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F2320)

	inline static constexpr unsigned int SliderValueGetter_TypeDefinitionIndex = 6427;

	class SliderValueGetter : public Il2CppObject
	{
	public:
		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SLIDERVALUEGETTER_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SLIDERVALUEGETTER_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Single(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SLIDERVALUEGETTER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SLIDERVALUEGETTER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

