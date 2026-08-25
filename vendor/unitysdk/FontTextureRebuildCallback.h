#pragma once
#include "unitysdk.h"

#define FONTTEXTUREREBUILDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E9320)
#define FONTTEXTUREREBUILDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2E93E0)

	inline static constexpr unsigned int FontTextureRebuildCallback_TypeDefinitionIndex = 37673;

	class FontTextureRebuildCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FONTTEXTUREREBUILDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONTTEXTUREREBUILDCALLBACK_INVOKE_OFFSET))(nullptr);
		}

	};

