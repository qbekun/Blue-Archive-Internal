#pragma once
#include "../unitysdk.h"

namespace NPA { class NPResult; }

#define NPA_INPLISTENER_ONRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INPListener_TypeDefinitionIndex = 25531;

	class INPListener : public Il2CppObject
	{
	public:
		::System::Void OnResult(::NPA::NPResult* arg)
		{
			((::System::Void(*)(::NPA::NPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPLISTENER_ONRESULT_OFFSET))(arg, nullptr);
		}

	};
}

