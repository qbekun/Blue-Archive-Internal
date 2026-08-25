#pragma once
#include "unitysdk.h"

#define RENDERPASSDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA04FDE0)

	inline static constexpr unsigned int RenderPassDescriptor_TypeDefinitionIndex = 32634;

	class RenderPassDescriptor : public Il2CppObject
	{
	public:
		::System::Int32 w; // 0x10
		::System::Int32 h; // 0x14
		::System::Int32 samples; // 0x18
		::System::Int32 depthID; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERPASSDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

