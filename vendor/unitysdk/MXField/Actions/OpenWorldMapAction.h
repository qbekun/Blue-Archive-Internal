#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_OPENWORLDMAPACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF1400)
#define MXFIELD_ACTIONS_OPENWORLDMAPACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF1410)

namespace MXField::Actions
{
	inline static constexpr unsigned int OpenWorldMapAction_TypeDefinitionIndex = 11093;

	class OpenWorldMapAction : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OPENWORLDMAPACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OPENWORLDMAPACTION_COEXECUTE_OFFSET))(nullptr);
		}

	};
}

