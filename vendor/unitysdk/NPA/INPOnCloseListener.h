#pragma once
#include "../unitysdk.h"

namespace NPA { class NPCloseResult; }

#define NPA_INPONCLOSELISTENER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INPOnCloseListener_TypeDefinitionIndex = 25642;

	class INPOnCloseListener : public Il2CppObject
	{
	public:
		::System::Void OnClose(::NPA::NPCloseResult* arg)
		{
			((::System::Void(*)(::NPA::NPCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPONCLOSELISTENER_ONCLOSE_OFFSET))(arg, nullptr);
		}

	};
}

