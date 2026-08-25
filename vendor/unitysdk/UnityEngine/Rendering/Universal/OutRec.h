#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class OutRec; }
namespace UnityEngine::Rendering::Universal { class OutPt; }
namespace UnityEngine::Rendering::Universal { class PolyNode; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OUTREC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9BE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OutRec_TypeDefinitionIndex = 32449;

	class OutRec : public Il2CppObject
	{
	public:
		::System::Int32 Idx; // 0x10
		::System::Boolean IsHole; // 0x14
		::System::Boolean IsOpen; // 0x15
		::UnityEngine::Rendering::Universal::OutRec* FirstLeft; // 0x18
		::UnityEngine::Rendering::Universal::OutPt* Pts; // 0x20
		::UnityEngine::Rendering::Universal::OutPt* BottomPt; // 0x28
		::UnityEngine::Rendering::Universal::PolyNode* PolyNode; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OUTREC_.CTOR_OFFSET))(nullptr);
		}

	};
}

