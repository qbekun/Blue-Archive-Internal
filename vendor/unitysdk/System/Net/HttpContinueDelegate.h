#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HTTPCONTINUEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA7710)
#define SYSTEM_NET_HTTPCONTINUEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BA77E0)

namespace System::Net
{
	inline static constexpr unsigned int HttpContinueDelegate_TypeDefinitionIndex = 29688;

	class HttpContinueDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::Net::WebHeaderCollection* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Net::WebHeaderCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

