#pragma once
#include "unitysdk.h"

#define ONDRAGFINISHED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA35040)
#define ONDRAGFINISHED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA35050)
#define ONDRAGFINISHED_.CTOR_OFFSET UNITYSDK_OFFSET(0xA35080)
#define ONDRAGFINISHED_INVOKE_OFFSET UNITYSDK_OFFSET(0xA35140)

	inline static constexpr unsigned int OnDragFinished_TypeDefinitionIndex = 63;

	class OnDragFinished : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGFINISHED_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGFINISHED_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONDRAGFINISHED_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDRAGFINISHED_INVOKE_OFFSET))(nullptr);
		}

	};

