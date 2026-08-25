#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_PROPANIMATIONACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF4970)
#define MXFIELD_ACTIONS_PROPANIMATIONACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF4980)

namespace MXField::Actions
{
	inline static constexpr unsigned int PropAnimationAction_TypeDefinitionIndex = 11116;

	class PropAnimationAction : public Il2CppObject
	{
	public:
		::System::Int32 propId; // 0x40
		::System::String* animationName; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PROPANIMATIONACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PROPANIMATIONACTION_COEXECUTE_OFFSET))(nullptr);
		}

	};
}

