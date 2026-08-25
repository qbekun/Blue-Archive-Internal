#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class Vec3; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_CONTOURVERTEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA09CE00)

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ContourVertex_TypeDefinitionIndex = 32842;

	class ContourVertex : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* Position; // 0x10
		::System::Object* Data; // 0x20

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_CONTOURVERTEX_TOSTRING_OFFSET))(nullptr);
		}

	};
}

