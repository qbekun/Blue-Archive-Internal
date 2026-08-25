#pragma once
#include "unitysdk.h"

class UIPanel;

#define ONCLIPPINGMOVED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x24372F0)
#define ONCLIPPINGMOVED_.CTOR_OFFSET UNITYSDK_OFFSET(0x2437320)
#define ONCLIPPINGMOVED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2437430)
#define ONCLIPPINGMOVED_INVOKE_OFFSET UNITYSDK_OFFSET(0x2437440)

	inline static constexpr unsigned int OnClippingMoved_TypeDefinitionIndex = 246;

	class OnClippingMoved : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(UIPanel* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(UIPanel*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLIPPINGMOVED_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCLIPPINGMOVED_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLIPPINGMOVED_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(UIPanel* arg)
		{
			((::System::Void(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLIPPINGMOVED_INVOKE_OFFSET))(arg, nullptr);
		}

	};

