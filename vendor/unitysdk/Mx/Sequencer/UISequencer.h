#pragma once
#include "../../unitysdk.h"

class UIBase;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_SEQUENCER_UISEQUENCER_LOGTRACE_KEYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0xEF90F0)
#define MX_SEQUENCER_UISEQUENCER__.CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0xEF9100)
#define MX_SEQUENCER_UISEQUENCER__.CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xEF9280)
#define MX_SEQUENCER_UISEQUENCER_HANDLEUICLOSE_OFFSET UNITYSDK_OFFSET(0xEF9380)
#define MX_SEQUENCER_UISEQUENCER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF9440)

namespace MX::Sequencer
{
	inline static constexpr unsigned int UISequencer_TypeDefinitionIndex = 11152;

	class UISequencer : public CollectionFixup
	{
	public:
		UIBase* ui; // 0x58

		::System::Void LogTrace_KeyNotFoundException(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_UISEQUENCER_LOGTRACE_KEYNOTFOUNDEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__1_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_UISEQUENCER__.CTOR_B__1_1_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__1_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_UISEQUENCER__.CTOR_B__1_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleUIClose(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_UISEQUENCER_HANDLEUICLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_UISEQUENCER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

