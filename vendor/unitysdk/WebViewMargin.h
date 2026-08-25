#pragma once
#include "unitysdk.h"

#define WEBVIEWMARGIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xC8D580)

	inline static constexpr unsigned int WebViewMargin_TypeDefinitionIndex = 9099;

	class WebViewMargin : public Il2CppObject
	{
	public:
		::System::Int32 left; // 0x10
		::System::Int32 top; // 0x14
		::System::Int32 right; // 0x18
		::System::Int32 bottom; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWMARGIN_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

