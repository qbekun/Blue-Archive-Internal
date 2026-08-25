#pragma once
#include "unitysdk.h"

#define WILLRENDERCANVASES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA456640)
#define WILLRENDERCANVASES_INVOKE_OFFSET UNITYSDK_OFFSET(0xA456700)

	inline static constexpr unsigned int WillRenderCanvases_TypeDefinitionIndex = 37682;

	class WillRenderCanvases : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WILLRENDERCANVASES_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WILLRENDERCANVASES_INVOKE_OFFSET))(nullptr);
		}

	};

