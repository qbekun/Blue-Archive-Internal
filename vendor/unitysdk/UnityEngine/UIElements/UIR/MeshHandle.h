#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class Alloc; }
namespace UnityEngine::UIElements::UIR { class Page; }

#define UNITYENGINE_UIELEMENTS_UIR_MESHHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA345870)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int MeshHandle_TypeDefinitionIndex = 30764;

	class MeshHandle : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned
	{
	public:
		::UnityEngine::UIElements::UIR::Alloc* allocVerts; // 0x18
		::UnityEngine::UIElements::UIR::Alloc* allocIndices; // 0x30
		::System::UInt32 triangleCount; // 0x48
		::UnityEngine::UIElements::UIR::Page* allocPage; // 0x50
		::System::UInt32 allocTime; // 0x58
		::System::UInt32 updateAllocID; // 0x5C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHHANDLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

