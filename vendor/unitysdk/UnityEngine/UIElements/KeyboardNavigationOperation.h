#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class KeyboardNavigationOperation; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyboardNavigationOperation_TypeDefinitionIndex = 30115;

	class KeyboardNavigationOperation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::KeyboardNavigationOperation* None; // 0x0
		::UnityEngine::UIElements::KeyboardNavigationOperation* SelectAll; // 0x0
		::UnityEngine::UIElements::KeyboardNavigationOperation* Cancel; // 0x0
		::UnityEngine::UIElements::KeyboardNavigationOperation* Submit; // 0x0
		::UnityEngine::UIElements::KeyboardNavigationOperation* Previous; // 0x0
		::UnityEngine::UIElements::KeyboardNavigationOperation* Next; // 0x0
		::UnityEngine::UIElements::KeyboardNavigationOperation* PageUp; // 0x0
		::UnityEngine::UIElements::KeyboardNavigationOperation* PageDown; // 0x0
		::UnityEngine::UIElements::KeyboardNavigationOperation* Begin; // 0x0
		::UnityEngine::UIElements::KeyboardNavigationOperation* End; // 0x0

	};
}

