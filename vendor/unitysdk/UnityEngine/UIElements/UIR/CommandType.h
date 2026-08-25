#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class CommandType; }

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int CommandType_TypeDefinitionIndex = 30781;

	class CommandType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::UIR::CommandType* Draw; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* ImmediateCull; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* Immediate; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* PushView; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* PopView; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* PushScissor; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* PopScissor; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* PushRenderTexture; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* PopRenderTexture; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* BlitToPreviousRT; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* PushDefaultMaterial; // 0x0
		::UnityEngine::UIElements::UIR::CommandType* PopDefaultMaterial; // 0x0

	};
}

