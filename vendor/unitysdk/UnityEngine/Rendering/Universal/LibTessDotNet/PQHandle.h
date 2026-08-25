#pragma once
#include "../../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PQHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA097C30)

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int PQHandle_TypeDefinitionIndex = 32831;

	class PQHandle : public Il2CppObject
	{
	public:
		::System::Int32 Invalid; // 0x0
		::System::Int32 _handle; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PQHANDLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

