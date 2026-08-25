#pragma once
#include "../unitysdk.h"

namespace NPA { class NPCloseResult; }
namespace NPA { class NXPResult; }

#define NPA_NPCLOSERESULT_FROMTOYRESULT_OFFSET UNITYSDK_OFFSET(0x9BCC700)
#define NPA_NPCLOSERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCC800)

namespace NPA
{
	inline static constexpr unsigned int NPCloseResult_TypeDefinitionIndex = 25653;

	class NPCloseResult : public Il2CppObject
	{
	public:
		::System::String* screenName; // 0x20

		::NPA::NPCloseResult* fromToyResult(::NPA::NXPResult* arg)
		{
			return (return (::NPA::NPCloseResult*(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPCLOSERESULT_FROMTOYRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPCLOSERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

