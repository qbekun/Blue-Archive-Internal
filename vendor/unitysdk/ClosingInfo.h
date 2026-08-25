#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }

	inline static constexpr unsigned int ClosingInfo_TypeDefinitionIndex = 30788;

	class ClosingInfo : public Il2CppObject
	{
	public:
		::System::Boolean needsClosing; // 0x10
		::System::Boolean popViewMatrix; // 0x11
		::System::Boolean popScissorClip; // 0x12
		::System::Boolean blitAndPopRenderTexture; // 0x13
		::System::Boolean PopDefaultMaterial; // 0x14
		::UnityEngine::UIElements::UIR::RenderChainCommand* clipUnregisterDrawCommand; // 0x18
		Il2CppObject* clipperRegisterVertices; // 0x20
		Il2CppObject* clipperRegisterIndices; // 0x30
		::System::Int32 clipperRegisterIndexOffset; // 0x40
		::System::Int32 maskStencilRef; // 0x44

	};

