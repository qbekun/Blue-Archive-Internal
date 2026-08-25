#pragma once
#include "../../unitysdk.h"

namespace NPA { class NXPResult; }

#define NPA_EDITOR_NPLISTENER_ONRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor
{
	inline static constexpr unsigned int NPListener_TypeDefinitionIndex = 26176;

	class NPListener : public Il2CppObject
	{
	public:
		::System::Void onResult(::NPA::NXPResult* arg)
		{
			((::System::Void(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPLISTENER_ONRESULT_OFFSET))(arg, nullptr);
		}

	};
}

