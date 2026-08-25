#pragma once
#include "../unitysdk.h"

#define BOARDGAME_BOARDGAMEPLAYEND_SET_ISLOOP_OFFSET UNITYSDK_OFFSET(0xE13C20)
#define BOARDGAME_BOARDGAMEPLAYEND_GET_ONPLAYENDCOMPLETE_OFFSET UNITYSDK_OFFSET(0xE13C30)
#define BOARDGAME_BOARDGAMEPLAYEND_SET_ONPLAYENDCOMPLETE_OFFSET UNITYSDK_OFFSET(0xE13C40)
#define BOARDGAME_BOARDGAMEPLAYEND_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0BEC0)
#define BOARDGAME_BOARDGAMEPLAYEND_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0xE13C50)

namespace BoardGame
{
	inline static constexpr unsigned int BoardGamePlayEnd_TypeDefinitionIndex = 10310;

	class BoardGamePlayEnd : public Il2CppObject
	{
	public:
		::System::Boolean _IsLoop_k__BackingField; // 0x38
		::System::Action* _OnPlayEndComplete_k__BackingField; // 0x40

		::System::Void set_IsLoop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAYEND_SET_ISLOOP_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OnPlayEndComplete()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAYEND_GET_ONPLAYENDCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_OnPlayEndComplete(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAYEND_SET_ONPLAYENDCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAYEND_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAYEND_GET_ISLOOP_OFFSET))(nullptr);
		}

	};
}

